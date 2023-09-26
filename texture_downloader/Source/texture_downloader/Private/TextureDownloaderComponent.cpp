// Fill out your copyright notice in the Description page of Project Settings.


#include "TextureDownloaderComponent.h"
#include "Components/StaticMeshComponent.h"
#include "HttpModule.h"
#include "Interfaces/IHttpRequest.h"
#include "Interfaces/IHttpResponse.h"
#include "IImageWrapperModule.h"
#include "IImageWrapper.h"


// Sets default values for this component's properties
UTextureDownloaderComponent::UTextureDownloaderComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UTextureDownloaderComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
    DownloadTextureFromURL("https://w7.pngwing.com/pngs/453/640/png-transparent-html-computer-icons-white-computer-software-unreal-engine-4-logo-angle-white-rectangle-thumbnail.png");
    
}

// Called every frame
void UTextureDownloaderComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    // ...
}


void UTextureDownloaderComponent::DownloadTextureFromURL(const FString& URL)
{
    // Create an HTTP request object
    TSharedRef<IHttpRequest> HttpRequest = FHttpModule::Get().CreateRequest();
    
    // Set the URL to download the texture from
    HttpRequest->SetURL(URL);
    
    // Set the HTTP verb (GET request)
    HttpRequest->SetVerb("GET");
    
    // Set a callback function to handle the response
    HttpRequest->OnProcessRequestComplete().BindUObject(this, &UTextureDownloaderComponent::OnTextureDownloadComplete);
    
    // Send the request
    HttpRequest->ProcessRequest();
}

void UTextureDownloaderComponent::OnTextureDownloadComplete(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
    if (bWasSuccessful && Response.IsValid() && Response->GetContentLength() > 0)
    {
        TArray<uint8> ImageData = Response->GetContent();
        
        IImageWrapperModule& ImageWrapperModule = FModuleManager::LoadModuleChecked<IImageWrapperModule>(FName(TEXT("ImageWrapper")));
        TSharedPtr<IImageWrapper> ImageWrapper = ImageWrapperModule.CreateImageWrapper(EImageFormat::PNG);
        
        if (ImageWrapper.IsValid() && ImageWrapper->SetCompressed(ImageData.GetData(), ImageData.Num()))
        {
            int32 Width = ImageWrapper->GetWidth();
            int32 Height = ImageWrapper->GetHeight();

            TArray<uint8> UncompressedData;
            if (ImageWrapper->GetRaw(ERGBFormat::BGRA, 8, UncompressedData))
            {
                UTexture2D* NewTexture = UTexture2D::CreateTransient(Width, Height, PF_B8G8R8A8);
                if (NewTexture)
                {
                    NewTexture->UpdateResource();
                    FTexture2DMipMap& Mip = NewTexture->GetPlatformData()->Mips[0];
                    
                    //Lock in order to read data
                    uint16* Data = reinterpret_cast<uint16*>(Mip.BulkData.Lock(LOCK_READ_WRITE));
                    check(Data);
                    
                    //Copy operation
                    FMemory::Memcpy(Data, UncompressedData.GetData(), UncompressedData.Num());
                    
                    // Unlock the texture data
                    Mip.BulkData.Unlock();
                    NewTexture->UpdateResource();
                    
                    // The NewTexture is now ready for use
                    ReplaceTextureOnMeshComponent(NewTexture);
                     
                }
            }
        }
    }
}

// Function to replace the texture on the mesh component
void UTextureDownloaderComponent::ReplaceTextureOnMeshComponent(UTexture* NewTexture)
{
    // Get a reference to the owning actor
    AActor* OwningActor = GetOwner();
    
    // Access and manipulate the actor or its components
    FString ActorName = OwningActor->GetName();
    
    UStaticMeshComponent* MyMesh = OwningActor->FindComponentByClass<UStaticMeshComponent>();
    
    // Create a dynamic material instance from the MeshComponent's material
    UMaterialInstanceDynamic* DynamicMaterial = MyMesh->CreateAndSetMaterialInstanceDynamic(0);
    
    // Set the texture parameter in the material to the new texture
    DynamicMaterial->SetTextureParameterValue("_MainTex", NewTexture);
}

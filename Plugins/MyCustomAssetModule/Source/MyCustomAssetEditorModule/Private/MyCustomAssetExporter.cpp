#include "MyCustomAssetExporter.h"
#include "MyCustomAsset.h"

UMyCustomAssetExporter::UMyCustomAssetExporter(const FObjectInitializer& ObjectInitalizer)
	:Super(ObjectInitalizer)
{
	SupportedClass = UMyCustomAsset::StaticClass();
	PreferredFormatIndex = 0;
	FormatExtension.Add(TEXT("myfile"));
	FormatDescription.Add(TEXT("myfile file"));
}

bool UMyCustomAssetExporter::SupportsObject(UObject* Object) const
{
	bool bSupportsObject = false;
	if (Super::SupportsObject(Object))
	{
		bSupportsObject = IsValid(Cast<UMyCustomAsset>(Object));
	}
	return bSupportsObject;
}

bool UMyCustomAssetExporter::ExportBinary(UObject* Object, const TCHAR* Type, FArchive& Ar, FFeedbackContext* Warn,
	int32 FileIndex /* = 0 */, uint32 PortFlags/* =0 */)
{
	UMyCustomAsset* Asset = Cast<UMyCustomAsset>(Object);
	if (!IsValid(Object))
	{
		return false;
	}
	Ar << Asset->IntValue;
	return true;
}


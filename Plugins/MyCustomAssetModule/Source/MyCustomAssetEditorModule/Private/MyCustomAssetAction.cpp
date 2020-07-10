#include "MyCustomAssetAction.h"
#include "MyCustomasset.h"


uint32 FMyCustomAssetAction::GetCategories()
{
	return EAssetTypeCategories::Basic;
}

FText FMyCustomAssetAction::GetName() const
{
	return FText::FromString(GetSupportedClass()->GetName());
}

UClass* FMyCustomAssetAction::GetSupportedClass() const
{
	return UMyCustomAsset::StaticClass();
}

FColor FMyCustomAssetAction::GetTypeColor() const
{
	return FColor::Green;
}

bool FMyCustomAssetAction::HasActions(const TArray<UObject *>& InObjects)const 
{
	return true;
}

void FMyCustomAssetAction::GetActions(const TArray<UObject *>& InObjects, FMenuBuilder& MenuBuilder)
{
	FAssetTypeActions_Base::GetActions(InObjects, MenuBuilder);
	auto Assets = GetTypedWeakObjectPtrs<UMyCustomAsset>(InObjects);
	MenuBuilder.AddMenuEntry(
		FText::FromString(TEXT("IncreaseTest")),
		FText::FromString(TEXT("IncreaseTest_ToolTip")),
		FSlateIcon(),
		FUIAction(
			FExecuteAction::CreateLambda(
				[Assets, InObjects]
				{
					for (auto Asset : Assets)
					{
						if (Asset.IsValid())
						{
							Asset->Inc();
							Asset->MarkPackageDirty();
						}
					}
				}
			),
			FCanExecuteAction::CreateLambda(
				[Assets]
				{
					for (auto Asset : Assets)
					{
						if (Asset.IsValid())
						{
							return true;
						}
						return false;
					}
					return false;
				}
			)
		)
	);
}


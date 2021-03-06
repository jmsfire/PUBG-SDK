#pragma once

// PlayerUnknown's Battlegrounds SDK

#ifdef _MSC_VER
#pragma pack(push, 0x8)
#endif

namespace Classes {
	//---------------------------------------------------------------------------
	//Classes
	//---------------------------------------------------------------------------

	// BlueprintGeneratedClass WidgetFunctionLibrary.WidgetFunctionLibrary_C
	// 0x0000 (0x0028 - 0x0028)
	class UWidgetFunctionLibrary_C : public UBlueprintFunctionLibrary {
	public:

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x6955d4e5);
			return ptr;
		}


		void STATIC_GetOwningShooterCharacter(class UUserWidget* UserWidget, class UObject* __WorldContext, class ATslCharacter** ShooterCharacter);
	};


}

#ifdef _MSC_VER
#pragma pack(pop)
#endif

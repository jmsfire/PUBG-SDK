// PlayerUnknown's Battlegrounds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ReplayTimeline.ReplayTimeline_C.ClearKillEventItems
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UReplayTimeline_C::ClearKillEventItems()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xb018b922);

	UReplayTimeline_C_ClearKillEventItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.CreateGetKillEventsTimer
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UReplayTimeline_C::CreateGetKillEventsTimer()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xa0bddd59);

	UReplayTimeline_C_CreateGetKillEventsTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.UpdatePlayPauseBtns
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UReplayTimeline_C::UpdatePlayPauseBtns()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xed4090a3);

	UReplayTimeline_C_UpdatePlayPauseBtns_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.SetVisibleCtrls
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bVisible                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UReplayTimeline_C::SetVisibleCtrls(bool bVisible)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x375e67e5);

	UReplayTimeline_C_SetVisibleCtrls_Params params;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.OnSpeedDown
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UReplayTimeline_C::OnSpeedDown()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x1a03571d);

	UReplayTimeline_C_OnSpeedDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.OnSpeedUp
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UReplayTimeline_C::OnSpeedUp()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xe90a8972);

	UReplayTimeline_C_OnSpeedUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.OnPlay
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UReplayTimeline_C::OnPlay()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x582091ee);

	UReplayTimeline_C_OnPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.OnPause
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UReplayTimeline_C::OnPause()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x342cf3ce);

	UReplayTimeline_C_OnPause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.OnTogglePause
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UReplayTimeline_C::OnTogglePause()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x3e4509ca);

	UReplayTimeline_C_OnTogglePause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.SetEnableUI
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsEnable                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UReplayTimeline_C::SetEnableUI(bool IsEnable)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xf066bdba);

	UReplayTimeline_C_SetEnableUI_Params params;
	params.IsEnable = IsEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.HideKillEvents
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UReplayTimeline_C::HideKillEvents()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xac6492f0);

	UReplayTimeline_C_HideKillEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.ShowKillEvents
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UReplayTimeline_C::ShowKillEvents()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x6b5747d7);

	UReplayTimeline_C_ShowKillEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.SetCurTimeSpeed
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UReplayTimeline_C::SetCurTimeSpeed()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xaaef6b73);

	UReplayTimeline_C_SetCurTimeSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.FloatToSeconds
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          InputTime                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   TextTime                       (CPF_Parm, CPF_OutParm)

void UReplayTimeline_C::FloatToSeconds(float InputTime, struct FText* TextTime)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xe3696ca3);

	UReplayTimeline_C_FloatToSeconds_Params params;
	params.InputTime = InputTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TextTime != nullptr)
		*TextTime = params.TextTime;
}


// Function ReplayTimeline.ReplayTimeline_C.UpdateTimeline
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UReplayTimeline_C::UpdateTimeline()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x56a7fa1d);

	UReplayTimeline_C_UpdateTimeline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UReplayTimeline_C::Construct()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xd7994a1e);

	UReplayTimeline_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// float*                         InDeltaTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UReplayTimeline_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x155e88c4);

	UReplayTimeline_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.BndEvt__TimelineSlider_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UReplayTimeline_C::BndEvt__TimelineSlider_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x32991dad);

	UReplayTimeline_C_BndEvt__TimelineSlider_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.BndEvt__BtnPause_K2Node_ComponentBoundEvent_234_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UReplayTimeline_C::BndEvt__BtnPause_K2Node_ComponentBoundEvent_234_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x9af50cba);

	UReplayTimeline_C_BndEvt__BtnPause_K2Node_ComponentBoundEvent_234_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.BndEvt__BtnPlay_K2Node_ComponentBoundEvent_257_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UReplayTimeline_C::BndEvt__BtnPlay_K2Node_ComponentBoundEvent_257_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x3742f09f);

	UReplayTimeline_C_BndEvt__BtnPlay_K2Node_ComponentBoundEvent_257_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.BndEvt__BtnSpeedUp_K2Node_ComponentBoundEvent_317_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UReplayTimeline_C::BndEvt__BtnSpeedUp_K2Node_ComponentBoundEvent_317_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x66055c7e);

	UReplayTimeline_C_BndEvt__BtnSpeedUp_K2Node_ComponentBoundEvent_317_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.BndEvt__BtnSpeedDown_K2Node_ComponentBoundEvent_338_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UReplayTimeline_C::BndEvt__BtnSpeedDown_K2Node_ComponentBoundEvent_338_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x9498ad1a);

	UReplayTimeline_C_BndEvt__BtnSpeedDown_K2Node_ComponentBoundEvent_338_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.GetKillEventsDone
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UReplayTimeline_C::GetKillEventsDone()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x54a3f496);

	UReplayTimeline_C_GetKillEventsDone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.BndEvt__CheckBoxKills_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UReplayTimeline_C::BndEvt__CheckBoxKills_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x1f1e4fd7);

	UReplayTimeline_C_BndEvt__CheckBoxKills_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.GetKillEvents
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UReplayTimeline_C::GetKillEvents()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x483ea97e);

	UReplayTimeline_C_GetKillEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UReplayTimeline_C::Destruct()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x1392925d);

	UReplayTimeline_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.ExecuteUbergraph_ReplayTimeline
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UReplayTimeline_C::ExecuteUbergraph_ReplayTimeline(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x20506ce3);

	UReplayTimeline_C_ExecuteUbergraph_ReplayTimeline_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

/*
    VariableTypeClass: NonExclusiveLimitAlarmType

    Generated Source Code - please do not change this source code

    VariableTypeCodeGenerator Version:
        OpcUaStackCore - 4.0.0

    Autor: Kai Huebl (kai@huebl-sgh.de)
*/

#include "OpcUaStackServer/StandardObjectType/NonExclusiveLimitAlarmType.h"

namespace OpcUaStackServer
{
    
    NonExclusiveLimitAlarmType::NonExclusiveLimitAlarmType(void)
    : ObjectBase()
    , ackedState_FalseState_Variable_(boost::make_shared<ServerVariable>("AckedState_FalseState_Variable"))
    , ackedState_Id_Variable_(boost::make_shared<ServerVariable>("AckedState_Id_Variable"))
    , ackedState_TransitionTime_Variable_(boost::make_shared<ServerVariable>("AckedState_TransitionTime_Variable"))
    , ackedState_TrueState_Variable_(boost::make_shared<ServerVariable>("AckedState_TrueState_Variable"))
    , ackedState_Variable_(boost::make_shared<ServerVariable>("AckedState_Variable"))
    , activeState_EffectiveDisplayName_Variable_(boost::make_shared<ServerVariable>("ActiveState_EffectiveDisplayName_Variable"))
    , activeState_EffectiveTransitionTime_Variable_(boost::make_shared<ServerVariable>("ActiveState_EffectiveTransitionTime_Variable"))
    , activeState_FalseState_Variable_(boost::make_shared<ServerVariable>("ActiveState_FalseState_Variable"))
    , activeState_Id_Variable_(boost::make_shared<ServerVariable>("ActiveState_Id_Variable"))
    , activeState_TransitionTime_Variable_(boost::make_shared<ServerVariable>("ActiveState_TransitionTime_Variable"))
    , activeState_TrueState_Variable_(boost::make_shared<ServerVariable>("ActiveState_TrueState_Variable"))
    , activeState_Variable_(boost::make_shared<ServerVariable>("ActiveState_Variable"))
    , audibleEnabled_Variable_(boost::make_shared<ServerVariable>("AudibleEnabled_Variable"))
    , audibleSound_Variable_(boost::make_shared<ServerVariable>("AudibleSound_Variable"))
    , baseHighHighLimit_Variable_(boost::make_shared<ServerVariable>("BaseHighHighLimit_Variable"))
    , baseHighLimit_Variable_(boost::make_shared<ServerVariable>("BaseHighLimit_Variable"))
    , baseLowLimit_Variable_(boost::make_shared<ServerVariable>("BaseLowLimit_Variable"))
    , baseLowLowLimit_Variable_(boost::make_shared<ServerVariable>("BaseLowLowLimit_Variable"))
    , branchId_Variable_(boost::make_shared<ServerVariable>("BranchId_Variable"))
    , clientUserId_Variable_(boost::make_shared<ServerVariable>("ClientUserId_Variable"))
    , comment_SourceTimestamp_Variable_(boost::make_shared<ServerVariable>("Comment_SourceTimestamp_Variable"))
    , comment_Variable_(boost::make_shared<ServerVariable>("Comment_Variable"))
    , conditionClassId_Variable_(boost::make_shared<ServerVariable>("ConditionClassId_Variable"))
    , conditionClassName_Variable_(boost::make_shared<ServerVariable>("ConditionClassName_Variable"))
    , conditionName_Variable_(boost::make_shared<ServerVariable>("ConditionName_Variable"))
    , conditionSubClassId_Variable_(boost::make_shared<ServerVariable>("ConditionSubClassId_Variable"))
    , conditionSubClassName_Variable_(boost::make_shared<ServerVariable>("ConditionSubClassName_Variable"))
    , confirmedState_FalseState_Variable_(boost::make_shared<ServerVariable>("ConfirmedState_FalseState_Variable"))
    , confirmedState_Id_Variable_(boost::make_shared<ServerVariable>("ConfirmedState_Id_Variable"))
    , confirmedState_TransitionTime_Variable_(boost::make_shared<ServerVariable>("ConfirmedState_TransitionTime_Variable"))
    , confirmedState_TrueState_Variable_(boost::make_shared<ServerVariable>("ConfirmedState_TrueState_Variable"))
    , confirmedState_Variable_(boost::make_shared<ServerVariable>("ConfirmedState_Variable"))
    , enabledState_EffectiveDisplayName_Variable_(boost::make_shared<ServerVariable>("EnabledState_EffectiveDisplayName_Variable"))
    , enabledState_EffectiveTransitionTime_Variable_(boost::make_shared<ServerVariable>("EnabledState_EffectiveTransitionTime_Variable"))
    , enabledState_FalseState_Variable_(boost::make_shared<ServerVariable>("EnabledState_FalseState_Variable"))
    , enabledState_Id_Variable_(boost::make_shared<ServerVariable>("EnabledState_Id_Variable"))
    , enabledState_TransitionTime_Variable_(boost::make_shared<ServerVariable>("EnabledState_TransitionTime_Variable"))
    , enabledState_TrueState_Variable_(boost::make_shared<ServerVariable>("EnabledState_TrueState_Variable"))
    , enabledState_Variable_(boost::make_shared<ServerVariable>("EnabledState_Variable"))
    , eventId_Variable_(boost::make_shared<ServerVariable>("EventId_Variable"))
    , eventType_Variable_(boost::make_shared<ServerVariable>("EventType_Variable"))
    , firstInGroupFlag_Variable_(boost::make_shared<ServerVariable>("FirstInGroupFlag_Variable"))
    , highHighLimit_Variable_(boost::make_shared<ServerVariable>("HighHighLimit_Variable"))
    , highHighState_FalseState_Variable_(boost::make_shared<ServerVariable>("HighHighState_FalseState_Variable"))
    , highHighState_Id_Variable_(boost::make_shared<ServerVariable>("HighHighState_Id_Variable"))
    , highHighState_TransitionTime_Variable_(boost::make_shared<ServerVariable>("HighHighState_TransitionTime_Variable"))
    , highHighState_TrueState_Variable_(boost::make_shared<ServerVariable>("HighHighState_TrueState_Variable"))
    , highHighState_Variable_(boost::make_shared<ServerVariable>("HighHighState_Variable"))
    , highLimit_Variable_(boost::make_shared<ServerVariable>("HighLimit_Variable"))
    , highState_FalseState_Variable_(boost::make_shared<ServerVariable>("HighState_FalseState_Variable"))
    , highState_Id_Variable_(boost::make_shared<ServerVariable>("HighState_Id_Variable"))
    , highState_TransitionTime_Variable_(boost::make_shared<ServerVariable>("HighState_TransitionTime_Variable"))
    , highState_TrueState_Variable_(boost::make_shared<ServerVariable>("HighState_TrueState_Variable"))
    , highState_Variable_(boost::make_shared<ServerVariable>("HighState_Variable"))
    , inputNode_Variable_(boost::make_shared<ServerVariable>("InputNode_Variable"))
    , lastSeverity_SourceTimestamp_Variable_(boost::make_shared<ServerVariable>("LastSeverity_SourceTimestamp_Variable"))
    , lastSeverity_Variable_(boost::make_shared<ServerVariable>("LastSeverity_Variable"))
    , latchedState_FalseState_Variable_(boost::make_shared<ServerVariable>("LatchedState_FalseState_Variable"))
    , latchedState_Id_Variable_(boost::make_shared<ServerVariable>("LatchedState_Id_Variable"))
    , latchedState_TransitionTime_Variable_(boost::make_shared<ServerVariable>("LatchedState_TransitionTime_Variable"))
    , latchedState_TrueState_Variable_(boost::make_shared<ServerVariable>("LatchedState_TrueState_Variable"))
    , latchedState_Variable_(boost::make_shared<ServerVariable>("LatchedState_Variable"))
    , localTime_Variable_(boost::make_shared<ServerVariable>("LocalTime_Variable"))
    , lowLimit_Variable_(boost::make_shared<ServerVariable>("LowLimit_Variable"))
    , lowLowLimit_Variable_(boost::make_shared<ServerVariable>("LowLowLimit_Variable"))
    , lowLowState_FalseState_Variable_(boost::make_shared<ServerVariable>("LowLowState_FalseState_Variable"))
    , lowLowState_Id_Variable_(boost::make_shared<ServerVariable>("LowLowState_Id_Variable"))
    , lowLowState_TransitionTime_Variable_(boost::make_shared<ServerVariable>("LowLowState_TransitionTime_Variable"))
    , lowLowState_TrueState_Variable_(boost::make_shared<ServerVariable>("LowLowState_TrueState_Variable"))
    , lowLowState_Variable_(boost::make_shared<ServerVariable>("LowLowState_Variable"))
    , lowState_FalseState_Variable_(boost::make_shared<ServerVariable>("LowState_FalseState_Variable"))
    , lowState_Id_Variable_(boost::make_shared<ServerVariable>("LowState_Id_Variable"))
    , lowState_TransitionTime_Variable_(boost::make_shared<ServerVariable>("LowState_TransitionTime_Variable"))
    , lowState_TrueState_Variable_(boost::make_shared<ServerVariable>("LowState_TrueState_Variable"))
    , lowState_Variable_(boost::make_shared<ServerVariable>("LowState_Variable"))
    , maxTimeShelved_Variable_(boost::make_shared<ServerVariable>("MaxTimeShelved_Variable"))
    , message_Variable_(boost::make_shared<ServerVariable>("Message_Variable"))
    , offDelay_Variable_(boost::make_shared<ServerVariable>("OffDelay_Variable"))
    , onDelay_Variable_(boost::make_shared<ServerVariable>("OnDelay_Variable"))
    , outOfServiceState_FalseState_Variable_(boost::make_shared<ServerVariable>("OutOfServiceState_FalseState_Variable"))
    , outOfServiceState_Id_Variable_(boost::make_shared<ServerVariable>("OutOfServiceState_Id_Variable"))
    , outOfServiceState_TransitionTime_Variable_(boost::make_shared<ServerVariable>("OutOfServiceState_TransitionTime_Variable"))
    , outOfServiceState_TrueState_Variable_(boost::make_shared<ServerVariable>("OutOfServiceState_TrueState_Variable"))
    , outOfServiceState_Variable_(boost::make_shared<ServerVariable>("OutOfServiceState_Variable"))
    , quality_SourceTimestamp_Variable_(boost::make_shared<ServerVariable>("Quality_SourceTimestamp_Variable"))
    , quality_Variable_(boost::make_shared<ServerVariable>("Quality_Variable"))
    , reAlarmRepeatCount_Variable_(boost::make_shared<ServerVariable>("ReAlarmRepeatCount_Variable"))
    , reAlarmTime_Variable_(boost::make_shared<ServerVariable>("ReAlarmTime_Variable"))
    , receiveTime_Variable_(boost::make_shared<ServerVariable>("ReceiveTime_Variable"))
    , retain_Variable_(boost::make_shared<ServerVariable>("Retain_Variable"))
    , severity_Variable_(boost::make_shared<ServerVariable>("Severity_Variable"))
    , shelvingState_CurrentState_Id_Variable_(boost::make_shared<ServerVariable>("ShelvingState_CurrentState_Id_Variable"))
    , shelvingState_CurrentState_Variable_(boost::make_shared<ServerVariable>("ShelvingState_CurrentState_Variable"))
    , shelvingState_LastTransition_Id_Variable_(boost::make_shared<ServerVariable>("ShelvingState_LastTransition_Id_Variable"))
    , shelvingState_LastTransition_TransitionTime_Variable_(boost::make_shared<ServerVariable>("ShelvingState_LastTransition_TransitionTime_Variable"))
    , shelvingState_LastTransition_Variable_(boost::make_shared<ServerVariable>("ShelvingState_LastTransition_Variable"))
    , shelvingState_UnshelveTime_Variable_(boost::make_shared<ServerVariable>("ShelvingState_UnshelveTime_Variable"))
    , silenceState_FalseState_Variable_(boost::make_shared<ServerVariable>("SilenceState_FalseState_Variable"))
    , silenceState_Id_Variable_(boost::make_shared<ServerVariable>("SilenceState_Id_Variable"))
    , silenceState_TransitionTime_Variable_(boost::make_shared<ServerVariable>("SilenceState_TransitionTime_Variable"))
    , silenceState_TrueState_Variable_(boost::make_shared<ServerVariable>("SilenceState_TrueState_Variable"))
    , silenceState_Variable_(boost::make_shared<ServerVariable>("SilenceState_Variable"))
    , sourceName_Variable_(boost::make_shared<ServerVariable>("SourceName_Variable"))
    , sourceNode_Variable_(boost::make_shared<ServerVariable>("SourceNode_Variable"))
    , suppressedOrShelved_Variable_(boost::make_shared<ServerVariable>("SuppressedOrShelved_Variable"))
    , suppressedState_FalseState_Variable_(boost::make_shared<ServerVariable>("SuppressedState_FalseState_Variable"))
    , suppressedState_Id_Variable_(boost::make_shared<ServerVariable>("SuppressedState_Id_Variable"))
    , suppressedState_TransitionTime_Variable_(boost::make_shared<ServerVariable>("SuppressedState_TransitionTime_Variable"))
    , suppressedState_TrueState_Variable_(boost::make_shared<ServerVariable>("SuppressedState_TrueState_Variable"))
    , suppressedState_Variable_(boost::make_shared<ServerVariable>("SuppressedState_Variable"))
    , time_Variable_(boost::make_shared<ServerVariable>("Time_Variable"))
    , acknowledge_Method_(boost::make_shared<ServerMethod>("Acknowledge_Method"))
    , addComment_Method_(boost::make_shared<ServerMethod>("AddComment_Method"))
    , confirm_Method_(boost::make_shared<ServerMethod>("Confirm_Method"))
    , disable_Method_(boost::make_shared<ServerMethod>("Disable_Method"))
    , enable_Method_(boost::make_shared<ServerMethod>("Enable_Method"))
    , placeInService_Method_(boost::make_shared<ServerMethod>("PlaceInService_Method"))
    , removeFromService_Method_(boost::make_shared<ServerMethod>("RemoveFromService_Method"))
    , reset_Method_(boost::make_shared<ServerMethod>("Reset_Method"))
    , shelvingState_OneShotShelve_Method_(boost::make_shared<ServerMethod>("ShelvingState_OneShotShelve_Method"))
    , shelvingState_TimedShelve_Method_(boost::make_shared<ServerMethod>("ShelvingState_TimedShelve_Method"))
    , shelvingState_Unshelve_Method_(boost::make_shared<ServerMethod>("ShelvingState_Unshelve_Method"))
    , silence_Method_(boost::make_shared<ServerMethod>("Silence_Method"))
    , suppress_Method_(boost::make_shared<ServerMethod>("Suppress_Method"))
    , unsuppress_Method_(boost::make_shared<ServerMethod>("Unsuppress_Method"))
    {
        objectTypeNamespaceName("http://opcfoundation.org/UA/");
        objectTypeNodeId((OpcUaUInt32)9906);
        setServerVariable(ackedState_FalseState_Variable_);
        setServerVariable(ackedState_Id_Variable_);
        setServerVariable(ackedState_TransitionTime_Variable_);
        setServerVariable(ackedState_TrueState_Variable_);
        setServerVariable(ackedState_Variable_);
        setServerVariable(activeState_EffectiveDisplayName_Variable_);
        setServerVariable(activeState_EffectiveTransitionTime_Variable_);
        setServerVariable(activeState_FalseState_Variable_);
        setServerVariable(activeState_Id_Variable_);
        setServerVariable(activeState_TransitionTime_Variable_);
        setServerVariable(activeState_TrueState_Variable_);
        setServerVariable(activeState_Variable_);
        setServerVariable(audibleEnabled_Variable_);
        setServerVariable(audibleSound_Variable_);
        setServerVariable(baseHighHighLimit_Variable_);
        setServerVariable(baseHighLimit_Variable_);
        setServerVariable(baseLowLimit_Variable_);
        setServerVariable(baseLowLowLimit_Variable_);
        setServerVariable(branchId_Variable_);
        setServerVariable(clientUserId_Variable_);
        setServerVariable(comment_SourceTimestamp_Variable_);
        setServerVariable(comment_Variable_);
        setServerVariable(conditionClassId_Variable_);
        setServerVariable(conditionClassName_Variable_);
        setServerVariable(conditionName_Variable_);
        setServerVariable(conditionSubClassId_Variable_);
        setServerVariable(conditionSubClassName_Variable_);
        setServerVariable(confirmedState_FalseState_Variable_);
        setServerVariable(confirmedState_Id_Variable_);
        setServerVariable(confirmedState_TransitionTime_Variable_);
        setServerVariable(confirmedState_TrueState_Variable_);
        setServerVariable(confirmedState_Variable_);
        setServerVariable(enabledState_EffectiveDisplayName_Variable_);
        setServerVariable(enabledState_EffectiveTransitionTime_Variable_);
        setServerVariable(enabledState_FalseState_Variable_);
        setServerVariable(enabledState_Id_Variable_);
        setServerVariable(enabledState_TransitionTime_Variable_);
        setServerVariable(enabledState_TrueState_Variable_);
        setServerVariable(enabledState_Variable_);
        setServerVariable(eventId_Variable_);
        setServerVariable(eventType_Variable_);
        setServerVariable(firstInGroupFlag_Variable_);
        setServerVariable(highHighLimit_Variable_);
        setServerVariable(highHighState_FalseState_Variable_);
        setServerVariable(highHighState_Id_Variable_);
        setServerVariable(highHighState_TransitionTime_Variable_);
        setServerVariable(highHighState_TrueState_Variable_);
        setServerVariable(highHighState_Variable_);
        setServerVariable(highLimit_Variable_);
        setServerVariable(highState_FalseState_Variable_);
        setServerVariable(highState_Id_Variable_);
        setServerVariable(highState_TransitionTime_Variable_);
        setServerVariable(highState_TrueState_Variable_);
        setServerVariable(highState_Variable_);
        setServerVariable(inputNode_Variable_);
        setServerVariable(lastSeverity_SourceTimestamp_Variable_);
        setServerVariable(lastSeverity_Variable_);
        setServerVariable(latchedState_FalseState_Variable_);
        setServerVariable(latchedState_Id_Variable_);
        setServerVariable(latchedState_TransitionTime_Variable_);
        setServerVariable(latchedState_TrueState_Variable_);
        setServerVariable(latchedState_Variable_);
        setServerVariable(localTime_Variable_);
        setServerVariable(lowLimit_Variable_);
        setServerVariable(lowLowLimit_Variable_);
        setServerVariable(lowLowState_FalseState_Variable_);
        setServerVariable(lowLowState_Id_Variable_);
        setServerVariable(lowLowState_TransitionTime_Variable_);
        setServerVariable(lowLowState_TrueState_Variable_);
        setServerVariable(lowLowState_Variable_);
        setServerVariable(lowState_FalseState_Variable_);
        setServerVariable(lowState_Id_Variable_);
        setServerVariable(lowState_TransitionTime_Variable_);
        setServerVariable(lowState_TrueState_Variable_);
        setServerVariable(lowState_Variable_);
        setServerVariable(maxTimeShelved_Variable_);
        setServerVariable(message_Variable_);
        setServerVariable(offDelay_Variable_);
        setServerVariable(onDelay_Variable_);
        setServerVariable(outOfServiceState_FalseState_Variable_);
        setServerVariable(outOfServiceState_Id_Variable_);
        setServerVariable(outOfServiceState_TransitionTime_Variable_);
        setServerVariable(outOfServiceState_TrueState_Variable_);
        setServerVariable(outOfServiceState_Variable_);
        setServerVariable(quality_SourceTimestamp_Variable_);
        setServerVariable(quality_Variable_);
        setServerVariable(reAlarmRepeatCount_Variable_);
        setServerVariable(reAlarmTime_Variable_);
        setServerVariable(receiveTime_Variable_);
        setServerVariable(retain_Variable_);
        setServerVariable(severity_Variable_);
        setServerVariable(shelvingState_CurrentState_Id_Variable_);
        setServerVariable(shelvingState_CurrentState_Variable_);
        setServerVariable(shelvingState_LastTransition_Id_Variable_);
        setServerVariable(shelvingState_LastTransition_TransitionTime_Variable_);
        setServerVariable(shelvingState_LastTransition_Variable_);
        setServerVariable(shelvingState_UnshelveTime_Variable_);
        setServerVariable(silenceState_FalseState_Variable_);
        setServerVariable(silenceState_Id_Variable_);
        setServerVariable(silenceState_TransitionTime_Variable_);
        setServerVariable(silenceState_TrueState_Variable_);
        setServerVariable(silenceState_Variable_);
        setServerVariable(sourceName_Variable_);
        setServerVariable(sourceNode_Variable_);
        setServerVariable(suppressedOrShelved_Variable_);
        setServerVariable(suppressedState_FalseState_Variable_);
        setServerVariable(suppressedState_Id_Variable_);
        setServerVariable(suppressedState_TransitionTime_Variable_);
        setServerVariable(suppressedState_TrueState_Variable_);
        setServerVariable(suppressedState_Variable_);
        setServerVariable(time_Variable_);
        setServerMethod(acknowledge_Method_);
        setServerMethod(addComment_Method_);
        setServerMethod(confirm_Method_);
        setServerMethod(disable_Method_);
        setServerMethod(enable_Method_);
        setServerMethod(placeInService_Method_);
        setServerMethod(removeFromService_Method_);
        setServerMethod(reset_Method_);
        setServerMethod(shelvingState_OneShotShelve_Method_);
        setServerMethod(shelvingState_TimedShelve_Method_);
        setServerMethod(shelvingState_Unshelve_Method_);
        setServerMethod(silence_Method_);
        setServerMethod(suppress_Method_);
        setServerMethod(unsuppress_Method_);
        acknowledge_Method_->registerMethod(boost::bind(&NonExclusiveLimitAlarmType::call_Acknowledge_Method, this, _1));
        addComment_Method_->registerMethod(boost::bind(&NonExclusiveLimitAlarmType::call_AddComment_Method, this, _1));
        confirm_Method_->registerMethod(boost::bind(&NonExclusiveLimitAlarmType::call_Confirm_Method, this, _1));
        disable_Method_->registerMethod(boost::bind(&NonExclusiveLimitAlarmType::call_Disable_Method, this, _1));
        enable_Method_->registerMethod(boost::bind(&NonExclusiveLimitAlarmType::call_Enable_Method, this, _1));
        placeInService_Method_->registerMethod(boost::bind(&NonExclusiveLimitAlarmType::call_PlaceInService_Method, this, _1));
        removeFromService_Method_->registerMethod(boost::bind(&NonExclusiveLimitAlarmType::call_RemoveFromService_Method, this, _1));
        reset_Method_->registerMethod(boost::bind(&NonExclusiveLimitAlarmType::call_Reset_Method, this, _1));
        shelvingState_OneShotShelve_Method_->registerMethod(boost::bind(&NonExclusiveLimitAlarmType::call_ShelvingState_OneShotShelve_Method, this, _1));
        shelvingState_TimedShelve_Method_->registerMethod(boost::bind(&NonExclusiveLimitAlarmType::call_ShelvingState_TimedShelve_Method, this, _1));
        shelvingState_Unshelve_Method_->registerMethod(boost::bind(&NonExclusiveLimitAlarmType::call_ShelvingState_Unshelve_Method, this, _1));
        silence_Method_->registerMethod(boost::bind(&NonExclusiveLimitAlarmType::call_Silence_Method, this, _1));
        suppress_Method_->registerMethod(boost::bind(&NonExclusiveLimitAlarmType::call_Suppress_Method, this, _1));
        unsuppress_Method_->registerMethod(boost::bind(&NonExclusiveLimitAlarmType::call_Unsuppress_Method, this, _1));
    }
    
    NonExclusiveLimitAlarmType::NonExclusiveLimitAlarmType(const NonExclusiveLimitAlarmType& value)
    : ObjectBase()
    , ackedState_FalseState_Variable_(boost::make_shared<ServerVariable>("AckedState_FalseState_Variable"))
    , ackedState_Id_Variable_(boost::make_shared<ServerVariable>("AckedState_Id_Variable"))
    , ackedState_TransitionTime_Variable_(boost::make_shared<ServerVariable>("AckedState_TransitionTime_Variable"))
    , ackedState_TrueState_Variable_(boost::make_shared<ServerVariable>("AckedState_TrueState_Variable"))
    , ackedState_Variable_(boost::make_shared<ServerVariable>("AckedState_Variable"))
    , activeState_EffectiveDisplayName_Variable_(boost::make_shared<ServerVariable>("ActiveState_EffectiveDisplayName_Variable"))
    , activeState_EffectiveTransitionTime_Variable_(boost::make_shared<ServerVariable>("ActiveState_EffectiveTransitionTime_Variable"))
    , activeState_FalseState_Variable_(boost::make_shared<ServerVariable>("ActiveState_FalseState_Variable"))
    , activeState_Id_Variable_(boost::make_shared<ServerVariable>("ActiveState_Id_Variable"))
    , activeState_TransitionTime_Variable_(boost::make_shared<ServerVariable>("ActiveState_TransitionTime_Variable"))
    , activeState_TrueState_Variable_(boost::make_shared<ServerVariable>("ActiveState_TrueState_Variable"))
    , activeState_Variable_(boost::make_shared<ServerVariable>("ActiveState_Variable"))
    , audibleEnabled_Variable_(boost::make_shared<ServerVariable>("AudibleEnabled_Variable"))
    , audibleSound_Variable_(boost::make_shared<ServerVariable>("AudibleSound_Variable"))
    , baseHighHighLimit_Variable_(boost::make_shared<ServerVariable>("BaseHighHighLimit_Variable"))
    , baseHighLimit_Variable_(boost::make_shared<ServerVariable>("BaseHighLimit_Variable"))
    , baseLowLimit_Variable_(boost::make_shared<ServerVariable>("BaseLowLimit_Variable"))
    , baseLowLowLimit_Variable_(boost::make_shared<ServerVariable>("BaseLowLowLimit_Variable"))
    , branchId_Variable_(boost::make_shared<ServerVariable>("BranchId_Variable"))
    , clientUserId_Variable_(boost::make_shared<ServerVariable>("ClientUserId_Variable"))
    , comment_SourceTimestamp_Variable_(boost::make_shared<ServerVariable>("Comment_SourceTimestamp_Variable"))
    , comment_Variable_(boost::make_shared<ServerVariable>("Comment_Variable"))
    , conditionClassId_Variable_(boost::make_shared<ServerVariable>("ConditionClassId_Variable"))
    , conditionClassName_Variable_(boost::make_shared<ServerVariable>("ConditionClassName_Variable"))
    , conditionName_Variable_(boost::make_shared<ServerVariable>("ConditionName_Variable"))
    , conditionSubClassId_Variable_(boost::make_shared<ServerVariable>("ConditionSubClassId_Variable"))
    , conditionSubClassName_Variable_(boost::make_shared<ServerVariable>("ConditionSubClassName_Variable"))
    , confirmedState_FalseState_Variable_(boost::make_shared<ServerVariable>("ConfirmedState_FalseState_Variable"))
    , confirmedState_Id_Variable_(boost::make_shared<ServerVariable>("ConfirmedState_Id_Variable"))
    , confirmedState_TransitionTime_Variable_(boost::make_shared<ServerVariable>("ConfirmedState_TransitionTime_Variable"))
    , confirmedState_TrueState_Variable_(boost::make_shared<ServerVariable>("ConfirmedState_TrueState_Variable"))
    , confirmedState_Variable_(boost::make_shared<ServerVariable>("ConfirmedState_Variable"))
    , enabledState_EffectiveDisplayName_Variable_(boost::make_shared<ServerVariable>("EnabledState_EffectiveDisplayName_Variable"))
    , enabledState_EffectiveTransitionTime_Variable_(boost::make_shared<ServerVariable>("EnabledState_EffectiveTransitionTime_Variable"))
    , enabledState_FalseState_Variable_(boost::make_shared<ServerVariable>("EnabledState_FalseState_Variable"))
    , enabledState_Id_Variable_(boost::make_shared<ServerVariable>("EnabledState_Id_Variable"))
    , enabledState_TransitionTime_Variable_(boost::make_shared<ServerVariable>("EnabledState_TransitionTime_Variable"))
    , enabledState_TrueState_Variable_(boost::make_shared<ServerVariable>("EnabledState_TrueState_Variable"))
    , enabledState_Variable_(boost::make_shared<ServerVariable>("EnabledState_Variable"))
    , eventId_Variable_(boost::make_shared<ServerVariable>("EventId_Variable"))
    , eventType_Variable_(boost::make_shared<ServerVariable>("EventType_Variable"))
    , firstInGroupFlag_Variable_(boost::make_shared<ServerVariable>("FirstInGroupFlag_Variable"))
    , highHighLimit_Variable_(boost::make_shared<ServerVariable>("HighHighLimit_Variable"))
    , highHighState_FalseState_Variable_(boost::make_shared<ServerVariable>("HighHighState_FalseState_Variable"))
    , highHighState_Id_Variable_(boost::make_shared<ServerVariable>("HighHighState_Id_Variable"))
    , highHighState_TransitionTime_Variable_(boost::make_shared<ServerVariable>("HighHighState_TransitionTime_Variable"))
    , highHighState_TrueState_Variable_(boost::make_shared<ServerVariable>("HighHighState_TrueState_Variable"))
    , highHighState_Variable_(boost::make_shared<ServerVariable>("HighHighState_Variable"))
    , highLimit_Variable_(boost::make_shared<ServerVariable>("HighLimit_Variable"))
    , highState_FalseState_Variable_(boost::make_shared<ServerVariable>("HighState_FalseState_Variable"))
    , highState_Id_Variable_(boost::make_shared<ServerVariable>("HighState_Id_Variable"))
    , highState_TransitionTime_Variable_(boost::make_shared<ServerVariable>("HighState_TransitionTime_Variable"))
    , highState_TrueState_Variable_(boost::make_shared<ServerVariable>("HighState_TrueState_Variable"))
    , highState_Variable_(boost::make_shared<ServerVariable>("HighState_Variable"))
    , inputNode_Variable_(boost::make_shared<ServerVariable>("InputNode_Variable"))
    , lastSeverity_SourceTimestamp_Variable_(boost::make_shared<ServerVariable>("LastSeverity_SourceTimestamp_Variable"))
    , lastSeverity_Variable_(boost::make_shared<ServerVariable>("LastSeverity_Variable"))
    , latchedState_FalseState_Variable_(boost::make_shared<ServerVariable>("LatchedState_FalseState_Variable"))
    , latchedState_Id_Variable_(boost::make_shared<ServerVariable>("LatchedState_Id_Variable"))
    , latchedState_TransitionTime_Variable_(boost::make_shared<ServerVariable>("LatchedState_TransitionTime_Variable"))
    , latchedState_TrueState_Variable_(boost::make_shared<ServerVariable>("LatchedState_TrueState_Variable"))
    , latchedState_Variable_(boost::make_shared<ServerVariable>("LatchedState_Variable"))
    , localTime_Variable_(boost::make_shared<ServerVariable>("LocalTime_Variable"))
    , lowLimit_Variable_(boost::make_shared<ServerVariable>("LowLimit_Variable"))
    , lowLowLimit_Variable_(boost::make_shared<ServerVariable>("LowLowLimit_Variable"))
    , lowLowState_FalseState_Variable_(boost::make_shared<ServerVariable>("LowLowState_FalseState_Variable"))
    , lowLowState_Id_Variable_(boost::make_shared<ServerVariable>("LowLowState_Id_Variable"))
    , lowLowState_TransitionTime_Variable_(boost::make_shared<ServerVariable>("LowLowState_TransitionTime_Variable"))
    , lowLowState_TrueState_Variable_(boost::make_shared<ServerVariable>("LowLowState_TrueState_Variable"))
    , lowLowState_Variable_(boost::make_shared<ServerVariable>("LowLowState_Variable"))
    , lowState_FalseState_Variable_(boost::make_shared<ServerVariable>("LowState_FalseState_Variable"))
    , lowState_Id_Variable_(boost::make_shared<ServerVariable>("LowState_Id_Variable"))
    , lowState_TransitionTime_Variable_(boost::make_shared<ServerVariable>("LowState_TransitionTime_Variable"))
    , lowState_TrueState_Variable_(boost::make_shared<ServerVariable>("LowState_TrueState_Variable"))
    , lowState_Variable_(boost::make_shared<ServerVariable>("LowState_Variable"))
    , maxTimeShelved_Variable_(boost::make_shared<ServerVariable>("MaxTimeShelved_Variable"))
    , message_Variable_(boost::make_shared<ServerVariable>("Message_Variable"))
    , offDelay_Variable_(boost::make_shared<ServerVariable>("OffDelay_Variable"))
    , onDelay_Variable_(boost::make_shared<ServerVariable>("OnDelay_Variable"))
    , outOfServiceState_FalseState_Variable_(boost::make_shared<ServerVariable>("OutOfServiceState_FalseState_Variable"))
    , outOfServiceState_Id_Variable_(boost::make_shared<ServerVariable>("OutOfServiceState_Id_Variable"))
    , outOfServiceState_TransitionTime_Variable_(boost::make_shared<ServerVariable>("OutOfServiceState_TransitionTime_Variable"))
    , outOfServiceState_TrueState_Variable_(boost::make_shared<ServerVariable>("OutOfServiceState_TrueState_Variable"))
    , outOfServiceState_Variable_(boost::make_shared<ServerVariable>("OutOfServiceState_Variable"))
    , quality_SourceTimestamp_Variable_(boost::make_shared<ServerVariable>("Quality_SourceTimestamp_Variable"))
    , quality_Variable_(boost::make_shared<ServerVariable>("Quality_Variable"))
    , reAlarmRepeatCount_Variable_(boost::make_shared<ServerVariable>("ReAlarmRepeatCount_Variable"))
    , reAlarmTime_Variable_(boost::make_shared<ServerVariable>("ReAlarmTime_Variable"))
    , receiveTime_Variable_(boost::make_shared<ServerVariable>("ReceiveTime_Variable"))
    , retain_Variable_(boost::make_shared<ServerVariable>("Retain_Variable"))
    , severity_Variable_(boost::make_shared<ServerVariable>("Severity_Variable"))
    , shelvingState_CurrentState_Id_Variable_(boost::make_shared<ServerVariable>("ShelvingState_CurrentState_Id_Variable"))
    , shelvingState_CurrentState_Variable_(boost::make_shared<ServerVariable>("ShelvingState_CurrentState_Variable"))
    , shelvingState_LastTransition_Id_Variable_(boost::make_shared<ServerVariable>("ShelvingState_LastTransition_Id_Variable"))
    , shelvingState_LastTransition_TransitionTime_Variable_(boost::make_shared<ServerVariable>("ShelvingState_LastTransition_TransitionTime_Variable"))
    , shelvingState_LastTransition_Variable_(boost::make_shared<ServerVariable>("ShelvingState_LastTransition_Variable"))
    , shelvingState_UnshelveTime_Variable_(boost::make_shared<ServerVariable>("ShelvingState_UnshelveTime_Variable"))
    , silenceState_FalseState_Variable_(boost::make_shared<ServerVariable>("SilenceState_FalseState_Variable"))
    , silenceState_Id_Variable_(boost::make_shared<ServerVariable>("SilenceState_Id_Variable"))
    , silenceState_TransitionTime_Variable_(boost::make_shared<ServerVariable>("SilenceState_TransitionTime_Variable"))
    , silenceState_TrueState_Variable_(boost::make_shared<ServerVariable>("SilenceState_TrueState_Variable"))
    , silenceState_Variable_(boost::make_shared<ServerVariable>("SilenceState_Variable"))
    , sourceName_Variable_(boost::make_shared<ServerVariable>("SourceName_Variable"))
    , sourceNode_Variable_(boost::make_shared<ServerVariable>("SourceNode_Variable"))
    , suppressedOrShelved_Variable_(boost::make_shared<ServerVariable>("SuppressedOrShelved_Variable"))
    , suppressedState_FalseState_Variable_(boost::make_shared<ServerVariable>("SuppressedState_FalseState_Variable"))
    , suppressedState_Id_Variable_(boost::make_shared<ServerVariable>("SuppressedState_Id_Variable"))
    , suppressedState_TransitionTime_Variable_(boost::make_shared<ServerVariable>("SuppressedState_TransitionTime_Variable"))
    , suppressedState_TrueState_Variable_(boost::make_shared<ServerVariable>("SuppressedState_TrueState_Variable"))
    , suppressedState_Variable_(boost::make_shared<ServerVariable>("SuppressedState_Variable"))
    , time_Variable_(boost::make_shared<ServerVariable>("Time_Variable"))
    , acknowledge_Method_(boost::make_shared<ServerMethod>("Acknowledge_Method"))
    , addComment_Method_(boost::make_shared<ServerMethod>("AddComment_Method"))
    , confirm_Method_(boost::make_shared<ServerMethod>("Confirm_Method"))
    , disable_Method_(boost::make_shared<ServerMethod>("Disable_Method"))
    , enable_Method_(boost::make_shared<ServerMethod>("Enable_Method"))
    , placeInService_Method_(boost::make_shared<ServerMethod>("PlaceInService_Method"))
    , removeFromService_Method_(boost::make_shared<ServerMethod>("RemoveFromService_Method"))
    , reset_Method_(boost::make_shared<ServerMethod>("Reset_Method"))
    , shelvingState_OneShotShelve_Method_(boost::make_shared<ServerMethod>("ShelvingState_OneShotShelve_Method"))
    , shelvingState_TimedShelve_Method_(boost::make_shared<ServerMethod>("ShelvingState_TimedShelve_Method"))
    , shelvingState_Unshelve_Method_(boost::make_shared<ServerMethod>("ShelvingState_Unshelve_Method"))
    , silence_Method_(boost::make_shared<ServerMethod>("Silence_Method"))
    , suppress_Method_(boost::make_shared<ServerMethod>("Suppress_Method"))
    , unsuppress_Method_(boost::make_shared<ServerMethod>("Unsuppress_Method"))
    {
        objectTypeNamespaceName("http://opcfoundation.org/UA/");
        objectTypeNodeId((OpcUaUInt32)9906);
        setServerVariable(ackedState_FalseState_Variable_);
        setServerVariable(ackedState_Id_Variable_);
        setServerVariable(ackedState_TransitionTime_Variable_);
        setServerVariable(ackedState_TrueState_Variable_);
        setServerVariable(ackedState_Variable_);
        setServerVariable(activeState_EffectiveDisplayName_Variable_);
        setServerVariable(activeState_EffectiveTransitionTime_Variable_);
        setServerVariable(activeState_FalseState_Variable_);
        setServerVariable(activeState_Id_Variable_);
        setServerVariable(activeState_TransitionTime_Variable_);
        setServerVariable(activeState_TrueState_Variable_);
        setServerVariable(activeState_Variable_);
        setServerVariable(audibleEnabled_Variable_);
        setServerVariable(audibleSound_Variable_);
        setServerVariable(baseHighHighLimit_Variable_);
        setServerVariable(baseHighLimit_Variable_);
        setServerVariable(baseLowLimit_Variable_);
        setServerVariable(baseLowLowLimit_Variable_);
        setServerVariable(branchId_Variable_);
        setServerVariable(clientUserId_Variable_);
        setServerVariable(comment_SourceTimestamp_Variable_);
        setServerVariable(comment_Variable_);
        setServerVariable(conditionClassId_Variable_);
        setServerVariable(conditionClassName_Variable_);
        setServerVariable(conditionName_Variable_);
        setServerVariable(conditionSubClassId_Variable_);
        setServerVariable(conditionSubClassName_Variable_);
        setServerVariable(confirmedState_FalseState_Variable_);
        setServerVariable(confirmedState_Id_Variable_);
        setServerVariable(confirmedState_TransitionTime_Variable_);
        setServerVariable(confirmedState_TrueState_Variable_);
        setServerVariable(confirmedState_Variable_);
        setServerVariable(enabledState_EffectiveDisplayName_Variable_);
        setServerVariable(enabledState_EffectiveTransitionTime_Variable_);
        setServerVariable(enabledState_FalseState_Variable_);
        setServerVariable(enabledState_Id_Variable_);
        setServerVariable(enabledState_TransitionTime_Variable_);
        setServerVariable(enabledState_TrueState_Variable_);
        setServerVariable(enabledState_Variable_);
        setServerVariable(eventId_Variable_);
        setServerVariable(eventType_Variable_);
        setServerVariable(firstInGroupFlag_Variable_);
        setServerVariable(highHighLimit_Variable_);
        setServerVariable(highHighState_FalseState_Variable_);
        setServerVariable(highHighState_Id_Variable_);
        setServerVariable(highHighState_TransitionTime_Variable_);
        setServerVariable(highHighState_TrueState_Variable_);
        setServerVariable(highHighState_Variable_);
        setServerVariable(highLimit_Variable_);
        setServerVariable(highState_FalseState_Variable_);
        setServerVariable(highState_Id_Variable_);
        setServerVariable(highState_TransitionTime_Variable_);
        setServerVariable(highState_TrueState_Variable_);
        setServerVariable(highState_Variable_);
        setServerVariable(inputNode_Variable_);
        setServerVariable(lastSeverity_SourceTimestamp_Variable_);
        setServerVariable(lastSeverity_Variable_);
        setServerVariable(latchedState_FalseState_Variable_);
        setServerVariable(latchedState_Id_Variable_);
        setServerVariable(latchedState_TransitionTime_Variable_);
        setServerVariable(latchedState_TrueState_Variable_);
        setServerVariable(latchedState_Variable_);
        setServerVariable(localTime_Variable_);
        setServerVariable(lowLimit_Variable_);
        setServerVariable(lowLowLimit_Variable_);
        setServerVariable(lowLowState_FalseState_Variable_);
        setServerVariable(lowLowState_Id_Variable_);
        setServerVariable(lowLowState_TransitionTime_Variable_);
        setServerVariable(lowLowState_TrueState_Variable_);
        setServerVariable(lowLowState_Variable_);
        setServerVariable(lowState_FalseState_Variable_);
        setServerVariable(lowState_Id_Variable_);
        setServerVariable(lowState_TransitionTime_Variable_);
        setServerVariable(lowState_TrueState_Variable_);
        setServerVariable(lowState_Variable_);
        setServerVariable(maxTimeShelved_Variable_);
        setServerVariable(message_Variable_);
        setServerVariable(offDelay_Variable_);
        setServerVariable(onDelay_Variable_);
        setServerVariable(outOfServiceState_FalseState_Variable_);
        setServerVariable(outOfServiceState_Id_Variable_);
        setServerVariable(outOfServiceState_TransitionTime_Variable_);
        setServerVariable(outOfServiceState_TrueState_Variable_);
        setServerVariable(outOfServiceState_Variable_);
        setServerVariable(quality_SourceTimestamp_Variable_);
        setServerVariable(quality_Variable_);
        setServerVariable(reAlarmRepeatCount_Variable_);
        setServerVariable(reAlarmTime_Variable_);
        setServerVariable(receiveTime_Variable_);
        setServerVariable(retain_Variable_);
        setServerVariable(severity_Variable_);
        setServerVariable(shelvingState_CurrentState_Id_Variable_);
        setServerVariable(shelvingState_CurrentState_Variable_);
        setServerVariable(shelvingState_LastTransition_Id_Variable_);
        setServerVariable(shelvingState_LastTransition_TransitionTime_Variable_);
        setServerVariable(shelvingState_LastTransition_Variable_);
        setServerVariable(shelvingState_UnshelveTime_Variable_);
        setServerVariable(silenceState_FalseState_Variable_);
        setServerVariable(silenceState_Id_Variable_);
        setServerVariable(silenceState_TransitionTime_Variable_);
        setServerVariable(silenceState_TrueState_Variable_);
        setServerVariable(silenceState_Variable_);
        setServerVariable(sourceName_Variable_);
        setServerVariable(sourceNode_Variable_);
        setServerVariable(suppressedOrShelved_Variable_);
        setServerVariable(suppressedState_FalseState_Variable_);
        setServerVariable(suppressedState_Id_Variable_);
        setServerVariable(suppressedState_TransitionTime_Variable_);
        setServerVariable(suppressedState_TrueState_Variable_);
        setServerVariable(suppressedState_Variable_);
        setServerVariable(time_Variable_);
        setServerMethod(acknowledge_Method_);
        setServerMethod(addComment_Method_);
        setServerMethod(confirm_Method_);
        setServerMethod(disable_Method_);
        setServerMethod(enable_Method_);
        setServerMethod(placeInService_Method_);
        setServerMethod(removeFromService_Method_);
        setServerMethod(reset_Method_);
        setServerMethod(shelvingState_OneShotShelve_Method_);
        setServerMethod(shelvingState_TimedShelve_Method_);
        setServerMethod(shelvingState_Unshelve_Method_);
        setServerMethod(silence_Method_);
        setServerMethod(suppress_Method_);
        setServerMethod(unsuppress_Method_);
        acknowledge_Method_->registerMethod(boost::bind(&NonExclusiveLimitAlarmType::call_Acknowledge_Method, this, _1));
        addComment_Method_->registerMethod(boost::bind(&NonExclusiveLimitAlarmType::call_AddComment_Method, this, _1));
        confirm_Method_->registerMethod(boost::bind(&NonExclusiveLimitAlarmType::call_Confirm_Method, this, _1));
        disable_Method_->registerMethod(boost::bind(&NonExclusiveLimitAlarmType::call_Disable_Method, this, _1));
        enable_Method_->registerMethod(boost::bind(&NonExclusiveLimitAlarmType::call_Enable_Method, this, _1));
        placeInService_Method_->registerMethod(boost::bind(&NonExclusiveLimitAlarmType::call_PlaceInService_Method, this, _1));
        removeFromService_Method_->registerMethod(boost::bind(&NonExclusiveLimitAlarmType::call_RemoveFromService_Method, this, _1));
        reset_Method_->registerMethod(boost::bind(&NonExclusiveLimitAlarmType::call_Reset_Method, this, _1));
        shelvingState_OneShotShelve_Method_->registerMethod(boost::bind(&NonExclusiveLimitAlarmType::call_ShelvingState_OneShotShelve_Method, this, _1));
        shelvingState_TimedShelve_Method_->registerMethod(boost::bind(&NonExclusiveLimitAlarmType::call_ShelvingState_TimedShelve_Method, this, _1));
        shelvingState_Unshelve_Method_->registerMethod(boost::bind(&NonExclusiveLimitAlarmType::call_ShelvingState_Unshelve_Method, this, _1));
        silence_Method_->registerMethod(boost::bind(&NonExclusiveLimitAlarmType::call_Silence_Method, this, _1));
        suppress_Method_->registerMethod(boost::bind(&NonExclusiveLimitAlarmType::call_Suppress_Method, this, _1));
        unsuppress_Method_->registerMethod(boost::bind(&NonExclusiveLimitAlarmType::call_Unsuppress_Method, this, _1));
    }
    
    NonExclusiveLimitAlarmType::~NonExclusiveLimitAlarmType(void)
    {
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::ackedState_FalseState_Variable(void)
    {
        return ackedState_FalseState_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::ackedState_Id_Variable(void)
    {
        return ackedState_Id_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::ackedState_TransitionTime_Variable(void)
    {
        return ackedState_TransitionTime_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::ackedState_TrueState_Variable(void)
    {
        return ackedState_TrueState_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::ackedState_Variable(void)
    {
        return ackedState_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::activeState_EffectiveDisplayName_Variable(void)
    {
        return activeState_EffectiveDisplayName_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::activeState_EffectiveTransitionTime_Variable(void)
    {
        return activeState_EffectiveTransitionTime_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::activeState_FalseState_Variable(void)
    {
        return activeState_FalseState_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::activeState_Id_Variable(void)
    {
        return activeState_Id_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::activeState_TransitionTime_Variable(void)
    {
        return activeState_TransitionTime_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::activeState_TrueState_Variable(void)
    {
        return activeState_TrueState_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::activeState_Variable(void)
    {
        return activeState_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::audibleEnabled_Variable(void)
    {
        return audibleEnabled_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::audibleSound_Variable(void)
    {
        return audibleSound_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::baseHighHighLimit_Variable(void)
    {
        return baseHighHighLimit_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::baseHighLimit_Variable(void)
    {
        return baseHighLimit_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::baseLowLimit_Variable(void)
    {
        return baseLowLimit_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::baseLowLowLimit_Variable(void)
    {
        return baseLowLowLimit_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::branchId_Variable(void)
    {
        return branchId_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::clientUserId_Variable(void)
    {
        return clientUserId_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::comment_SourceTimestamp_Variable(void)
    {
        return comment_SourceTimestamp_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::comment_Variable(void)
    {
        return comment_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::conditionClassId_Variable(void)
    {
        return conditionClassId_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::conditionClassName_Variable(void)
    {
        return conditionClassName_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::conditionName_Variable(void)
    {
        return conditionName_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::conditionSubClassId_Variable(void)
    {
        return conditionSubClassId_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::conditionSubClassName_Variable(void)
    {
        return conditionSubClassName_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::confirmedState_FalseState_Variable(void)
    {
        return confirmedState_FalseState_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::confirmedState_Id_Variable(void)
    {
        return confirmedState_Id_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::confirmedState_TransitionTime_Variable(void)
    {
        return confirmedState_TransitionTime_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::confirmedState_TrueState_Variable(void)
    {
        return confirmedState_TrueState_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::confirmedState_Variable(void)
    {
        return confirmedState_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::enabledState_EffectiveDisplayName_Variable(void)
    {
        return enabledState_EffectiveDisplayName_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::enabledState_EffectiveTransitionTime_Variable(void)
    {
        return enabledState_EffectiveTransitionTime_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::enabledState_FalseState_Variable(void)
    {
        return enabledState_FalseState_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::enabledState_Id_Variable(void)
    {
        return enabledState_Id_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::enabledState_TransitionTime_Variable(void)
    {
        return enabledState_TransitionTime_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::enabledState_TrueState_Variable(void)
    {
        return enabledState_TrueState_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::enabledState_Variable(void)
    {
        return enabledState_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::eventId_Variable(void)
    {
        return eventId_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::eventType_Variable(void)
    {
        return eventType_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::firstInGroupFlag_Variable(void)
    {
        return firstInGroupFlag_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::highHighLimit_Variable(void)
    {
        return highHighLimit_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::highHighState_FalseState_Variable(void)
    {
        return highHighState_FalseState_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::highHighState_Id_Variable(void)
    {
        return highHighState_Id_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::highHighState_TransitionTime_Variable(void)
    {
        return highHighState_TransitionTime_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::highHighState_TrueState_Variable(void)
    {
        return highHighState_TrueState_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::highHighState_Variable(void)
    {
        return highHighState_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::highLimit_Variable(void)
    {
        return highLimit_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::highState_FalseState_Variable(void)
    {
        return highState_FalseState_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::highState_Id_Variable(void)
    {
        return highState_Id_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::highState_TransitionTime_Variable(void)
    {
        return highState_TransitionTime_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::highState_TrueState_Variable(void)
    {
        return highState_TrueState_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::highState_Variable(void)
    {
        return highState_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::inputNode_Variable(void)
    {
        return inputNode_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::lastSeverity_SourceTimestamp_Variable(void)
    {
        return lastSeverity_SourceTimestamp_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::lastSeverity_Variable(void)
    {
        return lastSeverity_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::latchedState_FalseState_Variable(void)
    {
        return latchedState_FalseState_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::latchedState_Id_Variable(void)
    {
        return latchedState_Id_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::latchedState_TransitionTime_Variable(void)
    {
        return latchedState_TransitionTime_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::latchedState_TrueState_Variable(void)
    {
        return latchedState_TrueState_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::latchedState_Variable(void)
    {
        return latchedState_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::localTime_Variable(void)
    {
        return localTime_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::lowLimit_Variable(void)
    {
        return lowLimit_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::lowLowLimit_Variable(void)
    {
        return lowLowLimit_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::lowLowState_FalseState_Variable(void)
    {
        return lowLowState_FalseState_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::lowLowState_Id_Variable(void)
    {
        return lowLowState_Id_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::lowLowState_TransitionTime_Variable(void)
    {
        return lowLowState_TransitionTime_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::lowLowState_TrueState_Variable(void)
    {
        return lowLowState_TrueState_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::lowLowState_Variable(void)
    {
        return lowLowState_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::lowState_FalseState_Variable(void)
    {
        return lowState_FalseState_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::lowState_Id_Variable(void)
    {
        return lowState_Id_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::lowState_TransitionTime_Variable(void)
    {
        return lowState_TransitionTime_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::lowState_TrueState_Variable(void)
    {
        return lowState_TrueState_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::lowState_Variable(void)
    {
        return lowState_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::maxTimeShelved_Variable(void)
    {
        return maxTimeShelved_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::message_Variable(void)
    {
        return message_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::offDelay_Variable(void)
    {
        return offDelay_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::onDelay_Variable(void)
    {
        return onDelay_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::outOfServiceState_FalseState_Variable(void)
    {
        return outOfServiceState_FalseState_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::outOfServiceState_Id_Variable(void)
    {
        return outOfServiceState_Id_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::outOfServiceState_TransitionTime_Variable(void)
    {
        return outOfServiceState_TransitionTime_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::outOfServiceState_TrueState_Variable(void)
    {
        return outOfServiceState_TrueState_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::outOfServiceState_Variable(void)
    {
        return outOfServiceState_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::quality_SourceTimestamp_Variable(void)
    {
        return quality_SourceTimestamp_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::quality_Variable(void)
    {
        return quality_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::reAlarmRepeatCount_Variable(void)
    {
        return reAlarmRepeatCount_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::reAlarmTime_Variable(void)
    {
        return reAlarmTime_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::receiveTime_Variable(void)
    {
        return receiveTime_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::retain_Variable(void)
    {
        return retain_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::severity_Variable(void)
    {
        return severity_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::shelvingState_CurrentState_Id_Variable(void)
    {
        return shelvingState_CurrentState_Id_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::shelvingState_CurrentState_Variable(void)
    {
        return shelvingState_CurrentState_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::shelvingState_LastTransition_Id_Variable(void)
    {
        return shelvingState_LastTransition_Id_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::shelvingState_LastTransition_TransitionTime_Variable(void)
    {
        return shelvingState_LastTransition_TransitionTime_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::shelvingState_LastTransition_Variable(void)
    {
        return shelvingState_LastTransition_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::shelvingState_UnshelveTime_Variable(void)
    {
        return shelvingState_UnshelveTime_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::silenceState_FalseState_Variable(void)
    {
        return silenceState_FalseState_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::silenceState_Id_Variable(void)
    {
        return silenceState_Id_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::silenceState_TransitionTime_Variable(void)
    {
        return silenceState_TransitionTime_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::silenceState_TrueState_Variable(void)
    {
        return silenceState_TrueState_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::silenceState_Variable(void)
    {
        return silenceState_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::sourceName_Variable(void)
    {
        return sourceName_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::sourceNode_Variable(void)
    {
        return sourceNode_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::suppressedOrShelved_Variable(void)
    {
        return suppressedOrShelved_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::suppressedState_FalseState_Variable(void)
    {
        return suppressedState_FalseState_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::suppressedState_Id_Variable(void)
    {
        return suppressedState_Id_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::suppressedState_TransitionTime_Variable(void)
    {
        return suppressedState_TransitionTime_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::suppressedState_TrueState_Variable(void)
    {
        return suppressedState_TrueState_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::suppressedState_Variable(void)
    {
        return suppressedState_Variable_;
    }

    ServerVariable::SPtr&
    NonExclusiveLimitAlarmType::time_Variable(void)
    {
        return time_Variable_;
    }

    void
    NonExclusiveLimitAlarmType::ackedState_FalseState_Variable(ServerVariable::SPtr& serverVariable)
    {
        ackedState_FalseState_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::ackedState_Id_Variable(ServerVariable::SPtr& serverVariable)
    {
        ackedState_Id_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::ackedState_TransitionTime_Variable(ServerVariable::SPtr& serverVariable)
    {
        ackedState_TransitionTime_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::ackedState_TrueState_Variable(ServerVariable::SPtr& serverVariable)
    {
        ackedState_TrueState_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::ackedState_Variable(ServerVariable::SPtr& serverVariable)
    {
        ackedState_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::activeState_EffectiveDisplayName_Variable(ServerVariable::SPtr& serverVariable)
    {
        activeState_EffectiveDisplayName_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::activeState_EffectiveTransitionTime_Variable(ServerVariable::SPtr& serverVariable)
    {
        activeState_EffectiveTransitionTime_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::activeState_FalseState_Variable(ServerVariable::SPtr& serverVariable)
    {
        activeState_FalseState_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::activeState_Id_Variable(ServerVariable::SPtr& serverVariable)
    {
        activeState_Id_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::activeState_TransitionTime_Variable(ServerVariable::SPtr& serverVariable)
    {
        activeState_TransitionTime_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::activeState_TrueState_Variable(ServerVariable::SPtr& serverVariable)
    {
        activeState_TrueState_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::activeState_Variable(ServerVariable::SPtr& serverVariable)
    {
        activeState_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::audibleEnabled_Variable(ServerVariable::SPtr& serverVariable)
    {
        audibleEnabled_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::audibleSound_Variable(ServerVariable::SPtr& serverVariable)
    {
        audibleSound_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::baseHighHighLimit_Variable(ServerVariable::SPtr& serverVariable)
    {
        baseHighHighLimit_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::baseHighLimit_Variable(ServerVariable::SPtr& serverVariable)
    {
        baseHighLimit_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::baseLowLimit_Variable(ServerVariable::SPtr& serverVariable)
    {
        baseLowLimit_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::baseLowLowLimit_Variable(ServerVariable::SPtr& serverVariable)
    {
        baseLowLowLimit_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::branchId_Variable(ServerVariable::SPtr& serverVariable)
    {
        branchId_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::clientUserId_Variable(ServerVariable::SPtr& serverVariable)
    {
        clientUserId_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::comment_SourceTimestamp_Variable(ServerVariable::SPtr& serverVariable)
    {
        comment_SourceTimestamp_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::comment_Variable(ServerVariable::SPtr& serverVariable)
    {
        comment_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::conditionClassId_Variable(ServerVariable::SPtr& serverVariable)
    {
        conditionClassId_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::conditionClassName_Variable(ServerVariable::SPtr& serverVariable)
    {
        conditionClassName_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::conditionName_Variable(ServerVariable::SPtr& serverVariable)
    {
        conditionName_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::conditionSubClassId_Variable(ServerVariable::SPtr& serverVariable)
    {
        conditionSubClassId_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::conditionSubClassName_Variable(ServerVariable::SPtr& serverVariable)
    {
        conditionSubClassName_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::confirmedState_FalseState_Variable(ServerVariable::SPtr& serverVariable)
    {
        confirmedState_FalseState_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::confirmedState_Id_Variable(ServerVariable::SPtr& serverVariable)
    {
        confirmedState_Id_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::confirmedState_TransitionTime_Variable(ServerVariable::SPtr& serverVariable)
    {
        confirmedState_TransitionTime_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::confirmedState_TrueState_Variable(ServerVariable::SPtr& serverVariable)
    {
        confirmedState_TrueState_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::confirmedState_Variable(ServerVariable::SPtr& serverVariable)
    {
        confirmedState_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::enabledState_EffectiveDisplayName_Variable(ServerVariable::SPtr& serverVariable)
    {
        enabledState_EffectiveDisplayName_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::enabledState_EffectiveTransitionTime_Variable(ServerVariable::SPtr& serverVariable)
    {
        enabledState_EffectiveTransitionTime_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::enabledState_FalseState_Variable(ServerVariable::SPtr& serverVariable)
    {
        enabledState_FalseState_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::enabledState_Id_Variable(ServerVariable::SPtr& serverVariable)
    {
        enabledState_Id_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::enabledState_TransitionTime_Variable(ServerVariable::SPtr& serverVariable)
    {
        enabledState_TransitionTime_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::enabledState_TrueState_Variable(ServerVariable::SPtr& serverVariable)
    {
        enabledState_TrueState_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::enabledState_Variable(ServerVariable::SPtr& serverVariable)
    {
        enabledState_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::eventId_Variable(ServerVariable::SPtr& serverVariable)
    {
        eventId_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::eventType_Variable(ServerVariable::SPtr& serverVariable)
    {
        eventType_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::firstInGroupFlag_Variable(ServerVariable::SPtr& serverVariable)
    {
        firstInGroupFlag_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::highHighLimit_Variable(ServerVariable::SPtr& serverVariable)
    {
        highHighLimit_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::highHighState_FalseState_Variable(ServerVariable::SPtr& serverVariable)
    {
        highHighState_FalseState_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::highHighState_Id_Variable(ServerVariable::SPtr& serverVariable)
    {
        highHighState_Id_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::highHighState_TransitionTime_Variable(ServerVariable::SPtr& serverVariable)
    {
        highHighState_TransitionTime_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::highHighState_TrueState_Variable(ServerVariable::SPtr& serverVariable)
    {
        highHighState_TrueState_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::highHighState_Variable(ServerVariable::SPtr& serverVariable)
    {
        highHighState_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::highLimit_Variable(ServerVariable::SPtr& serverVariable)
    {
        highLimit_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::highState_FalseState_Variable(ServerVariable::SPtr& serverVariable)
    {
        highState_FalseState_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::highState_Id_Variable(ServerVariable::SPtr& serverVariable)
    {
        highState_Id_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::highState_TransitionTime_Variable(ServerVariable::SPtr& serverVariable)
    {
        highState_TransitionTime_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::highState_TrueState_Variable(ServerVariable::SPtr& serverVariable)
    {
        highState_TrueState_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::highState_Variable(ServerVariable::SPtr& serverVariable)
    {
        highState_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::inputNode_Variable(ServerVariable::SPtr& serverVariable)
    {
        inputNode_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::lastSeverity_SourceTimestamp_Variable(ServerVariable::SPtr& serverVariable)
    {
        lastSeverity_SourceTimestamp_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::lastSeverity_Variable(ServerVariable::SPtr& serverVariable)
    {
        lastSeverity_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::latchedState_FalseState_Variable(ServerVariable::SPtr& serverVariable)
    {
        latchedState_FalseState_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::latchedState_Id_Variable(ServerVariable::SPtr& serverVariable)
    {
        latchedState_Id_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::latchedState_TransitionTime_Variable(ServerVariable::SPtr& serverVariable)
    {
        latchedState_TransitionTime_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::latchedState_TrueState_Variable(ServerVariable::SPtr& serverVariable)
    {
        latchedState_TrueState_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::latchedState_Variable(ServerVariable::SPtr& serverVariable)
    {
        latchedState_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::localTime_Variable(ServerVariable::SPtr& serverVariable)
    {
        localTime_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::lowLimit_Variable(ServerVariable::SPtr& serverVariable)
    {
        lowLimit_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::lowLowLimit_Variable(ServerVariable::SPtr& serverVariable)
    {
        lowLowLimit_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::lowLowState_FalseState_Variable(ServerVariable::SPtr& serverVariable)
    {
        lowLowState_FalseState_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::lowLowState_Id_Variable(ServerVariable::SPtr& serverVariable)
    {
        lowLowState_Id_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::lowLowState_TransitionTime_Variable(ServerVariable::SPtr& serverVariable)
    {
        lowLowState_TransitionTime_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::lowLowState_TrueState_Variable(ServerVariable::SPtr& serverVariable)
    {
        lowLowState_TrueState_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::lowLowState_Variable(ServerVariable::SPtr& serverVariable)
    {
        lowLowState_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::lowState_FalseState_Variable(ServerVariable::SPtr& serverVariable)
    {
        lowState_FalseState_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::lowState_Id_Variable(ServerVariable::SPtr& serverVariable)
    {
        lowState_Id_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::lowState_TransitionTime_Variable(ServerVariable::SPtr& serverVariable)
    {
        lowState_TransitionTime_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::lowState_TrueState_Variable(ServerVariable::SPtr& serverVariable)
    {
        lowState_TrueState_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::lowState_Variable(ServerVariable::SPtr& serverVariable)
    {
        lowState_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::maxTimeShelved_Variable(ServerVariable::SPtr& serverVariable)
    {
        maxTimeShelved_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::message_Variable(ServerVariable::SPtr& serverVariable)
    {
        message_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::offDelay_Variable(ServerVariable::SPtr& serverVariable)
    {
        offDelay_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::onDelay_Variable(ServerVariable::SPtr& serverVariable)
    {
        onDelay_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::outOfServiceState_FalseState_Variable(ServerVariable::SPtr& serverVariable)
    {
        outOfServiceState_FalseState_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::outOfServiceState_Id_Variable(ServerVariable::SPtr& serverVariable)
    {
        outOfServiceState_Id_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::outOfServiceState_TransitionTime_Variable(ServerVariable::SPtr& serverVariable)
    {
        outOfServiceState_TransitionTime_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::outOfServiceState_TrueState_Variable(ServerVariable::SPtr& serverVariable)
    {
        outOfServiceState_TrueState_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::outOfServiceState_Variable(ServerVariable::SPtr& serverVariable)
    {
        outOfServiceState_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::quality_SourceTimestamp_Variable(ServerVariable::SPtr& serverVariable)
    {
        quality_SourceTimestamp_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::quality_Variable(ServerVariable::SPtr& serverVariable)
    {
        quality_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::reAlarmRepeatCount_Variable(ServerVariable::SPtr& serverVariable)
    {
        reAlarmRepeatCount_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::reAlarmTime_Variable(ServerVariable::SPtr& serverVariable)
    {
        reAlarmTime_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::receiveTime_Variable(ServerVariable::SPtr& serverVariable)
    {
        receiveTime_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::retain_Variable(ServerVariable::SPtr& serverVariable)
    {
        retain_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::severity_Variable(ServerVariable::SPtr& serverVariable)
    {
        severity_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::shelvingState_CurrentState_Id_Variable(ServerVariable::SPtr& serverVariable)
    {
        shelvingState_CurrentState_Id_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::shelvingState_CurrentState_Variable(ServerVariable::SPtr& serverVariable)
    {
        shelvingState_CurrentState_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::shelvingState_LastTransition_Id_Variable(ServerVariable::SPtr& serverVariable)
    {
        shelvingState_LastTransition_Id_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::shelvingState_LastTransition_TransitionTime_Variable(ServerVariable::SPtr& serverVariable)
    {
        shelvingState_LastTransition_TransitionTime_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::shelvingState_LastTransition_Variable(ServerVariable::SPtr& serverVariable)
    {
        shelvingState_LastTransition_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::shelvingState_UnshelveTime_Variable(ServerVariable::SPtr& serverVariable)
    {
        shelvingState_UnshelveTime_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::silenceState_FalseState_Variable(ServerVariable::SPtr& serverVariable)
    {
        silenceState_FalseState_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::silenceState_Id_Variable(ServerVariable::SPtr& serverVariable)
    {
        silenceState_Id_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::silenceState_TransitionTime_Variable(ServerVariable::SPtr& serverVariable)
    {
        silenceState_TransitionTime_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::silenceState_TrueState_Variable(ServerVariable::SPtr& serverVariable)
    {
        silenceState_TrueState_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::silenceState_Variable(ServerVariable::SPtr& serverVariable)
    {
        silenceState_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::sourceName_Variable(ServerVariable::SPtr& serverVariable)
    {
        sourceName_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::sourceNode_Variable(ServerVariable::SPtr& serverVariable)
    {
        sourceNode_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::suppressedOrShelved_Variable(ServerVariable::SPtr& serverVariable)
    {
        suppressedOrShelved_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::suppressedState_FalseState_Variable(ServerVariable::SPtr& serverVariable)
    {
        suppressedState_FalseState_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::suppressedState_Id_Variable(ServerVariable::SPtr& serverVariable)
    {
        suppressedState_Id_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::suppressedState_TransitionTime_Variable(ServerVariable::SPtr& serverVariable)
    {
        suppressedState_TransitionTime_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::suppressedState_TrueState_Variable(ServerVariable::SPtr& serverVariable)
    {
        suppressedState_TrueState_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::suppressedState_Variable(ServerVariable::SPtr& serverVariable)
    {
        suppressedState_Variable_ = serverVariable;
    }

    void
    NonExclusiveLimitAlarmType::time_Variable(ServerVariable::SPtr& serverVariable)
    {
        time_Variable_ = serverVariable;
    }

    bool
    NonExclusiveLimitAlarmType::get_AckedState_FalseState_Variable(OpcUaDataValue& dataValue)
    {
        return ackedState_FalseState_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_AckedState_Id_Variable(OpcUaDataValue& dataValue)
    {
        return ackedState_Id_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_AckedState_TransitionTime_Variable(OpcUaDataValue& dataValue)
    {
        return ackedState_TransitionTime_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_AckedState_TrueState_Variable(OpcUaDataValue& dataValue)
    {
        return ackedState_TrueState_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_AckedState_Variable(OpcUaDataValue& dataValue)
    {
        return ackedState_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_ActiveState_EffectiveDisplayName_Variable(OpcUaDataValue& dataValue)
    {
        return activeState_EffectiveDisplayName_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_ActiveState_EffectiveTransitionTime_Variable(OpcUaDataValue& dataValue)
    {
        return activeState_EffectiveTransitionTime_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_ActiveState_FalseState_Variable(OpcUaDataValue& dataValue)
    {
        return activeState_FalseState_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_ActiveState_Id_Variable(OpcUaDataValue& dataValue)
    {
        return activeState_Id_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_ActiveState_TransitionTime_Variable(OpcUaDataValue& dataValue)
    {
        return activeState_TransitionTime_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_ActiveState_TrueState_Variable(OpcUaDataValue& dataValue)
    {
        return activeState_TrueState_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_ActiveState_Variable(OpcUaDataValue& dataValue)
    {
        return activeState_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_AudibleEnabled_Variable(OpcUaDataValue& dataValue)
    {
        return audibleEnabled_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_AudibleSound_Variable(OpcUaDataValue& dataValue)
    {
        return audibleSound_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_BaseHighHighLimit_Variable(OpcUaDataValue& dataValue)
    {
        return baseHighHighLimit_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_BaseHighLimit_Variable(OpcUaDataValue& dataValue)
    {
        return baseHighLimit_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_BaseLowLimit_Variable(OpcUaDataValue& dataValue)
    {
        return baseLowLimit_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_BaseLowLowLimit_Variable(OpcUaDataValue& dataValue)
    {
        return baseLowLowLimit_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_BranchId_Variable(OpcUaDataValue& dataValue)
    {
        return branchId_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_ClientUserId_Variable(OpcUaDataValue& dataValue)
    {
        return clientUserId_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_Comment_SourceTimestamp_Variable(OpcUaDataValue& dataValue)
    {
        return comment_SourceTimestamp_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_Comment_Variable(OpcUaDataValue& dataValue)
    {
        return comment_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_ConditionClassId_Variable(OpcUaDataValue& dataValue)
    {
        return conditionClassId_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_ConditionClassName_Variable(OpcUaDataValue& dataValue)
    {
        return conditionClassName_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_ConditionName_Variable(OpcUaDataValue& dataValue)
    {
        return conditionName_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_ConditionSubClassId_Variable(OpcUaDataValue& dataValue)
    {
        return conditionSubClassId_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_ConditionSubClassName_Variable(OpcUaDataValue& dataValue)
    {
        return conditionSubClassName_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_ConfirmedState_FalseState_Variable(OpcUaDataValue& dataValue)
    {
        return confirmedState_FalseState_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_ConfirmedState_Id_Variable(OpcUaDataValue& dataValue)
    {
        return confirmedState_Id_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_ConfirmedState_TransitionTime_Variable(OpcUaDataValue& dataValue)
    {
        return confirmedState_TransitionTime_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_ConfirmedState_TrueState_Variable(OpcUaDataValue& dataValue)
    {
        return confirmedState_TrueState_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_ConfirmedState_Variable(OpcUaDataValue& dataValue)
    {
        return confirmedState_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_EnabledState_EffectiveDisplayName_Variable(OpcUaDataValue& dataValue)
    {
        return enabledState_EffectiveDisplayName_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_EnabledState_EffectiveTransitionTime_Variable(OpcUaDataValue& dataValue)
    {
        return enabledState_EffectiveTransitionTime_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_EnabledState_FalseState_Variable(OpcUaDataValue& dataValue)
    {
        return enabledState_FalseState_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_EnabledState_Id_Variable(OpcUaDataValue& dataValue)
    {
        return enabledState_Id_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_EnabledState_TransitionTime_Variable(OpcUaDataValue& dataValue)
    {
        return enabledState_TransitionTime_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_EnabledState_TrueState_Variable(OpcUaDataValue& dataValue)
    {
        return enabledState_TrueState_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_EnabledState_Variable(OpcUaDataValue& dataValue)
    {
        return enabledState_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_EventId_Variable(OpcUaDataValue& dataValue)
    {
        return eventId_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_EventType_Variable(OpcUaDataValue& dataValue)
    {
        return eventType_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_FirstInGroupFlag_Variable(OpcUaDataValue& dataValue)
    {
        return firstInGroupFlag_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_HighHighLimit_Variable(OpcUaDataValue& dataValue)
    {
        return highHighLimit_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_HighHighState_FalseState_Variable(OpcUaDataValue& dataValue)
    {
        return highHighState_FalseState_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_HighHighState_Id_Variable(OpcUaDataValue& dataValue)
    {
        return highHighState_Id_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_HighHighState_TransitionTime_Variable(OpcUaDataValue& dataValue)
    {
        return highHighState_TransitionTime_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_HighHighState_TrueState_Variable(OpcUaDataValue& dataValue)
    {
        return highHighState_TrueState_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_HighHighState_Variable(OpcUaDataValue& dataValue)
    {
        return highHighState_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_HighLimit_Variable(OpcUaDataValue& dataValue)
    {
        return highLimit_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_HighState_FalseState_Variable(OpcUaDataValue& dataValue)
    {
        return highState_FalseState_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_HighState_Id_Variable(OpcUaDataValue& dataValue)
    {
        return highState_Id_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_HighState_TransitionTime_Variable(OpcUaDataValue& dataValue)
    {
        return highState_TransitionTime_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_HighState_TrueState_Variable(OpcUaDataValue& dataValue)
    {
        return highState_TrueState_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_HighState_Variable(OpcUaDataValue& dataValue)
    {
        return highState_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_InputNode_Variable(OpcUaDataValue& dataValue)
    {
        return inputNode_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_LastSeverity_SourceTimestamp_Variable(OpcUaDataValue& dataValue)
    {
        return lastSeverity_SourceTimestamp_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_LastSeverity_Variable(OpcUaDataValue& dataValue)
    {
        return lastSeverity_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_LatchedState_FalseState_Variable(OpcUaDataValue& dataValue)
    {
        return latchedState_FalseState_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_LatchedState_Id_Variable(OpcUaDataValue& dataValue)
    {
        return latchedState_Id_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_LatchedState_TransitionTime_Variable(OpcUaDataValue& dataValue)
    {
        return latchedState_TransitionTime_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_LatchedState_TrueState_Variable(OpcUaDataValue& dataValue)
    {
        return latchedState_TrueState_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_LatchedState_Variable(OpcUaDataValue& dataValue)
    {
        return latchedState_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_LocalTime_Variable(OpcUaDataValue& dataValue)
    {
        return localTime_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_LowLimit_Variable(OpcUaDataValue& dataValue)
    {
        return lowLimit_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_LowLowLimit_Variable(OpcUaDataValue& dataValue)
    {
        return lowLowLimit_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_LowLowState_FalseState_Variable(OpcUaDataValue& dataValue)
    {
        return lowLowState_FalseState_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_LowLowState_Id_Variable(OpcUaDataValue& dataValue)
    {
        return lowLowState_Id_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_LowLowState_TransitionTime_Variable(OpcUaDataValue& dataValue)
    {
        return lowLowState_TransitionTime_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_LowLowState_TrueState_Variable(OpcUaDataValue& dataValue)
    {
        return lowLowState_TrueState_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_LowLowState_Variable(OpcUaDataValue& dataValue)
    {
        return lowLowState_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_LowState_FalseState_Variable(OpcUaDataValue& dataValue)
    {
        return lowState_FalseState_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_LowState_Id_Variable(OpcUaDataValue& dataValue)
    {
        return lowState_Id_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_LowState_TransitionTime_Variable(OpcUaDataValue& dataValue)
    {
        return lowState_TransitionTime_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_LowState_TrueState_Variable(OpcUaDataValue& dataValue)
    {
        return lowState_TrueState_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_LowState_Variable(OpcUaDataValue& dataValue)
    {
        return lowState_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_MaxTimeShelved_Variable(OpcUaDataValue& dataValue)
    {
        return maxTimeShelved_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_Message_Variable(OpcUaDataValue& dataValue)
    {
        return message_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_OffDelay_Variable(OpcUaDataValue& dataValue)
    {
        return offDelay_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_OnDelay_Variable(OpcUaDataValue& dataValue)
    {
        return onDelay_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_OutOfServiceState_FalseState_Variable(OpcUaDataValue& dataValue)
    {
        return outOfServiceState_FalseState_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_OutOfServiceState_Id_Variable(OpcUaDataValue& dataValue)
    {
        return outOfServiceState_Id_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_OutOfServiceState_TransitionTime_Variable(OpcUaDataValue& dataValue)
    {
        return outOfServiceState_TransitionTime_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_OutOfServiceState_TrueState_Variable(OpcUaDataValue& dataValue)
    {
        return outOfServiceState_TrueState_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_OutOfServiceState_Variable(OpcUaDataValue& dataValue)
    {
        return outOfServiceState_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_Quality_SourceTimestamp_Variable(OpcUaDataValue& dataValue)
    {
        return quality_SourceTimestamp_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_Quality_Variable(OpcUaDataValue& dataValue)
    {
        return quality_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_ReAlarmRepeatCount_Variable(OpcUaDataValue& dataValue)
    {
        return reAlarmRepeatCount_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_ReAlarmTime_Variable(OpcUaDataValue& dataValue)
    {
        return reAlarmTime_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_ReceiveTime_Variable(OpcUaDataValue& dataValue)
    {
        return receiveTime_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_Retain_Variable(OpcUaDataValue& dataValue)
    {
        return retain_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_Severity_Variable(OpcUaDataValue& dataValue)
    {
        return severity_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_ShelvingState_CurrentState_Id_Variable(OpcUaDataValue& dataValue)
    {
        return shelvingState_CurrentState_Id_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_ShelvingState_CurrentState_Variable(OpcUaDataValue& dataValue)
    {
        return shelvingState_CurrentState_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_ShelvingState_LastTransition_Id_Variable(OpcUaDataValue& dataValue)
    {
        return shelvingState_LastTransition_Id_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_ShelvingState_LastTransition_TransitionTime_Variable(OpcUaDataValue& dataValue)
    {
        return shelvingState_LastTransition_TransitionTime_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_ShelvingState_LastTransition_Variable(OpcUaDataValue& dataValue)
    {
        return shelvingState_LastTransition_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_ShelvingState_UnshelveTime_Variable(OpcUaDataValue& dataValue)
    {
        return shelvingState_UnshelveTime_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_SilenceState_FalseState_Variable(OpcUaDataValue& dataValue)
    {
        return silenceState_FalseState_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_SilenceState_Id_Variable(OpcUaDataValue& dataValue)
    {
        return silenceState_Id_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_SilenceState_TransitionTime_Variable(OpcUaDataValue& dataValue)
    {
        return silenceState_TransitionTime_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_SilenceState_TrueState_Variable(OpcUaDataValue& dataValue)
    {
        return silenceState_TrueState_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_SilenceState_Variable(OpcUaDataValue& dataValue)
    {
        return silenceState_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_SourceName_Variable(OpcUaDataValue& dataValue)
    {
        return sourceName_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_SourceNode_Variable(OpcUaDataValue& dataValue)
    {
        return sourceNode_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_SuppressedOrShelved_Variable(OpcUaDataValue& dataValue)
    {
        return suppressedOrShelved_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_SuppressedState_FalseState_Variable(OpcUaDataValue& dataValue)
    {
        return suppressedState_FalseState_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_SuppressedState_Id_Variable(OpcUaDataValue& dataValue)
    {
        return suppressedState_Id_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_SuppressedState_TransitionTime_Variable(OpcUaDataValue& dataValue)
    {
        return suppressedState_TransitionTime_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_SuppressedState_TrueState_Variable(OpcUaDataValue& dataValue)
    {
        return suppressedState_TrueState_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_SuppressedState_Variable(OpcUaDataValue& dataValue)
    {
        return suppressedState_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::get_Time_Variable(OpcUaDataValue& dataValue)
    {
        return time_Variable_->getDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_AckedState_FalseState_Variable(const OpcUaDataValue& dataValue)
    {
        return ackedState_FalseState_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_AckedState_Id_Variable(const OpcUaDataValue& dataValue)
    {
        return ackedState_Id_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_AckedState_TransitionTime_Variable(const OpcUaDataValue& dataValue)
    {
        return ackedState_TransitionTime_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_AckedState_TrueState_Variable(const OpcUaDataValue& dataValue)
    {
        return ackedState_TrueState_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_AckedState_Variable(const OpcUaDataValue& dataValue)
    {
        return ackedState_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_ActiveState_EffectiveDisplayName_Variable(const OpcUaDataValue& dataValue)
    {
        return activeState_EffectiveDisplayName_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_ActiveState_EffectiveTransitionTime_Variable(const OpcUaDataValue& dataValue)
    {
        return activeState_EffectiveTransitionTime_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_ActiveState_FalseState_Variable(const OpcUaDataValue& dataValue)
    {
        return activeState_FalseState_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_ActiveState_Id_Variable(const OpcUaDataValue& dataValue)
    {
        return activeState_Id_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_ActiveState_TransitionTime_Variable(const OpcUaDataValue& dataValue)
    {
        return activeState_TransitionTime_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_ActiveState_TrueState_Variable(const OpcUaDataValue& dataValue)
    {
        return activeState_TrueState_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_ActiveState_Variable(const OpcUaDataValue& dataValue)
    {
        return activeState_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_AudibleEnabled_Variable(const OpcUaDataValue& dataValue)
    {
        return audibleEnabled_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_AudibleSound_Variable(const OpcUaDataValue& dataValue)
    {
        return audibleSound_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_BaseHighHighLimit_Variable(const OpcUaDataValue& dataValue)
    {
        return baseHighHighLimit_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_BaseHighLimit_Variable(const OpcUaDataValue& dataValue)
    {
        return baseHighLimit_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_BaseLowLimit_Variable(const OpcUaDataValue& dataValue)
    {
        return baseLowLimit_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_BaseLowLowLimit_Variable(const OpcUaDataValue& dataValue)
    {
        return baseLowLowLimit_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_BranchId_Variable(const OpcUaDataValue& dataValue)
    {
        return branchId_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_ClientUserId_Variable(const OpcUaDataValue& dataValue)
    {
        return clientUserId_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_Comment_SourceTimestamp_Variable(const OpcUaDataValue& dataValue)
    {
        return comment_SourceTimestamp_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_Comment_Variable(const OpcUaDataValue& dataValue)
    {
        return comment_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_ConditionClassId_Variable(const OpcUaDataValue& dataValue)
    {
        return conditionClassId_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_ConditionClassName_Variable(const OpcUaDataValue& dataValue)
    {
        return conditionClassName_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_ConditionName_Variable(const OpcUaDataValue& dataValue)
    {
        return conditionName_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_ConditionSubClassId_Variable(const OpcUaDataValue& dataValue)
    {
        return conditionSubClassId_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_ConditionSubClassName_Variable(const OpcUaDataValue& dataValue)
    {
        return conditionSubClassName_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_ConfirmedState_FalseState_Variable(const OpcUaDataValue& dataValue)
    {
        return confirmedState_FalseState_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_ConfirmedState_Id_Variable(const OpcUaDataValue& dataValue)
    {
        return confirmedState_Id_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_ConfirmedState_TransitionTime_Variable(const OpcUaDataValue& dataValue)
    {
        return confirmedState_TransitionTime_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_ConfirmedState_TrueState_Variable(const OpcUaDataValue& dataValue)
    {
        return confirmedState_TrueState_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_ConfirmedState_Variable(const OpcUaDataValue& dataValue)
    {
        return confirmedState_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_EnabledState_EffectiveDisplayName_Variable(const OpcUaDataValue& dataValue)
    {
        return enabledState_EffectiveDisplayName_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_EnabledState_EffectiveTransitionTime_Variable(const OpcUaDataValue& dataValue)
    {
        return enabledState_EffectiveTransitionTime_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_EnabledState_FalseState_Variable(const OpcUaDataValue& dataValue)
    {
        return enabledState_FalseState_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_EnabledState_Id_Variable(const OpcUaDataValue& dataValue)
    {
        return enabledState_Id_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_EnabledState_TransitionTime_Variable(const OpcUaDataValue& dataValue)
    {
        return enabledState_TransitionTime_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_EnabledState_TrueState_Variable(const OpcUaDataValue& dataValue)
    {
        return enabledState_TrueState_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_EnabledState_Variable(const OpcUaDataValue& dataValue)
    {
        return enabledState_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_EventId_Variable(const OpcUaDataValue& dataValue)
    {
        return eventId_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_EventType_Variable(const OpcUaDataValue& dataValue)
    {
        return eventType_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_FirstInGroupFlag_Variable(const OpcUaDataValue& dataValue)
    {
        return firstInGroupFlag_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_HighHighLimit_Variable(const OpcUaDataValue& dataValue)
    {
        return highHighLimit_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_HighHighState_FalseState_Variable(const OpcUaDataValue& dataValue)
    {
        return highHighState_FalseState_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_HighHighState_Id_Variable(const OpcUaDataValue& dataValue)
    {
        return highHighState_Id_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_HighHighState_TransitionTime_Variable(const OpcUaDataValue& dataValue)
    {
        return highHighState_TransitionTime_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_HighHighState_TrueState_Variable(const OpcUaDataValue& dataValue)
    {
        return highHighState_TrueState_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_HighHighState_Variable(const OpcUaDataValue& dataValue)
    {
        return highHighState_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_HighLimit_Variable(const OpcUaDataValue& dataValue)
    {
        return highLimit_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_HighState_FalseState_Variable(const OpcUaDataValue& dataValue)
    {
        return highState_FalseState_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_HighState_Id_Variable(const OpcUaDataValue& dataValue)
    {
        return highState_Id_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_HighState_TransitionTime_Variable(const OpcUaDataValue& dataValue)
    {
        return highState_TransitionTime_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_HighState_TrueState_Variable(const OpcUaDataValue& dataValue)
    {
        return highState_TrueState_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_HighState_Variable(const OpcUaDataValue& dataValue)
    {
        return highState_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_InputNode_Variable(const OpcUaDataValue& dataValue)
    {
        return inputNode_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_LastSeverity_SourceTimestamp_Variable(const OpcUaDataValue& dataValue)
    {
        return lastSeverity_SourceTimestamp_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_LastSeverity_Variable(const OpcUaDataValue& dataValue)
    {
        return lastSeverity_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_LatchedState_FalseState_Variable(const OpcUaDataValue& dataValue)
    {
        return latchedState_FalseState_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_LatchedState_Id_Variable(const OpcUaDataValue& dataValue)
    {
        return latchedState_Id_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_LatchedState_TransitionTime_Variable(const OpcUaDataValue& dataValue)
    {
        return latchedState_TransitionTime_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_LatchedState_TrueState_Variable(const OpcUaDataValue& dataValue)
    {
        return latchedState_TrueState_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_LatchedState_Variable(const OpcUaDataValue& dataValue)
    {
        return latchedState_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_LocalTime_Variable(const OpcUaDataValue& dataValue)
    {
        return localTime_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_LowLimit_Variable(const OpcUaDataValue& dataValue)
    {
        return lowLimit_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_LowLowLimit_Variable(const OpcUaDataValue& dataValue)
    {
        return lowLowLimit_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_LowLowState_FalseState_Variable(const OpcUaDataValue& dataValue)
    {
        return lowLowState_FalseState_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_LowLowState_Id_Variable(const OpcUaDataValue& dataValue)
    {
        return lowLowState_Id_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_LowLowState_TransitionTime_Variable(const OpcUaDataValue& dataValue)
    {
        return lowLowState_TransitionTime_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_LowLowState_TrueState_Variable(const OpcUaDataValue& dataValue)
    {
        return lowLowState_TrueState_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_LowLowState_Variable(const OpcUaDataValue& dataValue)
    {
        return lowLowState_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_LowState_FalseState_Variable(const OpcUaDataValue& dataValue)
    {
        return lowState_FalseState_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_LowState_Id_Variable(const OpcUaDataValue& dataValue)
    {
        return lowState_Id_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_LowState_TransitionTime_Variable(const OpcUaDataValue& dataValue)
    {
        return lowState_TransitionTime_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_LowState_TrueState_Variable(const OpcUaDataValue& dataValue)
    {
        return lowState_TrueState_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_LowState_Variable(const OpcUaDataValue& dataValue)
    {
        return lowState_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_MaxTimeShelved_Variable(const OpcUaDataValue& dataValue)
    {
        return maxTimeShelved_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_Message_Variable(const OpcUaDataValue& dataValue)
    {
        return message_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_OffDelay_Variable(const OpcUaDataValue& dataValue)
    {
        return offDelay_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_OnDelay_Variable(const OpcUaDataValue& dataValue)
    {
        return onDelay_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_OutOfServiceState_FalseState_Variable(const OpcUaDataValue& dataValue)
    {
        return outOfServiceState_FalseState_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_OutOfServiceState_Id_Variable(const OpcUaDataValue& dataValue)
    {
        return outOfServiceState_Id_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_OutOfServiceState_TransitionTime_Variable(const OpcUaDataValue& dataValue)
    {
        return outOfServiceState_TransitionTime_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_OutOfServiceState_TrueState_Variable(const OpcUaDataValue& dataValue)
    {
        return outOfServiceState_TrueState_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_OutOfServiceState_Variable(const OpcUaDataValue& dataValue)
    {
        return outOfServiceState_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_Quality_SourceTimestamp_Variable(const OpcUaDataValue& dataValue)
    {
        return quality_SourceTimestamp_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_Quality_Variable(const OpcUaDataValue& dataValue)
    {
        return quality_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_ReAlarmRepeatCount_Variable(const OpcUaDataValue& dataValue)
    {
        return reAlarmRepeatCount_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_ReAlarmTime_Variable(const OpcUaDataValue& dataValue)
    {
        return reAlarmTime_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_ReceiveTime_Variable(const OpcUaDataValue& dataValue)
    {
        return receiveTime_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_Retain_Variable(const OpcUaDataValue& dataValue)
    {
        return retain_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_Severity_Variable(const OpcUaDataValue& dataValue)
    {
        return severity_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_ShelvingState_CurrentState_Id_Variable(const OpcUaDataValue& dataValue)
    {
        return shelvingState_CurrentState_Id_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_ShelvingState_CurrentState_Variable(const OpcUaDataValue& dataValue)
    {
        return shelvingState_CurrentState_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_ShelvingState_LastTransition_Id_Variable(const OpcUaDataValue& dataValue)
    {
        return shelvingState_LastTransition_Id_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_ShelvingState_LastTransition_TransitionTime_Variable(const OpcUaDataValue& dataValue)
    {
        return shelvingState_LastTransition_TransitionTime_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_ShelvingState_LastTransition_Variable(const OpcUaDataValue& dataValue)
    {
        return shelvingState_LastTransition_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_ShelvingState_UnshelveTime_Variable(const OpcUaDataValue& dataValue)
    {
        return shelvingState_UnshelveTime_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_SilenceState_FalseState_Variable(const OpcUaDataValue& dataValue)
    {
        return silenceState_FalseState_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_SilenceState_Id_Variable(const OpcUaDataValue& dataValue)
    {
        return silenceState_Id_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_SilenceState_TransitionTime_Variable(const OpcUaDataValue& dataValue)
    {
        return silenceState_TransitionTime_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_SilenceState_TrueState_Variable(const OpcUaDataValue& dataValue)
    {
        return silenceState_TrueState_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_SilenceState_Variable(const OpcUaDataValue& dataValue)
    {
        return silenceState_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_SourceName_Variable(const OpcUaDataValue& dataValue)
    {
        return sourceName_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_SourceNode_Variable(const OpcUaDataValue& dataValue)
    {
        return sourceNode_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_SuppressedOrShelved_Variable(const OpcUaDataValue& dataValue)
    {
        return suppressedOrShelved_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_SuppressedState_FalseState_Variable(const OpcUaDataValue& dataValue)
    {
        return suppressedState_FalseState_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_SuppressedState_Id_Variable(const OpcUaDataValue& dataValue)
    {
        return suppressedState_Id_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_SuppressedState_TransitionTime_Variable(const OpcUaDataValue& dataValue)
    {
        return suppressedState_TransitionTime_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_SuppressedState_TrueState_Variable(const OpcUaDataValue& dataValue)
    {
        return suppressedState_TrueState_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_SuppressedState_Variable(const OpcUaDataValue& dataValue)
    {
        return suppressedState_Variable_->setDataValue(dataValue);
    }

    bool
    NonExclusiveLimitAlarmType::set_Time_Variable(const OpcUaDataValue& dataValue)
    {
        return time_Variable_->setDataValue(dataValue);
    }

    void
    NonExclusiveLimitAlarmType::call_Acknowledge_Method(ApplicationMethodContext* applicationMethodContext)
    {
        applicationMethodContext->statusCode_ = BadNotSupported;
    }

    void
    NonExclusiveLimitAlarmType::call_AddComment_Method(ApplicationMethodContext* applicationMethodContext)
    {
        applicationMethodContext->statusCode_ = BadNotSupported;
    }

    void
    NonExclusiveLimitAlarmType::call_Confirm_Method(ApplicationMethodContext* applicationMethodContext)
    {
        applicationMethodContext->statusCode_ = BadNotSupported;
    }

    void
    NonExclusiveLimitAlarmType::call_Disable_Method(ApplicationMethodContext* applicationMethodContext)
    {
        applicationMethodContext->statusCode_ = BadNotSupported;
    }

    void
    NonExclusiveLimitAlarmType::call_Enable_Method(ApplicationMethodContext* applicationMethodContext)
    {
        applicationMethodContext->statusCode_ = BadNotSupported;
    }

    void
    NonExclusiveLimitAlarmType::call_PlaceInService_Method(ApplicationMethodContext* applicationMethodContext)
    {
        applicationMethodContext->statusCode_ = BadNotSupported;
    }

    void
    NonExclusiveLimitAlarmType::call_RemoveFromService_Method(ApplicationMethodContext* applicationMethodContext)
    {
        applicationMethodContext->statusCode_ = BadNotSupported;
    }

    void
    NonExclusiveLimitAlarmType::call_Reset_Method(ApplicationMethodContext* applicationMethodContext)
    {
        applicationMethodContext->statusCode_ = BadNotSupported;
    }

    void
    NonExclusiveLimitAlarmType::call_ShelvingState_OneShotShelve_Method(ApplicationMethodContext* applicationMethodContext)
    {
        applicationMethodContext->statusCode_ = BadNotSupported;
    }

    void
    NonExclusiveLimitAlarmType::call_ShelvingState_TimedShelve_Method(ApplicationMethodContext* applicationMethodContext)
    {
        applicationMethodContext->statusCode_ = BadNotSupported;
    }

    void
    NonExclusiveLimitAlarmType::call_ShelvingState_Unshelve_Method(ApplicationMethodContext* applicationMethodContext)
    {
        applicationMethodContext->statusCode_ = BadNotSupported;
    }

    void
    NonExclusiveLimitAlarmType::call_Silence_Method(ApplicationMethodContext* applicationMethodContext)
    {
        applicationMethodContext->statusCode_ = BadNotSupported;
    }

    void
    NonExclusiveLimitAlarmType::call_Suppress_Method(ApplicationMethodContext* applicationMethodContext)
    {
        applicationMethodContext->statusCode_ = BadNotSupported;
    }

    void
    NonExclusiveLimitAlarmType::call_Unsuppress_Method(ApplicationMethodContext* applicationMethodContext)
    {
        applicationMethodContext->statusCode_ = BadNotSupported;
    }

}
// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

struct ScriptDataDrivenActorTriggerEvent {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTDATADRIVENACTORTRIGGEREVENT
public:
    struct ScriptDataDrivenActorTriggerEvent& operator=(struct ScriptDataDrivenActorTriggerEvent const &) = delete;
    ScriptDataDrivenActorTriggerEvent(struct ScriptDataDrivenActorTriggerEvent const &) = delete;
    ScriptDataDrivenActorTriggerEvent() = delete;
#endif

public:
    MCAPI ScriptDataDrivenActorTriggerEvent(struct ActorDefinitionEndedEvent const &, class Scripting::WeakLifetimeScope const &);
    MCAPI ~ScriptDataDrivenActorTriggerEvent();

protected:

private:

};
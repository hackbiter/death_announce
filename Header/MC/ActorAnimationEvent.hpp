// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ActorAnimationEvent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORANIMATIONEVENT
public:
    class ActorAnimationEvent& operator=(class ActorAnimationEvent const &) = delete;
    ActorAnimationEvent(class ActorAnimationEvent const &) = delete;
    ActorAnimationEvent() = delete;
#endif

public:
    MCAPI ActorAnimationEvent(class ActorAnimationEvent &&);
    MCAPI ActorAnimationEvent(float, std::string const &, enum CurrentCmdVersion, enum MolangVersion);
    MCAPI void fire(class RenderParams &, class Actor *) const;
    MCAPI ~ActorAnimationEvent();

protected:

private:

};
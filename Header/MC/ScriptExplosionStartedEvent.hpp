// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

struct ScriptExplosionStartedEvent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTEXPLOSIONSTARTEDEVENT
public:
    ScriptExplosionStartedEvent() = delete;
#endif

public:
    MCAPI ScriptExplosionStartedEvent(struct ScriptExplosionStartedEvent const &);
    MCAPI ScriptExplosionStartedEvent(struct ExplosionStartedEvent const &, class Scripting::WeakLifetimeScope const &);
    MCAPI void copyTo(struct ExplosionStartedEvent &) const;
    MCAPI struct ScriptExplosionStartedEvent & operator=(struct ScriptExplosionStartedEvent &&);
    MCAPI struct ScriptExplosionStartedEvent & operator=(struct ScriptExplosionStartedEvent const &);
    MCAPI ~ScriptExplosionStartedEvent();

protected:

private:

};
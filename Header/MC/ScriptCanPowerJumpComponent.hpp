// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ScriptActorComponent.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ScriptCanPowerJumpComponent : public ScriptActorComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTCANPOWERJUMPCOMPONENT
public:
    class ScriptCanPowerJumpComponent& operator=(class ScriptCanPowerJumpComponent const &) = delete;
    ScriptCanPowerJumpComponent(class ScriptCanPowerJumpComponent const &) = delete;
    ScriptCanPowerJumpComponent() = delete;
#endif

public:
    /*0*/ virtual ~ScriptCanPowerJumpComponent();
    /*
    inline  ~ScriptCanPowerJumpComponent(){
         (ScriptCanPowerJumpComponent::*rv)();
        *((void**)&rv) = dlsym("??1ScriptCanPowerJumpComponent@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI static class HashedString const & getHashedName();

protected:

private:

};
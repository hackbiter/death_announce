// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ScriptActorComponent.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ScriptIsHiddenWhenInvisibleComponent : public ScriptActorComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTISHIDDENWHENINVISIBLECOMPONENT
public:
    class ScriptIsHiddenWhenInvisibleComponent& operator=(class ScriptIsHiddenWhenInvisibleComponent const &) = delete;
    ScriptIsHiddenWhenInvisibleComponent(class ScriptIsHiddenWhenInvisibleComponent const &) = delete;
    ScriptIsHiddenWhenInvisibleComponent() = delete;
#endif

public:
    /*0*/ virtual ~ScriptIsHiddenWhenInvisibleComponent();
    /*
    inline  ~ScriptIsHiddenWhenInvisibleComponent(){
         (ScriptIsHiddenWhenInvisibleComponent::*rv)();
        *((void**)&rv) = dlsym("??1ScriptIsHiddenWhenInvisibleComponent@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI static class HashedString const & getHashedName();

protected:

private:

};
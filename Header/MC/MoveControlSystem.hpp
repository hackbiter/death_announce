// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class MoveControlSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVECONTROLSYSTEM
public:
    class MoveControlSystem& operator=(class MoveControlSystem const &) = delete;
    MoveControlSystem(class MoveControlSystem const &) = delete;
    MoveControlSystem() = delete;
#endif

public:
    /*0*/ virtual ~MoveControlSystem();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void tick(class EntityRegistry &);

protected:

private:

};
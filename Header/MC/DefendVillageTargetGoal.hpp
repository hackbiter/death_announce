// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "TargetGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class DefendVillageTargetGoal : public TargetGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEFENDVILLAGETARGETGOAL
public:
    class DefendVillageTargetGoal& operator=(class DefendVillageTargetGoal const &) = delete;
    DefendVillageTargetGoal(class DefendVillageTargetGoal const &) = delete;
    DefendVillageTargetGoal() = delete;
#endif

public:
    /*0*/ virtual ~DefendVillageTargetGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*4*/ virtual void start();
    /*7*/ virtual void appendDebugInfo(std::string &) const;
    MCAPI DefendVillageTargetGoal(class Mob &);

protected:

private:

};
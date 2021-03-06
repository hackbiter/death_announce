// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class FollowTargetCaptainGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FOLLOWTARGETCAPTAINGOAL
public:
    class FollowTargetCaptainGoal& operator=(class FollowTargetCaptainGoal const &) = delete;
    FollowTargetCaptainGoal(class FollowTargetCaptainGoal const &) = delete;
    FollowTargetCaptainGoal() = delete;
#endif

public:
    /*0*/ virtual ~FollowTargetCaptainGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void start();
    /*5*/ virtual void __unk_vfn_5();
    /*6*/ virtual void tick();
    /*7*/ virtual void appendDebugInfo(std::string &) const;
    /*
    inline void stop(){
        void (FollowTargetCaptainGoal::*rv)();
        *((void**)&rv) = dlsym("?stop@FollowTargetCaptainGoal@@UEAAXXZ");
        return (this->*rv)();
    }
    */
    MCAPI FollowTargetCaptainGoal(class Mob &, float, float, float);

protected:

private:
    MCAPI void _determineMovePos();

};
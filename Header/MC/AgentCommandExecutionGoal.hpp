// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class AgentCommandExecutionGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AGENTCOMMANDEXECUTIONGOAL
public:
    class AgentCommandExecutionGoal& operator=(class AgentCommandExecutionGoal const &) = delete;
    AgentCommandExecutionGoal(class AgentCommandExecutionGoal const &) = delete;
    AgentCommandExecutionGoal() = delete;
#endif

public:
    /*0*/ virtual ~AgentCommandExecutionGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void start();
    /*5*/ virtual void stop();
    /*6*/ virtual void __unk_vfn_6();
    /*7*/ virtual void appendDebugInfo(std::string &) const;
    /*
    inline bool canBeInterrupted(){
        bool (AgentCommandExecutionGoal::*rv)();
        *((void**)&rv) = dlsym("?canBeInterrupted@AgentCommandExecutionGoal@@UEAA_NXZ");
        return (this->*rv)();
    }
    */
    MCAPI AgentCommandExecutionGoal(class Mob &);

protected:

private:

};
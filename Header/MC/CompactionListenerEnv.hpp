// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class CompactionListenerEnv {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPACTIONLISTENERENV
public:
    class CompactionListenerEnv& operator=(class CompactionListenerEnv const &) = delete;
    CompactionListenerEnv(class CompactionListenerEnv const &) = delete;
    CompactionListenerEnv() = delete;
#endif

public:
    /*0*/ virtual ~CompactionListenerEnv();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual void __unk_vfn_5();
    /*6*/ virtual void __unk_vfn_6();
    /*7*/ virtual void __unk_vfn_7();
    /*8*/ virtual void __unk_vfn_8();
    /*9*/ virtual void __unk_vfn_9();
    /*10*/ virtual void __unk_vfn_10();
    /*11*/ virtual void __unk_vfn_11();
    /*12*/ virtual void __unk_vfn_12();
    /*13*/ virtual void __unk_vfn_13();
    /*14*/ virtual void Schedule(void ( *)(void *), void *);
    MCAPI CompactionListenerEnv(class leveldb::Env *);
    MCAPI void setCompactionCallback(class std::function<void (enum CompactionStatus)>);

protected:

private:

};
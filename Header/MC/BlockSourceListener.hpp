// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BlockSourceListener {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKSOURCELISTENER
public:
    class BlockSourceListener& operator=(class BlockSourceListener const &) = delete;
    BlockSourceListener(class BlockSourceListener const &) = delete;
    BlockSourceListener() = delete;
#endif

public:
    /*0*/ virtual ~BlockSourceListener();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void onSourceDestroyed(class BlockSource &);
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual void onBrightnessChanged(class BlockSource &, class BlockPos const &);
    /*6*/ virtual void __unk_vfn_6();
    /*7*/ virtual void onBlockEntityAboutToBeRemoved(class BlockSource &, class std::shared_ptr<class BlockActor>);
    /*
    inline void onAreaChanged(class BlockSource & a0, class BlockPos const & a1, class BlockPos const & a2){
        void (BlockSourceListener::*rv)(class BlockSource &, class BlockPos const &, class BlockPos const &);
        *((void**)&rv) = dlsym("?onAreaChanged@BlockSourceListener@@UEAAXAEAVBlockSource@@AEBVBlockPos@@1@Z");
        return (this->*rv)(std::forward<class BlockSource &>(a0), std::forward<class BlockPos const &>(a1), std::forward<class BlockPos const &>(a2));
    }
    inline void onBlockChanged(class BlockSource & a0, class BlockPos const & a1, unsigned int a2, class Block const & a3, class Block const & a4, int a5, struct ActorBlockSyncMessage const * a6, enum BlockChangedEventTarget a7, class Actor * a8){
        void (BlockSourceListener::*rv)(class BlockSource &, class BlockPos const &, unsigned int, class Block const &, class Block const &, int, struct ActorBlockSyncMessage const *, enum BlockChangedEventTarget, class Actor *);
        *((void**)&rv) = dlsym("?onBlockChanged@BlockSourceListener@@UEAAXAEAVBlockSource@@AEBVBlockPos@@IAEBVBlock@@2HPEBUActorBlockSyncMessage@@W4BlockChangedEventTarget@@PEAVActor@@@Z");
        return (this->*rv)(std::forward<class BlockSource &>(a0), std::forward<class BlockPos const &>(a1), std::forward<unsigned int>(a2), std::forward<class Block const &>(a3), std::forward<class Block const &>(a4), std::forward<int>(a5), std::forward<struct ActorBlockSyncMessage const *>(a6), std::forward<enum BlockChangedEventTarget>(a7), std::forward<class Actor *>(a8));
    }
    inline void onEntityChanged(class BlockSource & a0, class Actor & a1){
        void (BlockSourceListener::*rv)(class BlockSource &, class Actor &);
        *((void**)&rv) = dlsym("?onEntityChanged@BlockSourceListener@@UEAAXAEAVBlockSource@@AEAVActor@@@Z");
        return (this->*rv)(std::forward<class BlockSource &>(a0), std::forward<class Actor &>(a1));
    }
    inline void onBlockEntityChanged(class BlockSource & a0, class BlockActor & a1){
        void (BlockSourceListener::*rv)(class BlockSource &, class BlockActor &);
        *((void**)&rv) = dlsym("?onBlockEntityChanged@BlockSourceListener@@UEAAXAEAVBlockSource@@AEAVBlockActor@@@Z");
        return (this->*rv)(std::forward<class BlockSource &>(a0), std::forward<class BlockActor &>(a1));
    }
    inline void onSourceCreated(class BlockSource & a0){
        void (BlockSourceListener::*rv)(class BlockSource &);
        *((void**)&rv) = dlsym("?onSourceCreated@BlockSourceListener@@UEAAXAEAVBlockSource@@@Z");
        return (this->*rv)(std::forward<class BlockSource &>(a0));
    }
    inline void onBlockEvent(class BlockSource & a0, int a1, int a2, int a3, int a4, int a5){
        void (BlockSourceListener::*rv)(class BlockSource &, int, int, int, int, int);
        *((void**)&rv) = dlsym("?onBlockEvent@BlockSourceListener@@UEAAXAEAVBlockSource@@HHHHH@Z");
        return (this->*rv)(std::forward<class BlockSource &>(a0), std::forward<int>(a1), std::forward<int>(a2), std::forward<int>(a3), std::forward<int>(a4), std::forward<int>(a5));
    }
    inline  ~BlockSourceListener(){
         (BlockSourceListener::*rv)();
        *((void**)&rv) = dlsym("??1BlockSourceListener@@UEAA@XZ");
        return (this->*rv)();
    }
    */

protected:

private:

};
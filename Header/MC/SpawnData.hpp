// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SpawnData {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPAWNDATA
public:
    class SpawnData& operator=(class SpawnData const &) = delete;
    SpawnData() = delete;
#endif

public:
    /*0*/ virtual ~SpawnData();
    MCAPI SpawnData(class SpawnData const &);
    MCAPI SpawnData(class CompoundTag const &);
    MCAPI std::unique_ptr<class CompoundTag> save();

protected:

private:

};
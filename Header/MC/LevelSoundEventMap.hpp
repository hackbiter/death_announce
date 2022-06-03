// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class LevelSoundEventMap {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELSOUNDEVENTMAP
public:
    class LevelSoundEventMap& operator=(class LevelSoundEventMap const &) = delete;
    LevelSoundEventMap(class LevelSoundEventMap const &) = delete;
    LevelSoundEventMap() = delete;
#endif

public:
    MCAPI static enum LevelSoundEvent getId(std::string const &);
    MCAPI static std::string const & getName(enum LevelSoundEvent);

protected:

private:
    MCAPI static class BidirectionalUnorderedMap<std::string, enum LevelSoundEvent> const map;

};
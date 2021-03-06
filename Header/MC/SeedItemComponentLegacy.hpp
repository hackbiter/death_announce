// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SeedItemComponentLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SEEDITEMCOMPONENTLEGACY
public:
    class SeedItemComponentLegacy& operator=(class SeedItemComponentLegacy const &) = delete;
    SeedItemComponentLegacy(class SeedItemComponentLegacy const &) = delete;
    SeedItemComponentLegacy() = delete;
#endif

public:
    MCAPI SeedItemComponentLegacy(class Item &);
    MCAPI bool init(class Json::Value &, class SemVersion const &);
    MCAPI bool isPlanting() const;
    MCAPI void setPlanting(bool);
    MCAPI bool useOn(class ItemStack &, class Actor &, class BlockPos const &, unsigned char, class Vec3 const &);

protected:

private:
    MCAPI bool _canPlant(class Block const &) const;

};
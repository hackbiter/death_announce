// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "CommandOrigin.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BlockCommandOrigin : public CommandOrigin {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKCOMMANDORIGIN
public:
    class BlockCommandOrigin& operator=(class BlockCommandOrigin const &) = delete;
    BlockCommandOrigin(class BlockCommandOrigin const &) = delete;
    BlockCommandOrigin() = delete;
#endif

public:
    /*0*/ virtual ~BlockCommandOrigin();
    /*1*/ virtual std::string const & getRequestId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual class BlockPos getBlockPosition() const;
    /*4*/ virtual class Vec3 getWorldPosition() const;
    /*5*/ virtual class std::optional<class Vec2> getRotation() const;
    /*6*/ virtual class Level * getLevel() const;
    /*7*/ virtual class Dimension * getDimension() const;
    /*8*/ virtual class Actor * getEntity() const;
    /*9*/ virtual enum CommandPermissionLevel getPermissionsLevel() const;
    /*10*/ virtual std::unique_ptr<class CommandOrigin> clone() const;
    /*11*/ virtual class std::optional<class BlockPos> getCursorHitBlockPos() const;
    /*12*/ virtual class std::optional<class Vec3> getCursorHitPos() const;
    /*15*/ virtual bool canUseAbility(enum AbilitiesIndex) const;
    /*17*/ virtual bool canUseCommandsWithoutCheatsEnabled() const;
    /*18*/ virtual bool isSelectorExpansionAllowed() const;
    /*20*/ virtual unsigned char getSourceSubId() const;
    /*23*/ virtual enum CommandOriginType getOriginType() const;
    /*26*/ virtual void __unk_vfn_26();
    /*27*/ virtual void updateValues();
    /*29*/ virtual class CompoundTag serialize() const;
    /*30*/ virtual bool isValid() const;
    /*32*/ virtual class BaseCommandBlock * _getBaseCommandBlock(class BlockSource &) const;
    /*33*/ virtual class CommandBlockActor * _getBlockEntity(class BlockSource &) const;
    /*
    inline  ~BlockCommandOrigin(){
         (BlockCommandOrigin::*rv)();
        *((void**)&rv) = dlsym("??1BlockCommandOrigin@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI BlockCommandOrigin(class BlockSource &, class BlockPos const &);
    MCAPI BlockCommandOrigin(class Level &, class AutomaticID<class Dimension, int>, std::string const &, class BlockPos const &);
    MCAPI static std::unique_ptr<class BlockCommandOrigin> load(class CompoundTag const &, class Level &);

protected:
    MCAPI std::string _getName(class BlockSource &) const;

private:

};
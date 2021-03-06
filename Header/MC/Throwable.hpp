// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "PredictableProjectile.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class Throwable : public PredictableProjectile {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_THROWABLE
public:
    class Throwable& operator=(class Throwable const &) = delete;
    Throwable(class Throwable const &) = delete;
    Throwable() = delete;
#endif

public:
    /*8*/ virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const &);
    /*10*/ virtual void initializeComponents(enum Actor::InitializationMethod, class VariantParameterList const &);
    /*14*/ virtual ~Throwable();
    /*16*/ virtual void resetUserPos(bool);
    /*20*/ virtual bool isRuntimePredictedMovementEnabled() const;
    /*32*/ virtual float getInterpolatedHeadRot(float) const;
    /*33*/ virtual float getInterpolatedBodyYaw(float) const;
    /*40*/ virtual void __unk_vfn_40();
    /*46*/ virtual void lerpMotion(class Vec3 const &);
    /*61*/ virtual void __unk_vfn_61();
    /*68*/ virtual void __unk_vfn_68();
    /*78*/ virtual float getCameraOffset() const;
    /*79*/ virtual float getShadowHeightOffs();
    /*82*/ virtual void __unk_vfn_82();
    /*85*/ virtual bool canInteractWithOtherEntitiesInGame() const;
    /*88*/ virtual void __unk_vfn_88();
    /*89*/ virtual void playerTouch(class Player &);
    /*94*/ virtual bool isPickable();
    /*95*/ virtual void __unk_vfn_95();
    /*96*/ virtual bool isSleeping() const;
    /*97*/ virtual void setSleeping(bool);
    /*98*/ virtual void __unk_vfn_98();
    /*100*/ virtual bool isBlocking() const;
    /*101*/ virtual bool isDamageBlocked(class ActorDamageSource const &) const;
    /*105*/ virtual void __unk_vfn_105();
    /*106*/ virtual bool isSurfaceMob() const;
    /*107*/ virtual void __unk_vfn_107();
    /*108*/ virtual void __unk_vfn_108();
    /*109*/ virtual void __unk_vfn_109();
    /*113*/ virtual class Actor * findAttackTarget();
    /*114*/ virtual bool isValidTarget(class Actor *) const;
    /*120*/ virtual void onTame();
    /*121*/ virtual void onFailedTame();
    /*128*/ virtual bool isJumping() const;
    /*130*/ virtual void vehicleLanded(class Vec3 const &, class Vec3 const &);
    /*136*/ virtual void animateHurt();
    /*139*/ virtual void onBounceStarted(class BlockPos const &, class Block const &);
    /*151*/ virtual void awardKillScore(class Actor &, int);
    /*155*/ virtual enum ArmorMaterialType getArmorMaterialTypeInSlot(enum ArmorSlot) const;
    /*156*/ virtual enum ArmorTextureType getArmorMaterialTextureTypeInSlot(enum ArmorSlot) const;
    /*157*/ virtual float getArmorColorInSlot(enum ArmorSlot, int) const;
    /*159*/ virtual void setEquippedSlot(enum EquipmentSlot, class ItemStack const &);
    /*171*/ virtual struct ActorUniqueID getSourceUniqueID() const;
    /*173*/ virtual bool canFreeze() const;
    /*178*/ virtual int getPortalWaitTime() const;
    /*180*/ virtual bool canChangeDimensions() const;
    /*181*/ virtual void __unk_vfn_181();
    /*183*/ virtual struct ActorUniqueID getControllingPlayer() const;
    /*192*/ virtual bool canPickupItem(class ItemStack const &) const;
    /*193*/ virtual bool canBePulledIntoVehicle() const;
    /*194*/ virtual bool inCaravan() const;
    /*195*/ virtual void __unk_vfn_195();
    /*198*/ virtual bool canSynchronizeNewEntity() const;
    /*202*/ virtual void buildDebugInfo(std::string &) const;
    /*207*/ virtual int getDeathTime() const;
    /*218*/ virtual void swing();
    /*220*/ virtual void __unk_vfn_220();
    /*221*/ virtual void __unk_vfn_221();
    /*225*/ virtual float getYHeadRot() const;
    /*226*/ virtual void setYHeadRot(float);
    /*227*/ virtual float getYHeadRotO() const;
    /*228*/ virtual bool isWorldBuilder() const;
    /*229*/ virtual bool isCreative() const;
    /*230*/ virtual bool isAdventure() const;
    /*231*/ virtual bool isSurvival() const;
    /*232*/ virtual bool isSpectator() const;
    /*237*/ virtual bool canDestroyBlock(class Block const &) const;
    /*238*/ virtual void setAuxValue(int);
    /*244*/ virtual void stopSpinAttack();
    /*246*/ virtual void __unk_vfn_246();
    /*249*/ virtual void __unk_vfn_249();
    /*259*/ virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    /*261*/ virtual void __unk_vfn_261();
    /*265*/ virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /*266*/ virtual void addAdditionalSaveData(class CompoundTag &);
    /*269*/ virtual void __unk_vfn_269();
    /*277*/ virtual void _onSizeUpdated();
    /*278*/ virtual void __unk_vfn_278();
    /*279*/ virtual float getThrowPower();
    /*280*/ virtual void __unk_vfn_280();
    /*281*/ virtual float getThrowUpAngleOffset();
    /*282*/ virtual float getGravity();
    /*283*/ virtual enum ParticleType getParticleType();
    /*
    inline bool stopUponGroundCollision() const{
        bool (Throwable::*rv)() const;
        *((void**)&rv) = dlsym("?stopUponGroundCollision@Throwable@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool canMakeStepSound() const{
        bool (Throwable::*rv)() const;
        *((void**)&rv) = dlsym("?canMakeStepSound@Throwable@@MEBA_NXZ");
        return (this->*rv)();
    }
    inline void onHit(class HitResult const & a0){
        void (Throwable::*rv)(class HitResult const &);
        *((void**)&rv) = dlsym("?onHit@Throwable@@MEAAXAEBVHitResult@@@Z");
        return (this->*rv)(std::forward<class HitResult const &>(a0));
    }
    inline  ~Throwable(){
         (Throwable::*rv)();
        *((void**)&rv) = dlsym("??1Throwable@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI Throwable(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    MCAPI void shoot(class Mob &);
    MCAPI void shoot(class Vec3 const &, float, float, class Vec3 const &);

protected:

private:

};
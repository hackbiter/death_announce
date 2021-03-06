// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Monster.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class WitherBoss : public Monster {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WITHERBOSS
public:
    class WitherBoss& operator=(class WitherBoss const &) = delete;
    WitherBoss(class WitherBoss const &) = delete;
    WitherBoss() = delete;
#endif

public:
    /*8*/ virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const &);
    /*9*/ virtual void reloadHardcodedClient(enum Actor::InitializationMethod, class VariantParameterList const &);
    /*14*/ virtual ~WitherBoss();
    /*16*/ virtual void resetUserPos(bool);
    /*18*/ virtual void remove();
    /*20*/ virtual bool isRuntimePredictedMovementEnabled() const;
    /*26*/ virtual class Vec3 getFiringPos() const;
    /*40*/ virtual void __unk_vfn_40();
    /*53*/ virtual bool startRiding(class Actor &);
    /*61*/ virtual void __unk_vfn_61();
    /*68*/ virtual void __unk_vfn_68();
    /*76*/ virtual void setBlockMovementSlowdownMultiplier(class BlockLegacy const &, class Vec3 const &);
    /*78*/ virtual float getCameraOffset() const;
    /*82*/ virtual void __unk_vfn_82();
    /*85*/ virtual bool canInteractWithOtherEntitiesInGame() const;
    /*88*/ virtual void __unk_vfn_88();
    /*89*/ virtual void playerTouch(class Player &);
    /*95*/ virtual void __unk_vfn_95();
    /*98*/ virtual void __unk_vfn_98();
    /*101*/ virtual bool isDamageBlocked(class ActorDamageSource const &) const;
    /*105*/ virtual void __unk_vfn_105();
    /*107*/ virtual void __unk_vfn_107();
    /*108*/ virtual void __unk_vfn_108();
    /*109*/ virtual void __unk_vfn_109();
    /*114*/ virtual bool isValidTarget(class Actor *) const;
    /*120*/ virtual void onTame();
    /*121*/ virtual void onFailedTame();
    /*130*/ virtual void vehicleLanded(class Vec3 const &, class Vec3 const &);
    /*134*/ virtual bool isInvulnerableTo(class ActorDamageSource const &) const;
    /*139*/ virtual void onBounceStarted(class BlockPos const &, class Block const &);
    /*141*/ virtual void handleEntityEvent(enum ActorEvent, int);
    /*151*/ virtual void awardKillScore(class Actor &, int);
    /*171*/ virtual struct ActorUniqueID getSourceUniqueID() const;
    /*173*/ virtual bool canFreeze() const;
    /*178*/ virtual int getPortalWaitTime() const;
    /*180*/ virtual bool canChangeDimensions() const;
    /*181*/ virtual void __unk_vfn_181();
    /*183*/ virtual struct ActorUniqueID getControllingPlayer() const;
    /*185*/ virtual void causeFallDamage(float, float, class ActorDamageSource);
    /*192*/ virtual bool canPickupItem(class ItemStack const &) const;
    /*193*/ virtual bool canBePulledIntoVehicle() const;
    /*195*/ virtual void __unk_vfn_195();
    /*198*/ virtual bool canSynchronizeNewEntity() const;
    /*211*/ virtual bool canBeAffected(class MobEffectInstance const &) const;
    /*212*/ virtual bool canBeAffectedByArrow(class MobEffectInstance const &) const;
    /*220*/ virtual void __unk_vfn_220();
    /*221*/ virtual void __unk_vfn_221();
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
    /*251*/ virtual void die(class ActorDamageSource const &);
    /*261*/ virtual void __unk_vfn_261();
    /*262*/ virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /*265*/ virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /*266*/ virtual void addAdditionalSaveData(class CompoundTag &);
    /*269*/ virtual void __unk_vfn_269();
    /*278*/ virtual void __unk_vfn_278();
    /*280*/ virtual void spawnAnim();
    /*288*/ virtual void hurtEffects(class ActorDamageSource const &, float, bool, bool);
    /*294*/ virtual void aiStep();
    /*302*/ virtual int getItemUseDuration() const;
    /*303*/ virtual float getItemUseStartupProgress() const;
    /*304*/ virtual float getItemUseIntervalProgress() const;
    /*307*/ virtual void __unk_vfn_307();
    /*309*/ virtual bool isAlliedTo(class Mob *);
    /*311*/ virtual void __unk_vfn_311();
    /*316*/ virtual int getArmorValue() const;
    /*321*/ virtual void sendArmorDamage(class std::bitset<4> const &);
    /*338*/ virtual void onBorn(class Actor &, class Actor &);
    /*345*/ virtual void __unk_vfn_345();
    /*354*/ virtual void newServerAiStep();
    /*355*/ virtual void _serverAiMobStep();
    /*359*/ virtual void __unk_vfn_359();
    /*
    inline void causeFallDamage(float a0, float a1, class ActorDamageSource a2){
        void (WitherBoss::*rv)(float, float, class ActorDamageSource);
        *((void**)&rv) = dlsym("?causeFallDamage@WitherBoss@@UEAAXMMVActorDamageSource@@@Z");
        return (this->*rv)(std::forward<float>(a0), std::forward<float>(a1), std::forward<class ActorDamageSource>(a2));
    }
    */
    MCAPI WitherBoss(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    MCAPI void awardSpawnWitherAchievement() const;
    MCAPI class Vec3 getHeadPos(int) const;
    MCAPI class Vec2 getHeadRot(int);
    MCAPI int getInvulnerableTicks() const;
    MCAPI float getOverlayAlpha();
    MCAPI float getSwellAmount(float) const;
    MCAPI bool hasAerialAttack() const;
    MCAPI void removeSkeleton();
    MCAPI void setAerialAttack(bool);
    MCAPI void setAlternativeTarget(int, struct ActorUniqueID);
    MCAPI void setInvulnerableTicks(int);
    MCAPI void setIsPathing(bool);
    MCAPI void setShotDelay(int);
    MCAPI void setWantsToMove(bool);
    MCAPI bool wantsToMove();
    MCAPI static class mce::UUID const MAX_HEALTH_CAP_UUID;
    MCAPI static bool canDestroy(class Block const &);

protected:

private:
    MCAPI void _destroyBlocks(class Level &, class AABB const &, class BlockSource &, int);
    MCAPI void _performRangedAttack(int, class Actor &);
    MCAPI void _performRangedAttack(int, class Vec3 const &, bool);
    MCAPI bool canShoot();
    MCAPI static int const TIME_BEFORE_MOVING;

};
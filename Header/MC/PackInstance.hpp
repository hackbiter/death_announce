// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class PackInstance {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACKINSTANCE
public:
    class PackInstance& operator=(class PackInstance const &) = delete;
    PackInstance() = delete;
#endif

public:
    MCAPI PackInstance(class PackInstance &&);
    MCAPI PackInstance(class PackInstance const &);
    MCAPI PackInstance(class gsl::not_null<class Bedrock::NonOwnerPointer<class ResourcePack>>, std::string const &, bool, class PackSettings *);
    MCAPI PackInstance(class gsl::not_null<class Bedrock::NonOwnerPointer<class ResourcePack>>, int, bool, class PackSettings *);
    MCAPI void forEachIn(class Core::Path const &, class std::function<void (class Core::Path const &)>, bool) const;
    MCAPI double getLoadTime() const;
    MCAPI class PackManifest & getManifest();
    MCAPI class PackManifest const & getManifest() const;
    MCAPI enum PackCategory getPackCategory() const;
    MCAPI class mce::UUID const getPackId() const;
    MCAPI enum PackOrigin getPackOrigin() const;
    MCAPI class PackStats & getPackStats();
    MCAPI class PackStats const & getPackStats() const;
    MCAPI bool getResource(class Core::Path const &, std::string &) const;
    MCAPI class ResourceLocation const & getResourceLocation() const;
    MCAPI std::string const & getSubpackFolderName() const;
    MCAPI class ContentTierInfo getTierInfo() const;
    MCAPI class SemVersion const & getVersion() const;
    MCAPI bool hasResource(class Core::Path const &) const;
    MCAPI bool isBaseGamePack() const;
    MCAPI bool isSlicePack() const;
    MCAPI bool isZipped() const;
    MCAPI bool operator==(class PackInstance const &) const;
    MCAPI void setLocale(std::string const &);
    MCAPI ~PackInstance();

protected:

private:
    MCAPI bool _isPackPointerValid() const;

};
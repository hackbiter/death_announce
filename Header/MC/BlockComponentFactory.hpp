// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BlockComponentFactory {

#define AFTER_EXTRA
// Add Member There
public:
struct Constructor {
    Constructor() = delete;
    Constructor(Constructor const&) = delete;
    Constructor(Constructor const&&) = delete;
};

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKCOMPONENTFACTORY
public:
    class BlockComponentFactory& operator=(class BlockComponentFactory const &) = delete;
    BlockComponentFactory(class BlockComponentFactory const &) = delete;
    BlockComponentFactory() = delete;
#endif

public:
    MCAPI BlockComponentFactory(class Experiments const &);
    MCAPI std::unique_ptr<struct BlockComponentDescription> createDescription(std::string const &) const;
    MCAPI void initializeFactory(class Experiments const &);
    MCAPI static class entt::meta_any constructComponent(std::string const &);
    MCAPI static class entt::meta_any getComponent(std::string const &, void *);
    MCAPI static class std::unordered_map<std::string, struct BlockComponentFactory::Constructor, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, struct BlockComponentFactory::Constructor>>> mRegisteredCerealComponents;
    MCAPI static void registerAllCerealDescriptions();

protected:

private:

};
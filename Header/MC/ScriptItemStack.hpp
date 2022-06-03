// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "Scripting.hpp"

#undef BEFORE_EXTRA

class ScriptItemStack {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTITEMSTACK
public:
    class ScriptItemStack& operator=(class ScriptItemStack const &) = delete;
    ScriptItemStack() = delete;
#endif

public:
    /*0*/ virtual ~ScriptItemStack();
    /*
    inline  ~ScriptItemStack(){
         (ScriptItemStack::*rv)();
        *((void**)&rv) = dlsym("??1ScriptItemStack@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI ScriptItemStack(class ScriptItemStack &&);
    MCAPI ScriptItemStack(class ScriptItemStack const &);
    MCAPI ScriptItemStack(class ItemStackBase const &);
    MCAPI class Scripting::WeakObjectHandle getComponent(class Scripting::WeakLifetimeScope, std::string const &);
    MCAPI std::vector<class Scripting::WeakObjectHandle> getComponents(class Scripting::WeakLifetimeScope);
    MCAPI std::string getId();
    MCAPI class ItemInstance const & getItemInstance() const;
    MCAPI class ItemInstance & getItemInstance();
    MCAPI std::vector<std::string> getLore() const;
    MCAPI class std::optional<std::string> getNameTag() const;
    MCAPI bool hasComponent(class Scripting::WeakLifetimeScope, std::string const &);
    MCAPI class ScriptItemStack & operator=(class ScriptItemStack &&);
    MCAPI void setLore(std::vector<std::string> const &);
    MCAPI void setNameTag(class std::optional<std::string>);
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptItemStack> bind(struct Scripting::Version, class Level *);
    MCAPI static class Scripting::StrongTypedObjectHandle<class ScriptItemStack> createHandle(class Scripting::WeakLifetimeScope, class ItemStackBase const &);

protected:

private:

};
// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Recipe.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ShapedRecipe : public Recipe {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHAPEDRECIPE
public:
    class ShapedRecipe& operator=(class ShapedRecipe const &) = delete;
    ShapedRecipe(class ShapedRecipe const &) = delete;
    ShapedRecipe() = delete;
#endif

public:
    /*0*/ virtual ~ShapedRecipe();
    /*1*/ virtual std::vector<class ItemInstance> const & assemble(class CraftingContainer &) const;
    /*2*/ virtual int getCraftingSize() const;
    /*3*/ virtual class RecipeIngredient const & getIngredient(int, int) const;
    /*4*/ virtual std::vector<class ItemInstance> const & getResultItem() const;
    /*5*/ virtual bool isShapeless() const;
    /*6*/ virtual bool matches(class CraftingContainer &, class Level &) const;
    /*7*/ virtual int size() const;
    /*10*/ virtual bool isMultiRecipe() const;
    /*15*/ virtual void loadResultList(class BlockPalette const &) const;
    /*
    inline  ~ShapedRecipe(){
         (ShapedRecipe::*rv)();
        *((void**)&rv) = dlsym("??1ShapedRecipe@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI ShapedRecipe(class gsl::basic_string_span<char const, -1>, int, int, std::vector<class RecipeIngredient> const &, std::vector<class ItemInstance> const &, class HashedString, int, class mce::UUID const *);
    MCAPI void generateUUID();

protected:

private:
    MCAPI bool matches(class CraftingContainer &, int, int, bool) const;

};
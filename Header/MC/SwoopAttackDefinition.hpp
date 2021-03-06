// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SwoopAttackDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SWOOPATTACKDEFINITION
public:
    class SwoopAttackDefinition& operator=(class SwoopAttackDefinition const &) = delete;
    SwoopAttackDefinition(class SwoopAttackDefinition const &) = delete;
#endif

public:
    /*0*/ virtual ~SwoopAttackDefinition();
    MCAPI SwoopAttackDefinition();
    MCAPI void initialize(class EntityContext &, class SwoopAttackGoal &);
    MCAPI static void buildSchema(std::string const &, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class SwoopAttackDefinition>> &);

protected:

private:

};
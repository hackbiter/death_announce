// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

struct JigsawJunction {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_JIGSAWJUNCTION
public:
    struct JigsawJunction& operator=(struct JigsawJunction const &) = delete;
    JigsawJunction(struct JigsawJunction const &) = delete;
    JigsawJunction() = delete;
#endif

public:
    MCAPI JigsawJunction(int, int, int, int, enum Projection, enum Projection);
    MCAPI int getDeltaTargetY() const;

protected:

private:

};
// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class OnScreenTextureAnimationPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ONSCREENTEXTUREANIMATIONPACKET
public:
    class OnScreenTextureAnimationPacket& operator=(class OnScreenTextureAnimationPacket const &) = delete;
    OnScreenTextureAnimationPacket(class OnScreenTextureAnimationPacket const &) = delete;
#endif

public:
    /*0*/ virtual ~OnScreenTextureAnimationPacket();
    /*1*/ virtual enum MinecraftPacketIds getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream &) const;
    /*6*/ virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /*
    inline  ~OnScreenTextureAnimationPacket(){
         (OnScreenTextureAnimationPacket::*rv)();
        *((void**)&rv) = dlsym("??1OnScreenTextureAnimationPacket@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI OnScreenTextureAnimationPacket(unsigned int);
    MCAPI OnScreenTextureAnimationPacket();

protected:

private:

};
// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class FakeThermalMonitorInterface {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FAKETHERMALMONITORINTERFACE
public:
    class FakeThermalMonitorInterface& operator=(class FakeThermalMonitorInterface const &) = delete;
    FakeThermalMonitorInterface(class FakeThermalMonitorInterface const &) = delete;
#endif

public:
    /*0*/ virtual ~FakeThermalMonitorInterface();
    /*
    inline bool isLowBatteryModeEnabled() const{
        bool (FakeThermalMonitorInterface::*rv)() const;
        *((void**)&rv) = dlsym("?isLowBatteryModeEnabled@FakeThermalMonitorInterface@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline enum ThermalState getThermalState() const{
        enum ThermalState (FakeThermalMonitorInterface::*rv)() const;
        *((void**)&rv) = dlsym("?getThermalState@FakeThermalMonitorInterface@@UEBA?AW4ThermalState@@XZ");
        return (this->*rv)();
    }
    inline float getThermalValueCelsius() const{
        float (FakeThermalMonitorInterface::*rv)() const;
        *((void**)&rv) = dlsym("?getThermalValueCelsius@FakeThermalMonitorInterface@@UEBAMXZ");
        return (this->*rv)();
    }
    */
    MCAPI FakeThermalMonitorInterface();

protected:

private:

};
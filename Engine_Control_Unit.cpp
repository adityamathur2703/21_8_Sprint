#include "Engine_Control_Unit.h"
std::ostream &operator<<(std::ostream &os, const Engine_Control_Unit &rhs) {
    os << "\n\n_EngineSpeed: " << rhs._EngineSpeed<<"\n"
       << " \n_ThrottlePosition: " << rhs._ThrottlePosition<<"\n"
       << " \n_AirFuelRatio: " << rhs._AirFuelRatio<<"\n\n";
    return os;
}


Engine_Control_Unit::Engine_Control_Unit(int engineSpeed, int throttlePosition, float airFuelRatio)
{
    _EngineSpeed=engineSpeed;
    _ThrottlePosition=throttlePosition;
    _AirFuelRatio=airFuelRatio;
}


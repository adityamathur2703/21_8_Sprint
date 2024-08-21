#ifndef ENGINE_CONTROL_UNIT_H
#define ENGINE_CONTROL_UNIT_H
#include <ostream>
#include<iostream>

    class Engine_Control_Unit
    {
    private:
        int _EngineSpeed;
        int _ThrottlePosition;
        float _AirFuelRatio;
    public:
        Engine_Control_Unit() = default;
        Engine_Control_Unit(const Engine_Control_Unit & ) = delete;    // disabled copy constructor 
        Engine_Control_Unit(Engine_Control_Unit &&) = delete; // disabled move constructor (modern cpp)
        Engine_Control_Unit &operator=(const Engine_Control_Unit &) = delete;  //= operator is disabled to avoid copying,deleted copy assignment operator
        Engine_Control_Unit &operator=(const Engine_Control_Unit &&) = delete; // to avoid copy pasting,deleted move assignment operator(modern cpp)
        ~Engine_Control_Unit() = default;    // destructor enabled
        Engine_Control_Unit(int engineSpeed,int throttlePosition,float airFuelRatio);
        
        int engineSpeed() const { return _EngineSpeed; }
        void setEngineSpeed(int EngineSpeed) { _EngineSpeed = EngineSpeed; }

        int throttlePosition() const { return _ThrottlePosition; }
        void setThrottlePosition(int ThrottlePosition) { _ThrottlePosition = ThrottlePosition; }

        float airFuelRatio() const { return _AirFuelRatio; }
        void setAirFuelRatio(float AirFuelRatio) { _AirFuelRatio = AirFuelRatio; }

        friend std::ostream &operator<<(std::ostream &os, const Engine_Control_Unit &rhs);
    };

#endif // ENGINE_CONTROL_UNIT_H

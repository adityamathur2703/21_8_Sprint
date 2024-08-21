#include "DataInitialized.h"
DataContainer initalized(){


DataContainer data;
    int engine_speed;
    int throttlePosition;
    float airFuelRatio;\
    std::cout<<"\nEnter Engine Speed:(RPM) \n";
    std::cin>>engine_speed;
    std::cout<<"\nEnter Throttle Position:(Degree)\n";
    std::cin>>throttlePosition;
    std::cout<<"\nEnter Air Fuel Ratio:(1-0)\n";
    std::cin>>airFuelRatio;
    data.push_back(std::make_shared<Engine_Control_Unit>(engine_speed,throttlePosition,airFuelRatio));
    return data;
}

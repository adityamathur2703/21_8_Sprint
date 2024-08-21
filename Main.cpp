#include<iostream>
#include "Functionalities.h"
#include "DataInitialized.h"

int main(void)
{
    DataContainer data = initalized();
    Display(data);
    std::cout<<"Fuel Injection Duration is`: "<<CalculateFuelInjectionDuration(data)<<"\n";
    std::cout<<"Ignition Timimg are: "<<getIgnitionTiming(data)<<"\n";
    std::cout<<"Engine Safe Status "<<MonitorEngineSpeed(data)<<"\n";
}
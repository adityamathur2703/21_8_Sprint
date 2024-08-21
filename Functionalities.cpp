#include "Functionalities.h"
#include<iostream>
#include<map>
#include<algorithm>
#include<numeric>
#include "DataInitialized.h"

void Display( const DataContainer &data)
{
    std::cout<<"Data Entered by You:\n";
    for(auto i:data){
    
        std::cout<<*i;
    }
}



float CalculateFuelInjectionDuration(const DataContainer& data) {
    float totalFuelInjectionDuration = std::accumulate(
        data.begin(), 
        data.end(), 
        0.0, // Initial value
        [](float sum,  const auto& i) {
             return sum + i->engineSpeed() / 100 * i->throttlePosition() / 10 * i->airFuelRatio();
        }
    );

    return totalFuelInjectionDuration; 
}


int getIgnitionTiming(const DataContainer& data) {
static const std::map<int, ThrottleData> throttleMap = {
    {1000, {10, 12, 15, 18, 20}},
    {1500, {12, 15, 18, 22, 25}},
    {2000, {15, 18, 22, 25, 28}},
    {2500, {18, 22, 25, 28, 30}},
    {3000, {20, 25, 28, 30, 32}}
};
    int ignitionTiming = -1; // Default value indicating invalid input
int engineRPM;
int throttlePosition;
for(auto i:data){
    engineRPM=i->engineSpeed();
    throttlePosition=i->throttlePosition();
}
    // Check if engineRPM exists in the map
    auto rpmIter = throttleMap.find(engineRPM);
    if (rpmIter != throttleMap.end()) {
        const ThrottleData& data1 = rpmIter->second;

        // Determine ignition timing based on throttle position
        switch (throttlePosition) {
            case 0:
                ignitionTiming = data1.pos0;
                break;
            case 1:
                ignitionTiming = data1.pos1;
                break;
            case 2:
                ignitionTiming = data1.pos2;
                break;
            case 3:
                ignitionTiming = data1.pos3;
                break;
            case 4:
                ignitionTiming = data1.pos4;
                break;
            default:
                std::cerr << "Error: Invalid Throttle Position. Valid positions are 0 to 4." << std::endl;
                break;
        }
    } else {
        std::cerr << "Error: Invalid Engine RPM. Valid RPMs are 1000, 1500, 2000, 2500, 3000." << std::endl;
    }

    return ignitionTiming;
}
bool MonitorEngineSpeed(const DataContainer &data)
{
    bool status=true;
    

        if(std::any_of(data.begin(),data.end(),[](std::shared_ptr<Engine_Control_Unit>i){return i->engineSpeed()>6000; })){
            status=false;
        };
        
    
    return status;
}

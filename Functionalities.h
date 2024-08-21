#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include "Engine_Control_Unit.h"
#include<iostream>
#include<vector>
#include<memory>

using DataContainer=std::vector<std::shared_ptr<Engine_Control_Unit>>;
void CreateObject( DataContainer &data);
void Display(const DataContainer& data);
float CalculateFuelInjectionDuration(const DataContainer& data );
struct ThrottleData {
    int pos0;
    int pos1;
    int pos2;
    int pos3;
    int pos4;
};

int getIgnitionTiming(const DataContainer& data);
bool MonitorEngineSpeed(const DataContainer& data);

#endif // FUNCTIONALITIES_H

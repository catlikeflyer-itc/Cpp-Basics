#include<string>
#include"Microcomputadora.h"
#include"AtributosComunes.h"

using namespace std;

#pragma once
class AutoElectrico : public Auto
{
protected:
    MotorElectrico variableMotorElectrico;

public:
    AutoElectrico();
    AutoElectrico(string);

    void setMotorElectrico(MotorElectrico elMotorElectrico);
    MotorElectrico getMotorElectrico();
};
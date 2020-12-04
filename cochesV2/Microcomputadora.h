#include"Dispositivos.h"

using namespace std;

#pragma once
class MotorElectrico : public Motor
{
protected:
    int pilas;

public:
    MotorElectrico();
    MotorElectrico(int lasPilas);

    void setMotorElectrico(int lasPilas);
    int getMotorElectrico();
};
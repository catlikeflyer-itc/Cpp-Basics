#include"motor.h"

#pragma once
class MotorElectrico : public Motor
{
protected:
    int pilas;

public:
    MotorElectrico();
    MotorElectrico(int lasPilas, int laPotencia);

    void setPilas(int lasPilas);
    int getPilas();
};
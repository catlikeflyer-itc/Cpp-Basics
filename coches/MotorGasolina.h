#include"motor.h"

#pragma once
class MotorGasolina : public Motor
{
protected:
    int cilindros;

public:
    MotorGasolina();
    MotorGasolina(int cilindros, int laPotencia);

    void setCilindros(int losCilindros);
    int getCilindros();
};
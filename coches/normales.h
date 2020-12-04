#include<string>
#include"auto.h"
#include"MotorGasolina.h"

using namespace std;

#pragma once

class AutoNormal : public Auto
{
protected:
    MotorGasolina gasMotor;

public:
    AutoNormal();
    AutoNormal(string laMarca, string elNombre, int elModelo, int laVelocidadMaxima, MotorGasolina elGasMotor);

    void setMotorGasolina(int losCilindros, int laPotencia);
    MotorGasolina getMotorGasolina();
};

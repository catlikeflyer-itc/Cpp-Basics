#include"auto.h"
#include"MotorGasolina.h"

#pragma once

class AutoNormal : public Auto
{
protected:
    MotorGasolina gasMotor;

public:
    AutoNormal();
    AutoNormal(string laMarca, string elNombre, int elModelo, int laVelocidadMaxima, int losCilindros, int laPotencia);

    void setMotorGasolina(int losCilindros, int laPotencia);
    MotorGasolina getMotorGasolina();
};

#include"auto.h"
#include"MotorElectrico.h"

#pragma once

class AutoElectrico : public Auto
{
protected:
    MotorElectrico eMotor;

public:
    AutoElectrico();
    AutoElectrico(string laMarca, string elNombre, int elModelo, int laVelocidadMaxima, int lasPilas, int laPotencia);

    void setMotorElectrico(MotorElectrico elEMotor);
    MotorElectrico getMotorElectrico();
};

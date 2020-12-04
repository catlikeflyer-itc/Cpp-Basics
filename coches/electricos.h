#include<string>
#include"auto.h"
#include"MotorElectrico.h"

using namespace std;

#pragma once

class AutoElectrico : public Auto
{
protected:
    MotorElectrico eMotor;

public:
    AutoElectrico();
    AutoElectrico(string laMarca, string elNombre, int elModelo, int laVelocidadMaxima, MotorElectrico elEMotor);

    void setMotorElectrico(MotorElectrico elEMotor);
    MotorElectrico getMotorElectrico();
};

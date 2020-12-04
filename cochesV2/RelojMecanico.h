#include"Maquinaria.h"
#include"AtributosComunes.h"

#pragma once
class AutoNormal : public Auto
{
protected:  //privado para el mundo, pero público para sus hijos
    MotorGas variableMotorGas;

public:
    AutoNormal();
    void setMotorGas(MotorGas elMotorGas);
    MotorGas getMotorGas();
};
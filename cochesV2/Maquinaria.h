#include"Dispositivos.h"

#pragma once
class MotorGas :  public Motor
{
protected:
    int cilindros;

public:
    MotorGas();
    MotorGas(int losCilindros);

    void setCilindros(int losCilindros);
};
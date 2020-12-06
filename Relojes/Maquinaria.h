#include"AtributosComunes.h"
#include"Dispositivos.h"

#pragma once
class Maquinaria : public AtributosComunes, public Dispositivos
{
protected:
    int torque;

public:
    Maquinaria();
    Maquinaria(int torque);

    void setTorque(int elTorque);
    int getTorque();
};
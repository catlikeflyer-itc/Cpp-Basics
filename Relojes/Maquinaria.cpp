#include"Maquinaria.h"

Maquinaria::Maquinaria()
{
    torque = 50;
}
Maquinaria::Maquinaria(int elTorque)
{
    torque = elTorque;
}

void Maquinaria::setTorque(int elTorque)
{
    torque = elTorque;
}
int Maquinaria::getTorque()
{
    return torque;
}
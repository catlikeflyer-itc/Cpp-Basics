#include"motor.h"

Motor::Motor()
{
    potencia = 200;
};
Motor::Motor(int laPotencia)
{
    potencia = laPotencia;
};

void Motor::setPotencia(int laPotencia)
{
    potencia = laPotencia;
};
int Motor::getPotencia()
{
    return potencia;
};
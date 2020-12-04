#include"MotorElectrico.h"

MotorElectrico::MotorElectrico()
{
    pilas = 4;
    potencia = 200;
};
MotorElectrico::MotorElectrico(int lasPilas, int laPotencia)
{
    pilas = lasPilas;
    potencia = laPotencia;
};

void MotorElectrico::setPilas(int lasPilas)
{
    pilas = lasPilas;
};
int MotorElectrico::getPilas()
{
    return pilas;
};
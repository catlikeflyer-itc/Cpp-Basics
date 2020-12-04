#include"MotorGasolina.h"

MotorGasolina::MotorGasolina()
{
    cilindros = 4;
    potencia = 200;
};
MotorGasolina::MotorGasolina(int losCilindros, int laPotencia)
{
    cilindros = losCilindros;
    potencia = laPotencia;
};

void MotorGasolina::setCilindros(int losCilindros)
{
    cilindros = losCilindros;
};
int MotorGasolina::getCilindros()
{
    return cilindros;
};
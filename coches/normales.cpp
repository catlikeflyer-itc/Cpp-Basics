#include"normales.h"

AutoNormal::AutoNormal()
{   
    gasMotor = MotorGasolina();
};
AutoNormal::AutoNormal(string laMarca, string elNombre, int elModelo, int laVelocidadMaxima, int losCilindros, int laPotencia)
{
    marca = laMarca;
    nombre = elNombre;
    modelo = elModelo;
    velocidadMaxima = laVelocidadMaxima;
    gasMotor = MotorGasolina(losCilindros, laPotencia);
};

void AutoNormal::setMotorGasolina(int losCilindros, int laPotencia)
{
    gasMotor = MotorGasolina(losCilindros, laPotencia);
};

MotorGasolina AutoNormal::getMotorGasolina()
{
    return gasMotor;
};

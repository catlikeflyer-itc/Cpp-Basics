#include"normales.h"
#include"MotorGasolina.h"

AutoNormal::AutoNormal()
{   
    MotorGasolina gasMotor(1,);
};
AutoNormal::AutoNormal(string laMarca, string elNombre, int elModelo, int laVelocidadMaxima, MotorGasolina elGasMotor)
{
    marca = laMarca;
    nombre = elNombre;
    modelo = elModelo;
    velocidadMaxima = laVelocidadMaxima;
    gasMotor = elGasMotor;
};

void AutoNormal::setMotorGasolina(int losCilindros, int laPotencia)
{
    gasMotor = MotorGasolina(losCilindros, laPotencia);
};

MotorGasolina AutoNormal::getMotorGasolina()
{
    return gasMotor;
};

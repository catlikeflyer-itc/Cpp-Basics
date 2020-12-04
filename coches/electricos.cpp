#include"electricos.h"

AutoElectrico::AutoElectrico()
{
    eMotor = MotorElectrico();
};
AutoElectrico::AutoElectrico(string laMarca, string elNombre, int elModelo, int laVelocidadMaxima, int lasPilas, int laPotencia)
{
    marca = laMarca;
    nombre = elNombre;
    modelo = elModelo;
    velocidadMaxima = laVelocidadMaxima;
    eMotor = MotorElectrico(lasPilas, laPotencia);
};

void AutoElectrico::setMotorElectrico(MotorElectrico elEmotor)
{
    eMotor = elEmotor;
};

MotorElectrico AutoElectrico::getMotorElectrico()
{
    return eMotor;
};

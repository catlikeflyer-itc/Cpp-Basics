#include"electricos.h"
#include"MotorElectrico.h"

AutoElectrico::AutoElectrico()
{
    MotorElectrico eMotor(1,1);
};
AutoElectrico::AutoElectrico(string laMarca, string elNombre, int elModelo, int laVelocidadMaxima, MotorElectrico elEMotor)
{
    marca = laMarca;
    nombre = elNombre;
    modelo = elModelo;
    velocidadMaxima = laVelocidadMaxima;
    eMotor = elEMotor;
};

void AutoElectrico::setMotorElectrico(MotorElectrico elEmotor)
{
    eMotor = elEmotor;
};

MotorElectrico AutoElectrico::getMotorElectrico()
{
    return eMotor;
};

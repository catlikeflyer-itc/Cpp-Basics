#include"auto.h"

void Auto::setMarca(string laMarca)
{
    marca = laMarca;
};
void Auto::setNombre(string elNombre)
{
    nombre = elNombre;

};
void Auto::setModelo(int elModelo)
{
    modelo = elModelo;
};
void Auto::setVelocidadMaxima(int laVelocidadMaxima)
{
    velocidadMaxima = laVelocidadMaxima;
};

string Auto::getMarca()
{
    return marca;
};
string Auto::getNombre()
{
    return nombre;
};
int Auto::getModelo()
{
    return modelo;
};
int Auto::getVelocidadMaxima()
{
    return velocidadMaxima;
};
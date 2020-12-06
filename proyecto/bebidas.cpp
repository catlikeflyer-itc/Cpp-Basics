#include"bebidas.h"

Bebida::Bebida()
{
    nombre = "Agua";
    precio = 10.99;
    cantidad = 1;
    volumen = 500;
    sabor = "Nada";
}
Bebida::Bebida(string elNombre, float elPrecio, int laCantidad, int elVolumen, string elSabor)
{
    nombre = elNombre;
    precio = elPrecio;
    cantidad = laCantidad;
    volumen = elVolumen;
    sabor = elSabor;
}

void Bebida::setVolumen(int elVolumen)
{
    volumen = elVolumen;
}
void Bebida::setSabor(string elSabor)
{
    sabor = elSabor;
}

int Bebida::getVolumen()
{
    return volumen;
}
string Bebida::getSabor()
{
    return sabor;
}

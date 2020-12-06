#include"alcoholicas.h"

Alcohol::Alcohol()
{
    nombre = "Cerveza";
    precio = 20.99;
    cantidad = 1;
    volumen = 500;
    sabor = "Cebada";
    grados = 5;
}
Alcohol::Alcohol(string elNombre, float elPrecio, int laCantidad, int elVolumen, string elSabor, int elGrado)
{
    nombre = elNombre;
    precio = elPrecio;
    cantidad = laCantidad;
    volumen = elVolumen;
    sabor = elSabor;
    grados = elGrado;
}

void Alcohol::setGrados(int elGrado)
{
    grados = elGrado;
}

int Alcohol::getGrados()
{
    return grados;
}


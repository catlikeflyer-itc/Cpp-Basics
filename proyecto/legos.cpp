#include"legos.h"

Lego::Lego()
{
    nombre = "Mini X-Wing";
    precio = 399.9;
    cantidad = 1;
    edad = 12;
    color = "Naranja";
    piezas = 300;
    coleccion = "Star Wars";
}  
Lego::Lego(string elNombre, int elPrecio, int laCantidad, int laEdad, string elColor, int lasPiezas, string laColeccion)
{
    nombre = elNombre;
    precio = elPrecio;
    cantidad = laCantidad;
    edad = laEdad;
    color = elColor;
    piezas = lasPiezas;
    coleccion = laColeccion;
}  

void Lego::setPiezas(int lasPiezas)
{
    piezas = lasPiezas;
}
void Lego::setColeccion(string laColeccion)
{
    coleccion = laColeccion;
}

int Lego::getPiezas()
{
    return piezas;
}
string Lego::getColeccion()
{
    return coleccion;
}

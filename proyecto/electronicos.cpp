#include"electronicos.h"

Electronico::Electronico()
{
    nombre = "Computadora i5";
    precio = 10999.99;
    cantidad = 1;
    marca = "Generica";
    resolucion = 1080;
    tamanio = 14;
}  
Electronico::Electronico(string elNombre, float elPrecio, int laCantidad, string laMarca, int laResolucion, float elTamanio)
{
    nombre = elNombre;
    precio = elPrecio;
    cantidad = laCantidad;
    marca = laMarca;
    resolucion = laResolucion;
    tamanio = elTamanio;
}  

void Electronico::setMarca(string laMarca)
{
    marca = laMarca;
}
void Electronico::setResolucion(int laResolucion)
{
    resolucion = laResolucion;
}
void Electronico::setTamanio(float elTamanio)
{
    tamanio = elTamanio;
}

string Electronico::getMarca()
{
    return marca;
}
int Electronico::getResolucion()
{
    return resolucion;
}
float Electronico::getTamanio()
{
    return tamanio;
}
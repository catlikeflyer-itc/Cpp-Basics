#include"celulares.h"

Celular::Celular()
{
    nombre = "Galaxy S20";
    precio = 19999.99;
    cantidad = 1;
    marca = "Samsung";
    resolucion = 1080;
    tamanio = 6.1;
    resolucionCamara = 18;
}  
Celular::Celular(string elNombre, float elPrecio, int laCantidad, string laMarca, int laResolucion, float elTamanio, int laResolucionCamara)
{
    nombre = elNombre;
    precio = elPrecio;
    cantidad = laCantidad;
    marca = laMarca;
    resolucion = laResolucion;
    tamanio = elTamanio;
    resolucionCamara = laResolucionCamara;
}  

void Celular::setResolucionCamara(int laResolucionCamara)
{
    resolucionCamara = laResolucionCamara;
}

int Celular::getResolucionCamara()
{
    return resolucionCamara;
}
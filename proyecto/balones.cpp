#include"balones.h"

Balon::Balon()
{
    nombre = "Balon de Fut";
    precio = 120.0;
    cantidad = 1;
    edad = 5;
    color = "Blanco";
    deporte = "Futbol";
    tamanioBalon = 5;
}  
Balon::Balon(string elNombre, int elPrecio, int laCantidad, int laEdad, string elColor, string elDeporte, int elTamanioBalon)
{
    nombre = elNombre;
    precio = elPrecio;
    cantidad = laCantidad;
    edad = laEdad;
    color = elColor;
    deporte = elDeporte;
    tamanioBalon = elTamanioBalon;
}  

void Balon::setDeporte(string elDeporte)
{
    deporte = elDeporte;
}
void Balon::setTamanioBalon(int elTamanioBalon)
{
    tamanioBalon = elTamanioBalon;
}

string Balon::getDeporte()
{
    return deporte;
}
int Balon::getTamanioBalon()
{
    return tamanioBalon;
}
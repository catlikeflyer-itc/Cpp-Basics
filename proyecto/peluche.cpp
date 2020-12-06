#include"peluche.h"

Peluche::Peluche()
{
    nombre = "Superlomito";
    precio = 399.9;
    cantidad = 1;
    edad = 1;
    color = "Naranja";
    animalP = "Perro";
}  
Peluche::Peluche(string elNombre, int elPrecio, int laCantidad, int laEdad, string elColor, string elAnimalP)
{
    nombre = elNombre;
    precio = elPrecio;
    cantidad = laCantidad;
    edad = laEdad;
    color = elColor;
    animalP = elAnimalP;
}  

void Peluche::setAnimalP(string elAnimalP)
{
    animalP = elAnimalP;
}

string Peluche::getAnimalP()
{
    return animalP;
}

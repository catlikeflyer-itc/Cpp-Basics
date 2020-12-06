#include"carne.h"
#include"fecha.cpp"

Carne::Carne()
{
    nombre = "Rib Eye";
    precio = 399.9;
    cantidad = 1;
    fechaDeCaducidad = Fecha();
    calorias = 290;
    animal = "Vaca";
}
Carne::Carne(string elNombre, float elPrecio, int laCantidad, int lasCalorias, string elAnimal, Fecha laFechaDeCaducidad)
{
    nombre = elNombre;
    precio = elPrecio;
    cantidad = laCantidad;
    fechaDeCaducidad = laFechaDeCaducidad;
    calorias = lasCalorias;
    animal = elAnimal;    
}

void Carne::setAnimal(string elAnimal)
{
    animal = elAnimal;
}

string Carne::getAnimal()
{
    return animal;
}
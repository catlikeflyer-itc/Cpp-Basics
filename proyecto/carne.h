#include"comida.h"
#include<string>
using namespace std;

#pragma once

class Carne : public Comida
{
protected:
    string animal;

public:
    Carne();
    Carne(string elNombre, float elPrecio, int laCantidad, int lasCalorias, string elAnimal, Fecha laFechaDeCaducidad);
    
    void setAnimal(string elAnimal);

    string getAnimal();
};
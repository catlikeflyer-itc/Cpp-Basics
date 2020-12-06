#include"juguetes.h"
#include <string>
using namespace std;

#pragma once

class Peluche : public Juguete
{
protected:
    string animalP;

public: 
    Peluche();
    Peluche(string elNombre, int elPrecio, int laCantidad, int laEdad, string elColor, string elAnimalP);

    void setAnimalP(string elAnimalP);

    string getAnimalP();
};
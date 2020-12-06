#include"juguetes.h"
#include <string>
using namespace std;

#pragma once

class Balon : public Juguete
{
protected:
    string deporte;
    int tamanioBalon;

public:
    Balon();
    Balon(string elNombre, int elPrecio, int laCantidad, int laEdad, string elColor, string elDeporte, int elTamanioBalon);

    void setDeporte(string elDeporte);
    void setTamanioBalon(int elTamanioBalon);

    string getDeporte();
    int getTamanioBalon();
};
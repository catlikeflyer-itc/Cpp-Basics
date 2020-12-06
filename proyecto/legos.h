#include"juguetes.h"
#include <string>
using namespace std;

#pragma once

class Lego : public Juguete
{
protected:
    int piezas;
    string coleccion;

public:
    Lego();
    Lego(string elNombre, int elPrecio, int laCantidad, int laEdad, string elColor, int lasPiezas, string laColeccion);

    void setPiezas(int lasPiezas);
    void setColeccion(string laColeccion);

    int getPiezas();
    string getColeccion();
};
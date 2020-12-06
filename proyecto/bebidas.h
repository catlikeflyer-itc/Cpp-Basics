#include"producto.h"
#include <string>
using namespace std;

#pragma once

class Bebida : public Producto
{
protected:
    int volumen;
    string sabor;

public:
    Bebida();
    Bebida(string elNombre, float elPrecio, int laCantidad, int elVolumen, string elSabor);

    void setVolumen(int elVolumen);
    void setSabor(string elSabor);

    int getVolumen();
    string getSabor();
};
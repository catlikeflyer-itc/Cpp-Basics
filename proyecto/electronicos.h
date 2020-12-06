#include"producto.h"
#include<string>
using namespace std;

#pragma once

class Electronico : public Producto
{
protected:
    string marca;
    int resolucion;
    int tamanio;

public:
    Electronico();
    Electronico(string elNombre, float elPrecio, int laCantidad, string laMarca, int laResolucion, float elTamanio);

    void setMarca(string laMarca);
    void setResolucion(int laResolucion);
    void setTamanio(float elTamanio);

    string getMarca();
    int getResolucion();
    float getTamanio();
};
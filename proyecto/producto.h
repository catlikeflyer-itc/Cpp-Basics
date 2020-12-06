#include<string>
using namespace std;

#pragma once

class Producto
{
protected:
    string nombre;
    float precio;
    int cantidad;
    float precioTotal;

public:
    void setNombre(string elNombre);
    void setPrecio(float elPrecio);
    void setCantidad(int laCantidad);

    string getNombre();
    float getPrecio();
    int getCantidad();
    float getPrecioTotal();
};
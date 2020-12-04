#include<iostream>
using namespace std;

#pragma once
class Producto
{
private:
    float precio;
    int cantidad;

public:
    Producto();
    Producto(double elPrecio, int laCantidad);

    double getPrecio();
    int getCantidad();
};
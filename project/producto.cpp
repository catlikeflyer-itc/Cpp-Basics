  
#include"producto.h"

Producto::Producto()
{
    cout << "Construccion default con valores unitarios";
    precio = 1.0;
    cantidad = 1;
}

Producto::Producto(double elPrecio, int laCantidad)
{
    precio = elPrecio;
    cantidad = laCantidad;
}

double Producto::getPrecio()
{
    return precio;
}
int Producto::getCantidad()
{
    return cantidad;
}

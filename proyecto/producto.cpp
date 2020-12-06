#include"producto.h"

void Producto::setNombre(string elNombre)
{
    nombre = elNombre;
}
void Producto::setPrecio(float elPrecio)
{
    precio = elPrecio;
}
void Producto::setCantidad(int laCantidad)
{
    cantidad = laCantidad;
}

string Producto::getNombre()
{
    return nombre;
}
float Producto::getPrecio()
{
    return precio;
}
int Producto::getCantidad()
{
    return cantidad;
}
float Producto::getPrecioTotal()
{
    return precio*cantidad;
}
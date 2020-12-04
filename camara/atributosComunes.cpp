#include"atributosComunes.h"

void AtributosComunes::setMarca(string lamarca)
{
    marca = lamarca;
}
void AtributosComunes::setModelo(string elmodelo)
{
    modelo = elmodelo;
}
void AtributosComunes::setFechaDeCompra(Fecha lafechaDeCompra)
{
    fechaDeCompra = lafechaDeCompra;
}

string AtributosComunes::getMarca()
{
    return marca;
}
string AtributosComunes::getModelo()
{
    return modelo;
}
Fecha AtributosComunes::getFechaDeCompra()
{
    return fechaDeCompra;
}
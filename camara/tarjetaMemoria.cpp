#include"tarjetaMemoria.h"

TarjetaMemoria::TarjetaMemoria()
{
    marca = "generica";
    modelo = "Sin Modelo";
    tipoTarjeta = "Micro SD";
    capacidad = 8;
    velocidadGb = 1;
    fechaDeCompra = Fecha(1, "enero", 2020);   
}
TarjetaMemoria::TarjetaMemoria(string lamarca, string elmodelo, string eltipoTarjeta, int lacapacidad, int lavelocidadGb, Fecha lafechaDeCompra)
{
    marca = lamarca;
    modelo = elmodelo;
    tipoTarjeta = eltipoTarjeta;
    capacidad = lacapacidad;
    velocidadGb = lavelocidadGb;
    fechaDeCompra = lafechaDeCompra;
}

void TarjetaMemoria::setTipoTarjeta(string eltipoTarjeta)
{
    tipoTarjeta = eltipoTarjeta;
}
void TarjetaMemoria::setCapacidad(int lacapacidad)
{
    capacidad = lacapacidad;
}

string TarjetaMemoria::getTipoTarjeta()
{
    return tipoTarjeta;
}
int TarjetaMemoria::getCapacidad()
{
    return capacidad;
}

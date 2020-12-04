#include"procesadorGrafico.h"

ProcesadorGrafico::ProcesadorGrafico()
{
    marca = "generica";
    modelo = "Sin Modelo";
    tipoGrafica = "video";
    velocidadGb = 1;
    fechaDeCompra = Fecha(1, "enero", 2020);
}
ProcesadorGrafico::ProcesadorGrafico(string lamarca, string elmodelo, string eltipoGrafica, int lavelocidadGb, Fecha lafechaDeCompra)
{
    marca = lamarca;
    modelo = elmodelo;
    tipoGrafica = eltipoGrafica;
    velocidadGb = lavelocidadGb;
    fechaDeCompra = lafechaDeCompra;
}

void ProcesadorGrafico::setTipoGrafica(string eltipoGrafica)
{
    tipoGrafica = eltipoGrafica;
}

string ProcesadorGrafico::getTipoGrafica()
{
    return tipoGrafica;
}
#include"fecha.h"

Fecha::Fecha()
{
    dia = 1;
    mes = 1;
    anio = 2020;
}
Fecha::Fecha(int eldia, int elmes, int elanio)
{
    dia = eldia;
    mes = elmes;
    anio = elanio;
}

void Fecha::setDia(int eldia)
{
    dia = eldia;
}
void Fecha::setMes(int elmes)
{
    mes = elmes;
}
void Fecha::setAnio(int elanio)
{
    anio = elanio;
}

int Fecha::getDia()
{
    return dia;
}
int Fecha::getMes()
{
    return mes;
}
int Fecha::getAnio()
{
    return anio;
}

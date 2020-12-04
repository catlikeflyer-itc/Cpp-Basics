#include"fecha.h"

Fecha::Fecha()
{
    dia = 1;
    mes = "enero";
    anio = 2020;
}
Fecha::Fecha(int eldia, string elmes, int elanio)
{
    dia = eldia;
    mes = elmes;
    anio = elanio;
}

void Fecha::setDia(int eldia)
{
    dia = eldia;
}
void Fecha::setMes(string elmes)
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
string Fecha::getMes()
{
    return mes;
}
int Fecha::getAnio()
{
    return anio;
}

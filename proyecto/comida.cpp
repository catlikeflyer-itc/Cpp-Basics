#include"comida.h"

void Comida::setFechaDeCaducidad(Fecha laFechaDeCaducidad)
{
    fechaDeCaducidad = laFechaDeCaducidad;
}
void Comida::setCalorias(int lasCalorias)
{
    calorias = lasCalorias;
}

Fecha Comida::getFechaDeCaducidad()
{
    return fechaDeCaducidad;
}
int Comida::getCalorias()
{
    return calorias;
}
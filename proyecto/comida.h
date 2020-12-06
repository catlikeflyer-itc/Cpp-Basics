#include"producto.h"
#include"fecha.h"
#include<string>
using namespace std;

#pragma once

class Comida : public Producto
{
protected:
    Fecha fechaDeCaducidad;
    int calorias;

public:
    void setFechaDeCaducidad(Fecha laFechaDeCaducidad);
    void setCalorias(int lasCalorias);

    Fecha getFechaDeCaducidad();
    int getCalorias();
};
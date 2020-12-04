#include<string>
#include"fecha.h"
using namespace std;

#pragma once

class AtributosComunes
{
protected:
    string marca;
    string modelo;
    Fecha fechaDeCompra;

public:
    void setMarca(string lamarca);
    void setModelo(string elmodelo);
    void setFechaDeCompra(Fecha lafechaDeCompra);

    string getMarca();
    string getModelo();
    Fecha getFechaDeCompra();
};

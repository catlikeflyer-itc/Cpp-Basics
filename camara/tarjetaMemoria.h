#include<string>
#include"componentesComunes.h"
#include"atributosComunes.h"
using namespace std;

#pragma once

class TarjetaMemoria : public AtributosComunes, public ComponentesComunes
{
protected:
    string tipoTarjeta;
    int capacidad;

public:
    TarjetaMemoria();
    TarjetaMemoria(string lamarca, string elmodelo, string eltipoTarjeta, int lacapacidad, int lavelocidadGb, Fecha lafechaDeCompra);

    void setTipoTarjeta(string eltipoTarjeta);
    void setCapacidad(int lacapacidad);

    string getTipoTarjeta();
    int getCapacidad();
};
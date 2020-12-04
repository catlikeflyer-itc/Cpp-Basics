#include<string>
#include"componentesComunes.h"
#include"atributosComunes.h"
using namespace std;

#pragma once

class ProcesadorGrafico : public AtributosComunes, public ComponentesComunes
{
protected:
    string tipoGrafica;

public:
    ProcesadorGrafico();
    ProcesadorGrafico(string lamarca, string elmodelo, string eltipoGrafica, int lavelocidadGb, Fecha lafechaDeCompra);

    void setTipoGrafica(string eltipoGrafica);

    string getTipoGrafica();
};
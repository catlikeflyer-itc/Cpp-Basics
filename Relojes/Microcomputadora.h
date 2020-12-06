#include<string>
#include"Dispositivos.h"
#include"AtributosComunes.h"

using namespace std;

#pragma once
class Microcomputadora : public Dispositivos, public AtributosComunes
{
protected:
    string modeloProcesador;

public:
    Microcomputadora();
    Microcomputadora(string modeloProcesador);

    void setModeloProcesador(string elModeloProcesador);
    string getModeloProcesador();
};
#include"Microcomputadora.h"

Microcomputadora::Microcomputadora()
{
    modeloProcesador = "XX23T45";
}
Microcomputadora::Microcomputadora(string elModeloProcesador)
{
    modeloProcesador = elModeloProcesador;
}
void Microcomputadora::setModeloProcesador(string elModeloProcesador)
{
    modeloProcesador = elModeloProcesador;
}
string Microcomputadora::getModeloProcesador()
{
    return modeloProcesador;
}
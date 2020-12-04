#include"RelojMecanico.h"

RelojMecanico::RelojMecanico()
{
    variableMaquinaria = Maquinaria(100); //Aquí se cumple que al crear el reloj se crea la miquinaria
}
void RelojMecanico::setMaquinaria(Maquinaria laMaquinaria)
{
    variableMaquinaria = laMaquinaria;
}
Maquinaria RelojMecanico::getMaquinaria()
{
    return variableMaquinaria;
}
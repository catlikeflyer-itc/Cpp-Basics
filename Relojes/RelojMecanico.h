#include"Maquinaria.h"
#include"PadreDeRelojs.h"
#include"AtributosComunes.h"

#pragma once
class RelojMecanico : public PadreDeRelojs, public AtributosComunes
{
protected:  //privado para el mundo, pero público para sus hijos
    Maquinaria variableMaquinaria;

public:
    RelojMecanico();
    void setMaquinaria(Maquinaria laMaquinaria);
    Maquinaria getMaquinaria();
};
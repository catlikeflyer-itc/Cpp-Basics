#include"Microcomputadora.h"
#include"PadreDeRelojs.h"
#include"AtributosComunes.h"

#pragma once
class Smartwatch : public PadreDeRelojs, public AtributosComunes
{
protected:
    Microcomputadora microcomputadora;

public:
    Smartwatch();
    void setMicrocomputadora(Microcomputadora laMicrocomputadora);
    Microcomputadora getMicrocomputadora();
};
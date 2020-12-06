#include"bebidas.h"

#pragma once

class Alcohol : public Bebida
{
protected:
    int grados;

public:
    Alcohol();
    Alcohol(string elNombre, float elPrecio, int laCantidad, int elVolumen, string elSabor, int elGrado);
    void setGrados(int elGrado);
    
    int getGrados();
};
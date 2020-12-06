#include"electronicos.h"    

#pragma once

class Celular : public Electronico
{
protected:
    int resolucionCamara;

public:
    Celular();
    Celular(string elNombre, float elPrecio, int laCantidad, string laMarca, int laResolucion, float elTamanio, int laResolucionCamara);
    
    void setResolucionCamara(int laResolucionCamara);

    int getResolucionCamara();
};
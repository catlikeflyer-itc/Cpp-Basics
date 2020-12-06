#include"comida.h"
#include<string>
using namespace std;

#pragma once

class Fruta : public Comida
{
protected:
    bool frescura;

public:
    Fruta();
    Fruta(string elNombre, float elPrecio, int laCantidad, int lasCalorias, bool laFrescura, Fecha laFechaDeCaducidad);

    void setFrescura(bool laFrescura);

    bool getFrescura();
};

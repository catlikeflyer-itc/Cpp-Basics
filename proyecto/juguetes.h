#include"producto.h"
#include<string>
using namespace std;

#pragma once

class Juguete : public Producto
{
protected: 
    int edad;
    string color;

public:
    void setEdad(int laEdad);
    void setColor(string elColor);
    
    int getEdad();
    string getColor();
};
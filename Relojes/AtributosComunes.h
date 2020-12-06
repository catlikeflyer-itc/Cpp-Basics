#include<string>
using namespace std;

#pragma once
class AtributosComunes
{
protected:
    string marca;
    string modelo;

public:
    void setMarca(string laMarca);
    void setModelo(string elModelo);
    string getMarca();
    string getModelo();
};
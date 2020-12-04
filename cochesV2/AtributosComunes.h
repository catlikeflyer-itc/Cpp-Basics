#include<string>
using namespace std;

#pragma once
class Auto
{
protected:
    string marca;
    string nombre;
    int modelo;
    int velocidadMaxima;
    
public:
    void setMarca(string laMarca);
    void setNombre(string elNombre);
    void setModelo(int elModelo);
    void setVelocidadMaxima(int laVelocidad);

    string getMarca();
    string getNombre();
    int getModelo();
    int getVelocidadMaxima();
};
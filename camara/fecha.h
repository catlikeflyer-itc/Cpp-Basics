#include<string>
using namespace std;

#pragma once

class Fecha
{
protected:
    int dia;
    string mes;
    int anio;

public:
    Fecha();
    Fecha(int eldia, string elmes, int elanio);

    void setDia(int eldia);
    void setMes(string elmes);
    void setAnio(int elanio);

    int getDia();
    string getMes();
    int getAnio();
};
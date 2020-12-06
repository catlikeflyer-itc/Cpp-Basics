#pragma once

class Fecha
{
protected:
    int dia;
    int mes;
    int anio;
public:
    Fecha();
    Fecha(int elDia, int elMes, int elAnio);

    void setDia(int elDia);
    void setMes(int elMes);
    void setAnio(int elAnio);

    int getDia();
    int getMes();
    int getAnio();
};
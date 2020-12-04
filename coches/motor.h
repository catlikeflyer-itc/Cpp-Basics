#pragma once

class Motor
{
protected:
    int potencia;

public:
    Motor();
    Motor(int laPotencia);
    void setPotencia(int laPotencia);
    int getPotencia();
};

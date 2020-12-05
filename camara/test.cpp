
#include<iostream>
#include"camara.h"
#pragma once

int main()
{
    Fecha fechaComprada;

    Fecha fechaGrabada(22, "marzo", 2020);

    TarjetaMemoria memoria("Sandisk", "A200", "Micro SD", 128, 2, fechaComprada);

    ProcesadorGrafico graficos;

    Camara Nikon("Nikon", "FX-1000", fechaComprada, 550, 108, memoria, graficos, fechaGrabada);

    Nikon.detallesCamara(); 

    return 0;
};

#include"camara.h"

int main()
{
    Camara camaraGenerica;
    camaraGenerica.detallesCamara();
    
    Fecha fechaComprada;
    fechaComprada = Fecha();

    Fecha fechaGrabada;
    fechaGrabada = Fecha(22, "marxo", 2020);

    TarjetaMemoria memoria;
    memoria = TarjetaMemoria("Sandisk", "A200", "Micro SD", 128, 2, fechaComprada);

    ProcesadorGrafico graficos;
    graficos = ProcesadorGrafico();

    Camara Nikon;
    Nikon = Camara("Nikon", "FX-1000", fechaComprada, 550, 108, memoria, graficos, fechaGrabada);

    Nikon.detallesCamara(); 

    return 0;
};
#include"atributosComunes.h"
#include"fecha.h"
#include"tarjetaMemoria.h"
#include"procesadorGrafico.h"

#pragma once

class Camara : public AtributosComunes
{
protected:
    int precio;
    int resolucion;
    TarjetaMemoria tarjetaMemoria;
    ProcesadorGrafico procesadorGrafico;
    Fecha fechaDeVideo;

public:
    Camara();
    Camara(string lamarca, string elmodelo, Fecha lafechaDeCompra, int elprecio, int laresolucion, TarjetaMemoria latarjetaMemoria, ProcesadorGrafico elprocesadorGrafico, Fecha lafechaDeVideo);
    
    void setPrecio(int elprecio);
    void setResolucion(int laresoculcion);
    void setTarjetaMemoria(TarjetaMemoria latarjetaMemoria);
    void setProcesadorGrafico(ProcesadorGrafico elprocesadorGrafico);
    void setFechaDeVideo(Fecha lafechaDeVideo);

    int getPrecio();
    int getResolucion();
    TarjetaMemoria getTarjetaMemoria();
    ProcesadorGrafico getProcesadorGrafico();
    Fecha getFechaDeVideo();

    void detallesCamara();
};
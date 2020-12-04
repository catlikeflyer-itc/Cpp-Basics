#include<iostream>
#include"camara.h"
#include"tarjetaMemoria.h"
#include"procesadorGrafico.h"
#include"fecha.h"

Camara::Camara()
{
    marca = "generica";
    modelo = "Sin Nombre";
    fechaDeCompra = Fecha(1, "enero", 2020);
    precio = 100;
    resolucion = 108;
    tarjetaMemoria = TarjetaMemoria();
    procesadorGrafico = ProcesadorGrafico();
    fechaDeVideo = Fecha(2, "febrero", 2020);
}
Camara::Camara(string lamarca, string elmodelo, Fecha lafechaDeCompra, int elprecio, int laresolucion, TarjetaMemoria latarjetaMemoria, ProcesadorGrafico elprocesadorGrafico, Fecha lafechaDeVideo)
{
    marca = lamarca;
    modelo = elmodelo;
    fechaDeCompra = lafechaDeCompra;
    precio = elprecio;
    resolucion = laresolucion;
    tarjetaMemoria = latarjetaMemoria;
    procesadorGrafico = elprocesadorGrafico;
    fechaDeVideo = lafechaDeVideo;
}

void Camara::setPrecio(int elprecio)
{
    precio = elprecio;
}
void Camara::setResolucion(int laresoculcion)
{
    resolucion = laresoculcion;
}
void Camara::setTarjetaMemoria(TarjetaMemoria latarjetaMemoria)
{
    tarjetaMemoria = latarjetaMemoria;
}
void Camara::setProcesadorGrafico(ProcesadorGrafico elprocesadorGrafico)
{
    procesadorGrafico = elprocesadorGrafico;
}
void Camara::setFechaDeVideo(Fecha lafechaDeVideo)
{
    fechaDeVideo = lafechaDeVideo;
}

int Camara::getPrecio()
{
    return precio;
}
int Camara::getResolucion()
{
    return resolucion;
}
TarjetaMemoria Camara::getTarjetaMemoria()
{
    return tarjetaMemoria;
}
ProcesadorGrafico Camara::getProcesadorGrafico()
{
    return procesadorGrafico;
}
Fecha Camara::getFechaDeVideo(){
    return fechaDeVideo;
}

void Camara::detallesCamara()
{
    std::cout << "El modelo es" << modelo << " hecha por " << marca;
    std::cout << "Su capacidad es de" << tarjetaMemoria.getCapacidad() << "GB";
    std::cout << "Resolucion de" << resolucion << "MP";
    std::cout << "Se compro el mes de " << fechaDeCompra.getMes();
    std::cout << "Tiene un precio de " << precio << "USD"; 
}
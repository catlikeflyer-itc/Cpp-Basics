#include"frutas.h"
#include"fecha.h"

Fruta::Fruta()
{
    nombre = "Superlomito";
    precio = 399.9;
    cantidad = 1;
    fechaDeCaducidad = Fecha();
    calorias = 111;
    frescura = true;

    
}  
Fruta::Fruta(string elNombre, float elPrecio, int laCantidad,  int lasCalorias, bool laFrescura, Fecha laFechaDeCaducidad)
{
    nombre = elNombre;
    precio = elPrecio;
    cantidad = laCantidad;
    fechaDeCaducidad = laFechaDeCaducidad;
    calorias = lasCalorias;
    frescura = laFrescura;
}

void Fruta::setFrescura(bool laFrescura)
{
    frescura = laFrescura;
}

bool Fruta::getFrescura()
{
    return frescura;
}
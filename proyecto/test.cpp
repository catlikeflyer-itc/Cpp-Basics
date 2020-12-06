#include<iostream>
#include"frutas.cpp"
#include"carne.cpp"
#include"comida.cpp"
#include"juguetes.cpp"
#include"legos.cpp"
#include"peluche.cpp"
#include"balones.cpp"
#include"bebidas.cpp"
#include"alcoholicas.cpp"
#include"electronicos.cpp"
#include"celulares.cpp"
#include"fecha.h"
#include"producto.cpp"
using namespace std;

int main()
{
    int cantidad;
    int productNum;
    float total = 0.0;
    bool seguirComprando = true;

    cout << "Bienvenidos a la Tienda DH, pueden seleccionar hasta 10 tipos de productos\n \n";
    Fecha fecha(12, 5, 2020);

    Fruta manzana("Manzana gala", 10.0, 1, 200, false, fecha);
    Carne pollo("Pollo adobado", 209.9, 2, 590,"pollo", fecha);
    Lego xwing;
    Balon spandingNBA("Spanding Silver NBA", 399.0, 2, 12, "naranja", "basketball", 7);
    Bebida topoChico("Agua Mineral Topo Chico", 15.99, 5, 270, "agua mineral");
    Bebida normal;
    Alcohol tecate;
    Electronico msiA10("MSI A10M", 17999.0, 1, "MSI", 1080, 14);
    Celular gs10("Galaxy S10", 21999.0, 1, "Samsung", 1440, 6, 18);
    Electronico lgPantalla("LG Pantalla SG1037 8K", 61265.0, 1, "LG", 4320, 55);

    cout << "Tenemos los siguientes productos:\n \n";
    
    cout << "1." << manzana.getNombre() << ", " << manzana.getPrecio() << "pesos mexicanos, tiene " << manzana.getCalorias() << " calorias.\n";
    cout << "2." << pollo.getNombre() << ", " << pollo.getPrecio() << "pesos mexicanos, es carne de " << pollo.getAnimal() << ".\n";
    cout << "3." << xwing.getNombre() << ", " << xwing.getPrecio() << "pesos mexicanos, de la coleccion de " << xwing.getColeccion() << ".\n";
    cout << "4." << spandingNBA.getNombre() << ", " << spandingNBA.getPrecio() << "pesos mexicanos, tamanio " << spandingNBA.getTamanioBalon() << ".\n";
    cout << "5." << topoChico.getNombre() << ", " << topoChico.getPrecio() << "pesos mexicanos, contiene " << topoChico.getVolumen() << " ml.\n";
    cout << "6." << tecate.getNombre() << ", " << tecate.getPrecio() << "pesos mexicanos, sabor a " << tecate.getSabor() << ".\n";
    cout << "7." << normal.getNombre() << ", " << normal.getPrecio() << "pesos mexicanos.\n";
    cout << "8." << msiA10.getNombre() << ", " << msiA10.getPrecio() << "pesos mexicanos, pantalla de " << msiA10.getTamanio() << " pulgadas.\n";
    cout << "9." << gs10.getNombre() << ", " << gs10.getPrecio() << "pesos mexicanos, con camara de " << gs10.getResolucionCamara() << " MP.\n";
    cout << "10." << lgPantalla.getNombre() << "pesos mexicanos, con una resolucion de " << lgPantalla.getResolucion() << " pixeles.\n\n" ;

    while (seguirComprando)
    {
        cout << "'\nQue productos se va llevar? Presione 0 para finalizar compra: ";
        cin >> productNum;
        cout << "\n";

        if (productNum == 0)
        {
            cout << "Finalizando Compra...";
            seguirComprando = false;
        }
        else
        {
            cout << "Cuantos quiere comprar? ";
            cin >> cantidad;

            switch (productNum)
            {
            case 1: 
                manzana.setCantidad(cantidad);
                total += manzana.getPrecioTotal();
                cout << manzana.getPrecioTotal() << "\n";
                continue;

            case 2: 

                pollo.setCantidad(cantidad);
                total += pollo.getPrecioTotal();
                cout << pollo.getPrecioTotal() << "\n";
                continue;

            case 3: 
                xwing.setCantidad(cantidad);
                total += xwing.getPrecioTotal();
                cout << xwing.getPrecioTotal() << "\n";
                continue;

            case 4: 
                spandingNBA.setCantidad(cantidad);
                total += spandingNBA.getPrecioTotal();
                cout << spandingNBA.getPrecioTotal() << "\n";
                continue;

            case 5: 
                topoChico.setCantidad(cantidad);
                total += topoChico.getPrecioTotal();
                cout << topoChico.getPrecioTotal() << "\n";
                continue;

            case 6: 
                tecate.setCantidad(cantidad);
                total += tecate.getPrecioTotal();
                cout << tecate.getPrecioTotal() << "\n";
                continue;

            case 7: 
                normal.setCantidad(cantidad);
                total += normal.getPrecioTotal();
                cout << normal.getPrecioTotal() << "\n";
                continue;

            case 8: 
                msiA10.setCantidad(cantidad);
                total += msiA10.getPrecioTotal();
                cout << msiA10.getPrecioTotal() << "\n";
                continue;

            case 9: 
                gs10.setCantidad(cantidad);
                total += gs10.getPrecioTotal();
                cout << gs10.getPrecioTotal() << "\n";
                continue;

            case 10: 
                lgPantalla.setCantidad(cantidad);
                total += lgPantalla.getPrecioTotal();
                cout << lgPantalla.getPrecioTotal() << "\n";
                continue;

            default:
                cout << "!!!Producto invalido, intentelo nuevamente!!!\n";
                continue;
            } 
            cout << "\nAgregado a carrito\n\n";
        }

    }
    cout << "Su total es de " << total << " pesos mexicanos.";

    return 0;
}
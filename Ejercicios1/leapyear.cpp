#include <iostream>
using namespace std;

int main()
{
    int anio = 2020;

    if (anio % 4 == 0)
    {
        if (anio % 100 == 0)
        {
            if (anio % 400 == 0)
                cout << anio << " es bisiesto";
            else
                cout << anio << " no es bisiesto";
        }
        else
            cout << anio << " es bisiesto";
    }
    else
        cout << anio << " no es bisiesto";

    return 0;
}
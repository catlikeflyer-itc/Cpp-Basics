#include<iostream>
#include"electricos.h"
#include"normales.h"

using namespace std;

int main()
{
    AutoElectrico eCoche;
    AutoNormal gasCoche;

    AutoElectrico teslaModelY("Tesla", "ModelY", 2020, 300, 4, 300);
    AutoNormal vwBocho("Volkswagen", "Bocho", 1980, 1000, 4, 75);

    cout << vwBocho.getNombre() << "y" << teslaModelY.getNombre();
};
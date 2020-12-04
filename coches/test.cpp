#include<iostream>
#include<string>
#include"electricos.h"
#include"normales.h"

using namespace std;

int main()
{
    AutoElectrico eCoche;
    AutoNormal gasCoche;

    AutoElectrico teslaModelY("Tesla", "ModelY", 2020, 300,);
    AutoNormal vwBocho("Volkswagen", "Bocho", 1980, 1000,);

    cout << vwBocho.getNombre() << "y" << teslaModelY.getNombre();
};
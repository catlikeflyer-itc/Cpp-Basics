#include"Smartwatch.h"

Smartwatch::Smartwatch()
{
    microcomputadora = Microcomputadora("modelo XX21TS");
}
void Smartwatch::setMicrocomputadora(Microcomputadora laMicrocomputadora)
{
    microcomputadora = laMicrocomputadora;
}
Microcomputadora Smartwatch::getMicrocomputadora()
{
    return microcomputadora;
}
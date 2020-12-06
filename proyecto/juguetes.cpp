#include"juguetes.h"

void Juguete::setEdad(int laEdad)
{
    edad = laEdad;
}
void Juguete::setColor(string elColor)
{
    color = elColor;
}

int Juguete::getEdad()
{
    return edad;
}
string Juguete::getColor()
{
    return color;
}
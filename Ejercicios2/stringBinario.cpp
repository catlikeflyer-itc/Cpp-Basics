
#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

bool stringBinario(int* array, int length)
{
    bool fl = true;
    for (int i = 0; i < length; i++)
    {
        if(array[i] == 1 || array[i] == 0)
        {
            continue;
        }
        else
        {
            fl = false;
            break;
        }
        
    }
    return fl;
}

int* separar(int n, int length)
{
    int* digitos = new int[length];
    int factor = 1, i = 0;

    while(n>0)
    {
        digitos[i] = n%10;
        factor *= 10;
        n /= 10;
        i+=1;
    }
    return digitos;
}

int getLargo(int n)
{
    int suma = 0;
    while(n>0)
    {
        n/=10;
        suma+=1;
    }
    return suma;
}

int main()
{
    int num;
    cout << "Cadena binaria: ";
    cin >> num;
    cout << "\n";

    int length = getLargo(num);
    int* digitos = separar(num, length);
    bool fl = stringBinario(digitos, length);
    int suma = 0;
    bool checar = true;

    while (checar)
    {
        if (fl == false)
        {
            cout << "!!Cadena Invalida!!\n";
        }
        else
        {
            for (int i = length; i > 0; i--)
            {
                suma += digitos[i-1]*pow(2,i-1);
            }
            checar = false;
        }
    }
    cout << "En binario es " << suma << "\n";
    return 0;
}
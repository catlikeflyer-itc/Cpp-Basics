#include <iostream>
using namespace std;

bool perfecto(int entero)
{
    int sum = 0;

    for (int i = 1; i < entero; i++)
    {
        int div = entero % i;
        
        if (div == 0)
        {
            sum += i;
        }
    }

    if (sum == entero)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int numero;
    cout << "Ingrese entero: ";
    cin >> numero;

    if (perfecto(numero))
    {
        cout << numero << " es un entero perfecto";
    }
    else
    {
        cout << numero << " no es un entero perfecto";
    }
    
    return 0;
}
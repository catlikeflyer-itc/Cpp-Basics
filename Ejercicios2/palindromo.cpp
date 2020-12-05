#include <iostream>
using namespace std;

int main()
{
    int n, suma, fl, inv;
    suma = 0;

    cout << "Ingresa el numero: ";
    cin >> n;

    fl = n;
    while (n>0)
    {
        inv = n%10;
        suma = (suma*10) + inv;
        n = n/10;
    }

    if (fl == suma)
    {
        cout << "Es palindromo";
    }

    else
    {
        cout << "No es palindromo";
    }
    
    return 0;
}
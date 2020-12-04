#include <iostream>
using namespace std;

void separar(int n) 
{
    while (n>9999) 
    {
        cout << n%10;
        n = n/10;
        }
}

int main () 
{
    int x;
    cout <<"Ingresa un numero de 5 digitos: ";
    cin >> x;
    separar(x);

    return 0;
}

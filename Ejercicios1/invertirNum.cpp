#include <iostream>
using namespace std;

int main() 
{
    int n, nReverso = 0, resto;

    cout << "Ingresa un numero de 6 digitos: ";
    cin >> n;

    while(n != 0) 
    {
        resto = n%10;
        nReverso = nReverso*10 + resto;
        n /= 10;
    }

    cout << "Numero al reves: " << nReverso;

    return 0;
}
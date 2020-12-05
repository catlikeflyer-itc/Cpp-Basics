#include<iostream>
using namespace std;

int main()
{
    int n, entrada, min;

    cout << "\nInserte numero: ";
    cin >> entrada;

    min = entrada;

    for (int i = 1; i < n; i++)
    {
        cout << "\nInserte numero: ";
        cin >> entrada;

        if (entrada < min)
        {
            min = entrada;
        }
    }

    cout << "El numero mas pequenio es: " << min;
    
    return 0;
}


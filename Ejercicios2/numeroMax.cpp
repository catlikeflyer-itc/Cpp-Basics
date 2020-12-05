#include<iostream>
using namespace std;

int main()
{
    int n, entrada, max;
    max = 0;

    for (int i = 0; i < n; i++)
    {
        cout << "\nInserte numero: ";
        cin >> entrada;

        if (entrada > max)
        {
            max = entrada;
        }
    }

    cout << "El numero mas Grande es: " << max;

    return 0;
}


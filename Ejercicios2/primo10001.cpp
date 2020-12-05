#include <iostream>
using namespace std;

int acc = 0;

bool primo(int n) 
{
    bool esPrimo = true;

    for (int i = 2; i < n; i++) 
    {
        if (n % i == 0) 
        {
            esPrimo = false;
        }
    }
    return esPrimo;
}

int main() 
{
    int enesimo;
    enesimo = 100001;

    for(int i = 0 ; i <= enesimo ; i++)
    {
        if(primo(acc))
        {
            if(acc == enesimo){
                cout << "El primo 10,001 es: " << i;
            }
            acc++;
        }
        acc++;
    }

    return 0;
}
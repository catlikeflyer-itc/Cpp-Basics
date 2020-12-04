#include <iostream>
using namespace std;

bool primo(int i)
{
    if (i == 0 || i == 1)
    {
        return false;
    }

    for (int j = 2; j < i; j++){
        if (i % j == 0){
            return false;
        }   
    }
        
    return true;
}

int main()
{
    int count = 0;

    for (int i = 1; i <= 1000000; i++)
    {
        if (primo(i))
        {
            count += 1;
        }
    }

    cout << "Hay " << count << " numeros primos entre 1 y 1000000";

    return 0;
}
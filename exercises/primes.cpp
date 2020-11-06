#include <iostream>
using namespace std;

bool primo(int i)
{
    if (i == 0 || i == 1)
    {
        return false;
    }

    for (int j = 2; j < i; j++){
        if (j % i == 0){
            return false;
        }   
    }
        
    return true;
}

int main()
{
    int count = 0;

    for (int i = 1; i < 1001; i++){
        if (primo(i))
        {
            count++;
        }
    }

    cout << count << " numeros primos";

    return 0;
}
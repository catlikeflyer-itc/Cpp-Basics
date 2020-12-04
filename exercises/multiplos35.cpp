#include <iostream>
using namespace std;

bool multiplo35(int i)
{
    if (i % 3 || i % 5)
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
    int sum = 0;

    for (int i = 0; i <= 1000; i++)
    {
        if (multiplo35(i))
        {
            sum += i;
        }
    }

    cout << "La suma de los multiplos de 3 o 5 entre 0 a 100 son " << sum;

    return 0;
}
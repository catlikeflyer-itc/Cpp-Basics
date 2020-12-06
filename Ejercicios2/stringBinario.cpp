/*Escribe una función que recibe un String de ceros y unos (string binario). La función revisa que el string sólo contenga ceros y unos. 
La función convierte el string binario en un número decimal*/
#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

bool checkBinary(int* array, int length)
{
    bool flag = true;
    for(int i = 0; i < length; i++)
    {
        if(array[i] == 1 || array[i] == 0)
        {
            continue;
        }
        else
        {
            flag = false;
            break;
        }
        
    }
    return flag;
}

int* digitSplit(int num, int length)
{
    int* digits = new int[length];
    int factor = 1, i = 0;
    while(num>0)
    {
        digits[i] = num%10;
        factor *= 10;
        num /= 10;
        i+=1;
    }
    return digits;
}

int getIntLength(int num)
{
    int sum = 0;
    while(num>0)
    {
        num/=10;
        sum+=1;
    }
    return sum;
}

int main()
{
    int num;
    cout << "Ingrese una cadena binaria\n";
    cin >> num;
    cout << "\n";
    int length = getIntLength(num);
    int* digits = digitSplit(num, length);
    bool flag = checkBinary(digits, length);
    int sum = 0;
    if(flag != true)
    {
        cout << "No es una cadena binaria valida\n";
        exit(0);
    }
    else
    {
        for(int i = length; i > 0; i--)
        {
            sum += digits[i-1]*pow(2,i-1);
        }
    }
    cout << "En binario es " << sum << "\n";
    return 0;
}
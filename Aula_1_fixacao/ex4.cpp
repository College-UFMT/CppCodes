/*Escreva um programa que calcule o fatorial de um inteiro positivo
informado pelo teclado*/

#include <iostream>

using namespace std;

long int fact(int N)
{
    if (N >= 1)
        return N*fact(N-1);
    else
        return 1;
}

int main()
{
    int N = 0;

    while (N>=0)
    {
        cout << "\nType a number (N<0 to exit): ";
        cin >> N;
        
        if (N>=0)
            cout << "\nFactorial = " << fact(N) << endl;
    }
    

    return 0;
}
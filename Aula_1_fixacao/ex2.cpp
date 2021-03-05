/*Escreva um programa que exiba a somatória dos N primeiros
números pares.*/

#include <iostream>

using namespace std;

int main()
{
    int N = 0, SUM = 0;

    cout << "Type N's value: ";
    cin >> N;

    for (int i = 0; i <= N; i++)
    {
        if (i % 2 == 0)
            SUM += i;
    }
    
    cout << "\nSUM = " << SUM << endl;

    return 0;
}
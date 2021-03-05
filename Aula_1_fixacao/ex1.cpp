/*Escreva um programa em C++ que leia N números do teclado e
apresente a somatória e a média aritmética dos números digitados*/

#include <iostream>

using namespace std;

int main()
{
    int N = 1, i = 0;
    float SUM = 0, AVERAGE = 0;

    while (N>0)
    {
        cout << "Type a number (N<=0 to exit): ";
        cin >> N;
        if(N>0)
        {
            SUM += N;
            i++;
        }
    }
    AVERAGE = SUM/i;

    cout << "\nSum = "<< SUM << "\n" <<"Average = " << AVERAGE << endl;

    return 0;
}
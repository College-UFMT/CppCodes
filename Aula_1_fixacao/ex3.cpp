/*Escreva um programa que exiba na tela os N primeiros números
quadrados. Exemplo: Para N = 5, imprima 1, 4, 9, 16, 25*/

#include <iostream>

using namespace std;

int main()
{
    int N = 0;

    cout << "Type N's value: ";
    cin >> N;
    cout << "\n";
 
    for (int i = 1; i <= N; i++)
    {
        cout << i*i <<endl;
    }

    return 0;
}
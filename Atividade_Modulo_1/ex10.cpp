/* Escreva uma função de nome incrementa que receba como argumento um inteiro e adicione mais
um ao seu valor. Escreva um programa que imprima a variável passada antes e depois da chamada
da função.
*/

#include <iostream>

using namespace std;

int incrementa(int valor)
{
    return valor + 1;
}

int main()
{
    int valor;
    cin >> valor;

    cout << incrementa(valor);

    return 0;
}
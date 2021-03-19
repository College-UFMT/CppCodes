/* Escreva uma função void que receba dois valores inteiros como parametro e troque-os entre eles.
Escreva um programa que teste a função, exibindo os valores antes e depois de sua chamada.
*/

#include <iostream>

using namespace std;

void changeValues(int N1, int N2)
{
    cout << "\nN1 after = " << N1 << "\nN2 after = " << N2 << endl;
}

int main()
{
    int N1, N2;

    cout << "N1: ";
    cin >> N1;
    cout << "N2: ";
    cin >> N2;
    
    cout << "\nN1 before = " << N1 << "\nN2 before = " << N2 << endl;

    changeValues(N2, N1);
    
    return 0;
}
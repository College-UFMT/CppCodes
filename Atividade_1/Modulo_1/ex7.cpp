/*Crie uma estrutura representando um triangulo, que contenha o tamanho de cada um de seus tres
lados. Crie um programa que leia os tres lados do triangulo de um objeto desta estrutura e informe
se o triangulo é escaleno ou nao
*/

#include <iostream>

using namespace std;

typedef struct triangle
{
    double size[3];
} triangle;

int main()
{
    triangle tri;

    cout << "Enter the triangle's sizes:" << endl;
    for(int i = 0; i <3; i++)
    {
        cin >> tri.size[i];
    }

    if((tri.size[0] != tri.size[1]) && (tri.size[0] != tri.size[2]) && (tri.size[1] != tri.size[2]))
        cout << "\nIt's scalene" << endl;
    else
        cout << "\nIt's not scalene" << endl;

    return 0;
}
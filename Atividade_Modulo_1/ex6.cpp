/*Crie uma estrutura representando um retangulo, que armazene sua altura e largura. Crie uma
função que receba tal estrutura e retorne a área do retangulo passado como parametro
*/
#include <iostream>

using namespace std;

typedef struct retangle
{
    double weight, height;
} retangle;

double getArea(retangle ret)
{
    return (ret.height * ret.weight);
}

int main()
{
    retangle ret;

    cout << "Weight (cm): ";
    cin >> ret.weight;

    cout << "Height (cm): ";
    cin >> ret.height;

    cout << "Retangles' area = " << getArea(ret) << " m^2" << endl;

    return 0;
}

/*
Crie a classe Triangulo, tendo como atributos sua base e altura. Por enquanto, mantenha todo o
conteúdo da classe como public e crie um método calculaArea() que, quando invocado, imprima
na tela a área do triangulo que o invocou. No programa principal, instancie e inicialize com valores
digitados do teclado dois objetos desta classe e invoque o método para ambos.
*/
#include <iostream>

using namespace std;

class Triangulo
{
    public:
        float base, altura;

        void calculaArea()
        {
            cout << "Area = " << (base * altura) / 2 << endl;
        }
};

int main()
{
    Triangulo tri1, tri2;

    cout << "Triangulo 1:" << endl;
    cout << "Base:";
    cin >> tri1.base;
    cout << "Altura:";
    cin >> tri2.altura;

    tri1.calculaArea();

    cout << "\nTriangulo 2:" << endl;
    cout << "Base:";
    cin >> tri2.base;
    cout << "Altura:";
    cin >> tri2.altura;

    tri2.calculaArea();

    return 0;
}

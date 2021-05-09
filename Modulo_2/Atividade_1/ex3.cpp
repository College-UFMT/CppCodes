/*
Crie a classe Empregado que contenha nome e sal´ario. Crie dois m´etodos para ela: aumento(float
porcentagem) que aumente seu sal´ario de acordo com a porcentagem passada no parˆametro e;
mostraDados() que imprime na tela o nome e o sal´ario do funcion´ario. Teste a classe no programa
principal, mostrando os dados do funcion´ario antes e depois de um aumento concedido
*/

#include <iostream>
#include <string>
using namespace std;

class Empregado
{
public:
    string nome;
    float salario;

    void aumento(float porcentagem)
    {
        salario += salario * porcentagem;
    }

    void mostraDados()
    {
        cout << "\nNome: " << nome << "\nSalario: R$" << salario <<endl;
    }

};

int main()
{
    Empregado emp;

    emp.nome = "Carlos Azevedo";
    emp.salario = 3500.84;

    emp.mostraDados();

    emp.aumento(5.23);

    emp.mostraDados();

    return 0;
}
/*
Reproduza o exemplo trabalhado durante a aula da classe Lampada exatamente como foi feito,
adicionando a ela o m´etodo ehEconomica(). Este m´etodo retornar verdadeiro se a potˆencia da
lampada for menor que 40 e falso, caso contr´ario. Instancie um objeto e teste todos os m´etodos
implementados.
*/

#include <iostream>
#include <string>
using namespace std;

class Lampada
{
    public:
        bool ligada;
        string tipo;
        int voltagem;
        int potencia;

        void ligar() { ligada = true; }

        void desligar() { ligada = false; }

        void status()
        {
            if (ligada)
                cout << "A lampada " << tipo << " esta ligada" << endl;
            else
                cout << "A lampada " << tipo << " esta desligada" << endl;
        }

        bool ehEconomica()
        {
            if (potencia < 40)
                return 1;
            return 0;
        }
};

int main()
{
    Lampada lamp1, lamp2;

    lamp1.tipo = "incadescente";
    lamp1.potencia = 60;
    lamp1.voltagem = 220;

    lamp1.ligar();
    lamp1.status();

    lamp1.desligar();
    lamp1.status();

    if (lamp1.ehEconomica())
        cout << "Eh economica" << endl;
    else
        cout << "Nao eh economica" << endl;
    
    
    lamp2.tipo = "led";
    lamp2.potencia = 37;
    lamp2.voltagem = 110;

    lamp2.ligar();
    lamp2.status();

    if (lamp2.ehEconomica())
        cout << "Eh economica" << endl;
    else
        cout << "Nao eh economica" << endl;

    return 0;
}
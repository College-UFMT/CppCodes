
/*
Crie a classe Partida, tendo como atributos o nome do time mandante, n´umero de gols do time
mandante, pontua¸c˜ao do time mandante, nome do time visitante, n´umero de gols do time visitante e
pontua¸c˜ao do time visitante. Crie um m´etodo resultado(string home, int goalHome, string
visitor, int goalVisitor) que permita definir nome e n´umero de gols dos times; crie um m´etodo
calculaPontos() que define os pontos conquistados pelos times depois do resultado consumado.
Crie tamb´em um m´etodo mostraResultado() que imprima na tela o resultado final como no
formato Visitante 4 x 2 Mandante. Instancie dois objetos desta classe e teste seus m´etodos no programa principal
*/

#include <iostream>
#include <string>

using namespace std;

class Partida
{
public:
    int goalHome, goalVisitor, pointsHome, pointsVisitor;
    string home, visitor;

    void resultado(string home, int goalHome, string visitor, int goalVisitor)
    {
        cout << "\nMandante: ";
        cin >> home;
        cout << "Gols mandante: ";
        cin >> goalHome;
        cout << "\nVisitante: ";
        cin >> visitor;
        cout << "Gols visitante: ";
        cin >> goalVisitor;

        this->home = home;
        this->goalHome = goalHome;
        this->visitor = visitor;
        this->goalVisitor = goalVisitor;
    }

    void calculaPontos()
    {
        if (goalHome > goalVisitor)
        {
            pointsHome = 3;
            pointsVisitor = 0;
        }
        else if (goalHome < goalVisitor)
        {
            pointsVisitor = 3;
            pointsHome = 0;
        }
        else
        {
            pointsHome = 1;
            pointsVisitor = 1;
        }
        cout << "Mandante = " << pointsHome << " pontos\nVisitante = " << pointsVisitor << " pontos" << endl;
    }

    void mostraResultado()
    {
        cout <<"\n"<< visitor << " " << goalVisitor << " x " << goalHome << " " << home << endl;
    }
};

int main()
{
    Partida part1, part2;
    string home, visitor;
    int goalVisitor, goalHome;

    part1.resultado(home, goalHome, visitor, goalVisitor);
    part1.calculaPontos();
    part1.mostraResultado();

    part2.resultado(home, goalHome, visitor, goalVisitor);
    part2.calculaPontos();
    part2.mostraResultado();

    return 0;
}
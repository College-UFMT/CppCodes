/*Escreva uma função para o cálculo da distancia entre dois pontos no plano cartesiano. Os dois
pontos passados na função como argumentos devem ser expressados na forma de uma struct. Crie
um programa que leia as coordenadas x e y do teclado para ambos os pontos e mostre na tela a
distancia resultante.
*/

#include <iostream>
#include <math.h>

using namespace std;


typedef struct coordinates
{
    double x1,x2, y1,y2;
} coordinates;

double getCoordinate(coordinates coord)
{ 
    return sqrt(pow((coord.x2-coord.x1),2) + pow((coord.y2 - coord.y1),2));
}

int main()
{
    coordinates coord;

    cout << "Coordinate 1 (x,y):\n";
    cin >> coord.x1 >> coord.y1;
    
    cout << "Coordinate 2 (x,y):\n";
    cin >> coord.x2 >> coord.y2;

    cout << "Distance = " << getCoordinate(coord) << endl;

    return 0;
}
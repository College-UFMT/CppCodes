/*Escreva uma função que receba um vetor e duas variáveis max e min. A função deve retornar a
posição do vetor do valor máximo e garantir que as variáveis min e max contenham o menor e o
maior valor do vetor, respectivamente. Escreva um programa para testar a função.
*/

#include <iostream>
#include <time.h>

using namespace std;

int size = 20;

int getPostion(int *vet, int min, int max)
{
    int maxPosition;

    for(int i = 0; i < size; i++)
    {
        if(vet[i] < min)
            min = vet[i];

        if(vet[i] > max)
        {
            max = vet[i];
            maxPosition = i;
        }
    }

    cout << "\nMin value = " << min;

    return maxPosition;
}

int main()
{
    int *vet, max = 999, min = -999;

    vet = (int*) malloc(size * sizeof(int));
    srand(time(NULL));

    for(int i = 0; i < size; i++)
    {
        vet[i] = (rand() % (max - min + 1) + min);
        cout << "Vet[" << i << "] = "<< vet[i] << "\n";
    }

    int pos = getPostion(vet,max,min);

    cout << "\nThe max value " << vet[pos] << " is in position = vet[" << pos << "]" << endl;

    return 0;
}
/*
 Escreva um programa que leia uma frase do teclado e a imprima na tela sem espaços
*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string sentence;
    int aux1 = 0, aux2 = 0;

    cout << "Type a sentence: ";
    getline(cin, sentence);

    for(auto c : sentence)
    {
        if(!isspace(c))
        {
            sentence[aux1++] = sentence[aux2];
        }       
        aux2++; 
    }
    sentence = sentence.substr(0,aux1);

    cout << "Final sentence = " << sentence << endl;

    return 0;
}
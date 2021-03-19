/*
 Escreva um programa para ler uma frase do teclado e imprimir na tela a quantidade de palavras
que foram digitadas.
*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string sentence;
    int countW = 0, i = 0;

    cout << "Type a sentence: ";
    getline(cin, sentence);
    if(sentence[sentence.size()-1] != ' ')
        sentence += " ";  

    while(i < sentence.size())
    {
        if(isspace(sentence[i]))
            countW++;
        i++;
    }
    cout << "Number of words = " << countW << endl;    

    return 0;
}
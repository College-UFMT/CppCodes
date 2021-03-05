/*
 Escreva um programa que leia uma strings e gere outra com o conteúdo da primeira invertido
*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str1, str2;
    cout << "String: ";
    cin >> str1;

    for (int c = str1.size()-1; c>=0; c--)
        str2 += str1[c];

    cout << "Inverted string = " << str2 << endl;    

    return 0;
}
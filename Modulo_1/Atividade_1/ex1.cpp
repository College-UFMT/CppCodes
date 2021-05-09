/*
Escreva um programa para ler duas strings e informar qual das duas são maiores ou se são iguais
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str1, str2;

    cout << "String 1: ";
    cin >> str1;
    cout << "String 2: ";
    cin >> str2;

    if (str1.size() > str2.size())
        cout << "String 1 is greater than String 2 (" <<str1.size() <<" characters)" << endl;
    else if(str1.size() < str2.size())
        cout << "String 2 is greater than String 1 (" <<str2.size() <<" characters)" << endl;
    else
        cout << "String 1 and String 2 are equal (" <<str1.size() <<" characters)" << endl;
    
    return 0;
}
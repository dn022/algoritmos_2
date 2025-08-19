// 2. Faça um programa que recebe uma string A e inteiros positivos I e J 
// e mostre o segmento A[I..J].

#include <iostream>
using namespace std;

int main()
{
    string frase;
    int i, j;

    do {
        cout << "Digite uma frase: "; getline(cin,frase);
    }while(frase.empty());

    do {
        cout << "Digite a posição inicial: "; cin>> i; cout<< " e a final:  "; cin>> j;
    }while(i < 1 and i>= j and j>frase.size());

    i--;

    for (; i<j; i++)
        cout << frase[i];
    return 0;
}

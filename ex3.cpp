// 3. Faça um programa que recebe do usuário uma string A e monte uma nova string B
// cujo conteúdo é a string A sem suas vogais. Mostre B ao final. 

#include <iostream>
using namespace std;

int main (){
    char vogais [] = {'A', 'E', 'I', 'O', 'U'};
    string fraseA, fraseB;
    bool achou;

    do {
        cout << "Digite uma frase: "; getline(cin,fraseA);
    }while(fraseA.empty());

    for (unsigned i=0; i<fraseA.size(); i++){ // varre a frase
        achou = false; // porque a verificacao ainda nao foi feita
        for (unsigned j=0; j<5; j++) if (toupper(fraseA[i]) == vogais[j]){ // compara com as vogais
            achou = true;
            break;
        }
    if (not achou)
        fraseB += fraseA[i]; // inclui/concatena se não for vogal
    }
    cout << fraseB;

    return 0;
}
#include<iostream>
#include<stdlib.h>
#include<string.h>
/*Solicitar como entrada um texto e exibir como resultado:
Quantidade de letras
Quantidade de caracteres
Quantidade de vogais
Quantidade de consoantes.*/
using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");
    char p1[100];
    int i,cletra,tchar,cvogais,ccons;
    cletra = cvogais = ccons = 0;
    cout << "Digite Uma Palavra\n";
    cin.getline(p1,100);
    for(i = 0; p1[i] != '\0'; i++){
        if(isalpha(p1[i])){
            cletra = cletra+1;
        }
    }
    tchar = strlen(p1);

    for(i = 0; p1[i] != '\0'; i++){
        if((p1[i] == 'a') || (p1[i] == 'e') || (p1[i] == 'i') || (p1[i] == 'o') || (p1[i] == 'u')){
            cvogais = cvogais+1;
        }
    }
    for(i = 0; p1[i] != '\0'; i++){
        if((p1[i] != ' ') && (p1[i] != 'a') && (p1[i] != 'e') && (p1[i] != 'i') && (p1[i] != 'o') && (p1[i] != 'u')){
            ccons = ccons+1;
        }
    }
    cout << "Quantidade de Letras: " << cletra << endl;
    cout << "Quantidade de Caracteres: " << tchar << endl;
    cout << "Quantidade de Vogais: " << cvogais << endl;
    cout << "Quantidade de Consoantes: " << ccons << endl;
}

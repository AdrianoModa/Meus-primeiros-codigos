#include<iostream>
#include<stdlib.h>
/*Escreva um algoritmo que leia v�rios n�meros e
informe quantos n�meros entre 100 e 200 foram digitados.
Quando o valor 0 (zero) for lido, o algoritmo dever� cessar sua execu��o.*/
using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");
    int i,n,acum;
    acum = 0;
    i = 1;
    while(i > 0){
        cout << "Entre Com Um N�mero Inteiro Qualquer:\n";
        cin >> n;
        if (n != 0) {
            if((n > 100) && (n < 200)){
                acum = acum+1;
            }
        }
            else{
                cout << "Finalizado!\n";
                cout << "Os n�meros digitados no intervalo entre 100 e 200: " << acum << endl;
                i = -1;
            }
    i++;
    }

}


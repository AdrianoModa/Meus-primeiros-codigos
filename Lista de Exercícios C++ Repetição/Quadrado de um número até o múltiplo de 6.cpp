#include<iostream>
#include<stdlib.h>
#include<cmath>
/*Escreva um algoritmo que receba n�meros e imprima o quadrado de cada n�mero
 at� entrar um n�mero m�ltiplo de 6 que dever� ter seu quadrado tamb�m impresso.*/
using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");
    int n,i;
    i = 1;
    while(i > 0){
        cout << "Informe Um N�mero Inteiro Qualquer:\n";
        cin >> n;
        if (n % 6 == 0){
            cout << "Voc� Digitou um m�ltiplo de 6.\n";
            cout << "Finaliza o programa!\n";
            cout << n << "^2 = " << pow(n,2) << endl;
            i = -1;
        }
        else{
            cout << n << "^2 = " << pow(n,2) << endl;
        }
    i++;
    }
    system("pause");
}

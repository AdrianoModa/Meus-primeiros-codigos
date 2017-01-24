#include<iostream>
#include<stdlib.h>
#include<cmath>
/*Escreva um algoritmo que receba números e imprima o quadrado de cada número
 até entrar um número múltiplo de 6 que deverá ter seu quadrado também impresso.*/
using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");
    int n,i;
    i = 1;
    while(i > 0){
        cout << "Informe Um Número Inteiro Qualquer:\n";
        cin >> n;
        if (n % 6 == 0){
            cout << "Você Digitou um múltiplo de 6.\n";
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

#include<iostream>
#include<stdlib.h>
/*Construa um algoritmo para fazer a soma de vários valores inteiros e positivos, fornecidos pelo usuário
através do teclado. O dado que finaliza a seqüência de entrada é o número –1, e este não deve ser considerado.*/
using namespace std;

int main(){

    int n,i,acum,aux;
    i = 1;
    acum = 0;
    setlocale(LC_ALL,"Portuguese");
    while(i >= 1){
        cout << "Entre Com Um Número Inteiro Positivo:\n";
        cin >> n;
        if(n >= 0){
            aux = acum;
            acum += n;
            cout << "Acumulado " << aux << " + " << n << " = " << acum << endl;
        }
        else{
            if(n == -1){
                cout << "Valor -1 digitado" << endl;
                cout << "Programa Finalizado!" << endl;
                i = -1;
            }
                else{
                    cout << "Você Digitou Um Número Negativo..." << endl;
                    cout << "Entre Com Um Número Inteiro Positivo." << endl;
                    i++;
                }
            }
        i++;
        }
        system("pause");
}


#include<iostream>
#include<stdlib.h>
/*Construa um algoritmo para fazer a soma de v�rios valores inteiros e positivos, fornecidos pelo usu�rio
atrav�s do teclado. O dado que finaliza a seq��ncia de entrada � o n�mero �1, e este n�o deve ser considerado.*/
using namespace std;

int main(){

    int n,i,acum,aux;
    i = 1;
    acum = 0;
    setlocale(LC_ALL,"Portuguese");
    while(i >= 1){
        cout << "Entre Com Um N�mero Inteiro Positivo:\n";
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
                    cout << "Voc� Digitou Um N�mero Negativo..." << endl;
                    cout << "Entre Com Um N�mero Inteiro Positivo." << endl;
                    i++;
                }
            }
        i++;
        }
        system("pause");
}


#include<iostream>
#include<stdlib.h>
using namespace std;
/* Solicite como entrada um n�mero inteiro positivo e forne�a como sa�da a
verifica��o se o n�mero � primo ou n�o; se o n�mero � par ou �mpar e quantos divisores
inteiros o n�mero possui.*/
int main(){
    int n,i,vprimo,vdiv; //Declara��o das vari�veis.
    setlocale(LC_ALL,"Portuguese"); //Indica o idioma Portugu�s para o algoritmo interpretar.
    cout << "Informe um n�mero inteiro\n";
    cin >> n;
    i = 1; // inicializei o contador para o while.
    vprimo = 0; // inicializei o acumulador de numeros primos.
    vdiv = 0; // inicializei o acumulador de numeros de divisores.
    while (i <= n){
    	if(n % i == 0){
    		vprimo = vprimo+1;
    		vdiv = vdiv +1;
		}
	i++;
	}
	// Exibir as Sa�das
    if (vprimo == 2){
        cout << "O n�mero " << n << " � Primo!\n";
    }
    else{
        cout << "O n�mero " << n << " n�o � Primo!\n";
    }
    if (n % 2 == 0){
        cout << "O n�mero " << n << " � Par!\n";
    }
    else{
        cout << "O n�mero " << n << " � �mpar!\n";
    }
    cout << n << " Possui " << vdiv << " divisores\n";
}

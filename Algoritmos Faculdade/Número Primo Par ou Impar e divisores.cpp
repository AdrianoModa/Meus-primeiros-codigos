#include<iostream>
#include<stdlib.h>
using namespace std;
/* Solicite como entrada um número inteiro positivo e forneça como saída a
verificação se o número é primo ou não; se o número é par ou ímpar e quantos divisores
inteiros o número possui.*/
int main(){
    int n,i,vprimo,vdiv; //Declaração das variáveis.
    setlocale(LC_ALL,"Portuguese"); //Indica o idioma Português para o algoritmo interpretar.
    cout << "Informe um número inteiro\n";
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
	// Exibir as Saídas
    if (vprimo == 2){
        cout << "O número " << n << " é Primo!\n";
    }
    else{
        cout << "O número " << n << " não é Primo!\n";
    }
    if (n % 2 == 0){
        cout << "O número " << n << " é Par!\n";
    }
    else{
        cout << "O número " << n << " é Ímpar!\n";
    }
    cout << n << " Possui " << vdiv << " divisores\n";
}

#include<iostream>
#include<stdlib.h>
/* Ler um número inteiro (assuma até três dígitos) e imprimir a saída da seguinte forma:
CENTENA = x
DEZENA = x
UNIDADE = x
*/
// Autor: Adriano Moda Unifor ADS.
using namespace std;

int main(){
	
	int c,d,u,num;
	setlocale(LC_ALL,"Portuguese");
	cout << "Entre com um Numero Inteiro de até 3 Digitos:\n";
	cin >> num;
	c = num / 100;
	d = (num / 10) % 10;
	u = num % 10;
	
	cout << "Centena: " << c << endl << "Dezena: " << d << endl << "Unidade: " << u << endl;
	
	system("pause");

}


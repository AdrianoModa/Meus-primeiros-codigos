#include<iostream>
#include<stdlib.h>
#include<iomanip> /*Biblioteca para o "setprecision" linhas 28,31,34,37 e 40. O comando define o numero de casa decimais.
Se o resultado for 4.3658 com o "setprecision" definido para 2 o resultado será 4.36 */
using namespace std;

int main(){

	setlocale(LC_ALL,"Portuguese");
	int idade;
	float massa, altura, imc;
	string nome;
	char sexo;
	
	cout << "Qual é o seu nome?\n";
	getline(cin,nome);
	cout << "Informe sua idade?\n";
	cin >> idade;
	cout << "Qual é o seu sexo?\n";
	cin >> sexo;
	cout << "Informe a sua massa:\n";
	cin >> massa;
	cout << "Informe a sua altura:\n";
	cin >> altura;
	
	imc = massa / (altura*altura);
	
	if ((sexo == 'm' && imc < 19.1) || (sexo == 'f' && imc < 20.7)){
		cout << nome << setprecision(2) << " Seu IMC = " << imc << " Situação: abaixo do peso.\n";
	}
	if ((sexo == 'm') && (imc >= 19.1 && imc < 25.8 ) || (sexo == 'f') && (imc >= 20.7 && imc < 26.4)){
		cout << nome << setprecision(2) << " Seu IMC = " << imc << " Situação: no peso normal.\n";
	}
	if ((sexo == 'm') && (imc >= 25.8 && imc < 27.3 ) || (sexo == 'f') && (imc >= 26.4 && imc < 27.8)){
		cout << nome << setprecision(2) << " Seu IMC = " << imc << " Situação: marginalmente acima do peso.\n";
	}
	if ((sexo == 'm') && (imc >= 27.3 && imc <= 32.3 ) || (sexo == 'f') && (imc >= 27.8 && imc <= 31.1)){
		cout << nome << setprecision(2) << " Seu IMC = " << imc << " Situação: acima do peso ideal.\n";
	}
	if ((sexo == 'm' && imc > 32.3) || (sexo == 'f' && imc > 31.1)){
		cout << nome << setprecision(2) << " Seu IMC = " << imc << " Situação: obeso.\n";
	}
}


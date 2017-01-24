#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	float peso,altura,imc;
	cout << "Informe sua Massa (Peso):\n";
	cin >> peso;
	cout << "Informe sua Altura\n";
	cin >> altura;
	imc = peso / (altura*altura);
	cout << "Seu IMC: " << imc << endl;
	if (imc < 20){
		cout << "Peso Magro\n";
	}
	if ((imc >= 20) && (imc <= 24.9)){
		cout << "Peso Ideal\n";
	}
	if ((imc >= 25) && (imc <= 29.9)){
		cout << "Obesidade Grau 1\n";
	}
	if ((imc >= 30) && (imc <= 40)){
		cout << "Obesidade Grau 2\n";
	}
    if (imc > 40){
	    	cout << "Obesidade Grau 3 (Mórbida)\n";
	}	 
	system("pause");
}

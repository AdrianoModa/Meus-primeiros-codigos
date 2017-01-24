#include<iostream>
#include<stdlib.h>
#include<iomanip>
/*5. Faça um algoritmo que receba o peso de uma pessoa, calcule e mostre:
a) o novo peso se a pessoa engordar 15% sobre o peso digitado;
b) o novo peso se a pessoa emagrecer 20% sobre o peso digitado.*/
using namespace std;

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	float peso,qper,vper;
	cout << "Informe o seu Peso Atual:\n";
	cin >> peso;
	qper = peso * (0.15) + peso;
	vper = peso * (0.20) + peso;
	
	cout << "Seu peso se 15% a mais: " << setprecision(3) << qper << " Kg" << endl;
	cout << "Seu peso se 20% a mais: " << setprecision(3) << vper << " Kg" << endl;
	
	system("pause");
}

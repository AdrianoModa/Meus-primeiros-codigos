#include<iostream>
#include<stdlib.h>
/* Dada uma idade, informar se ela est� compreendida no intervalo de 10 a 18 anos. */
using namespace std;

int main(){
	
	int idade;
	setlocale(LC_ALL,"Portuguese");
	cout << "Informe a sua Idade:\n";
	cin >> idade;
	
	if ((idade >= 10) && (idade <=18)){
		cout << "Esta idade est� entre 10 a 18 anos.\n";
	}
	else {
		cout << "Esta idade N�O est� entre 10 a 18 anos.\n";
	}
	
	system("pause");
}


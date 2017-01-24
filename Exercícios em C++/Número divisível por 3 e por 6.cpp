#include<iostream>
#include<stdlib.h>
/* Dado um número, informar se ele é divisível por 3 e por 6. */
using namespace std;

int main(){
	
	int n;
	setlocale(LC_ALL,"Portuguese");
	cout << "Informe um número inteiro qualquer:\n";
	cin >> n;
	if ((n % 3 == 0) && (n % 6 == 0)){
		cout << "O número " << n << " é divisível por 3 e por 6\n";
	}
	else {
		cout << "O número " << n << " NÂO é divisivel por 3 e por 6\n";
	}
	
	system("pause");
}


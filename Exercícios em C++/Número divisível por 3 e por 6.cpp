#include<iostream>
#include<stdlib.h>
/* Dado um n�mero, informar se ele � divis�vel por 3 e por 6. */
using namespace std;

int main(){
	
	int n;
	setlocale(LC_ALL,"Portuguese");
	cout << "Informe um n�mero inteiro qualquer:\n";
	cin >> n;
	if ((n % 3 == 0) && (n % 6 == 0)){
		cout << "O n�mero " << n << " � divis�vel por 3 e por 6\n";
	}
	else {
		cout << "O n�mero " << n << " N�O � divisivel por 3 e por 6\n";
	}
	
	system("pause");
}


#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	
	int d,divisor,q;
	
	cout << "Informe um Dividendo:\n";
	cin >> d; // ler o dividendo
	cout << "Informe um Divisor:\n";
	cin >> divisor;
	q = (d / divisor);
	
	cout << "O Dividendo: " << d << endl << "O Divisor: " << divisor << endl << "O Quociente: " << q << endl << "O Resto: " << d % divisor << endl;
	
	system("pause");
}

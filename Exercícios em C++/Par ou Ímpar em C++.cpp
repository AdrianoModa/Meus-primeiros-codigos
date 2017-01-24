#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	int n;
	setlocale(LC_ALL,"Portuguese");
    cout << "Entre com um número qualquer\n";
    cin >> n;
    if (n % 2 == 0){
    	cout << "O numero " << n << " é Par!\n";
	}
	else{
		cout << "O numero " << n << " é Ímpar!\n";
	}
}


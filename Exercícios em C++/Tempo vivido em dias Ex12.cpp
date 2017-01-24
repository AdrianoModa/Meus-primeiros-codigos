#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	
	int idade;
	string nome;
	setlocale(LC_ALL,"Portuguese");
	cout << "Qual o seu nome?\n";
	getline(cin,nome);
	
	cout << "Qual sua idade?\n";
	cin >> idade;
	
	idade *= 365;
	
	cout << nome << ", você já viveu " << idade << " dias\n";
	
	system("pause");

}


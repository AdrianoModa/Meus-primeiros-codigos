#include<iostream>
#include<stdlib.h>
/* Dadas 3 pontuações de finalistas em um campeonato, informe qual a pontuação
 que ficou em primeiro, segundo e terceiro lugar. */
using namespace std;

int main(){
	
	int A,B,C;
	setlocale(LC_ALL,"Portuguese");
	cout << "Informe a pontuação:\n";
	cout << "Equipe A: \n"; cin >> A;
	cout << "Equipe B: \n"; cin >> B;
	cout << "Equipe C: \n"; cin >> C;
	
	if ((A > B) && (B > C)){
		cout << "Equipe A em 1 Lugar: " << A << endl << "Equipe B em 2 Lugar: " << B << endl << "Equipe C em 3 Lugar: " << C << endl;		
	}
	if ((A > C) && (C > B)){
		cout << "Equipe A em 1 Lugar: " << A << endl << "Equipe C em 2 Lugar: " << C << endl << "Equipe B em 3 Lugar: " << B << endl;		
	}
	if ((B > A) && (A > C)){
		cout << "Equipe B em 1 Lugar: " << B << endl << "Equipe A em 2 Lugar: " << A << endl << "Equipe C em 3 Lugar: " << C << endl;		
	}
	if ((B > C) && (C > A)){
		cout << "Equipe B em 1 Lugar: " << B << endl << "Equipe C em 2 Lugar: " << C << endl << "Equipe A em 3 Lugar: " << A << endl;		
	}
	if ((C > A) && (A > B)){
		cout << "Equipe C em 1 Lugar: " << C << endl << "Equipe A em 2 Lugar: " << A << endl << "Equipe B em 3 Lugar: " << B << endl;		
	}
	if ((C > B) && (B > A)){
		cout << "Equipe C em 1 Lugar: " << C << endl << "Equipe B em 2 Lugar: " << B << endl << "Equipe A em 3 Lugar: " << A << endl;		
	}
	system("pause");
}


#include<iostream>
#include<stdlib.h>
#include<iomanip> //Biblioteca para manipular setprecision (linha 19)
using namespace std;

int main(){
	
	double vpao,vbroa,arrpao,arrbroa,vpoup,arrtotal;
	setlocale(LC_ALL,"Portuguese");
	cout << "Entre com a Quantidade de P�es Vendidos\n";
	cin >> vpao;
	cout << "Entre com a Quantidade de Broas Vendidas\n";
	cin >> vbroa;
	arrpao = vpao * 0.42; //arrecada��o das p�es
	arrbroa = vbroa * 2.50; //arrecada��o das broas
	vpoup = (arrpao + arrbroa) * 0.1; //valor para a poupan�a

	cout << "Venda Total de P�es e Broas: R$: " << arrpao+arrbroa << endl 
	<< "10% para a Poupan�a: R$: " << setprecision(3) << vpoup << endl;
	
	system("pause");
}

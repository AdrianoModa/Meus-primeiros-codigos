#include<iostream>
#include<stdlib.h>
#include<iomanip> //Biblioteca para manipular setprecision (linha 19)
using namespace std;

int main(){
	
	double vpao,vbroa,arrpao,arrbroa,vpoup,arrtotal;
	setlocale(LC_ALL,"Portuguese");
	cout << "Entre com a Quantidade de Pães Vendidos\n";
	cin >> vpao;
	cout << "Entre com a Quantidade de Broas Vendidas\n";
	cin >> vbroa;
	arrpao = vpao * 0.42; //arrecadação das pães
	arrbroa = vbroa * 2.50; //arrecadação das broas
	vpoup = (arrpao + arrbroa) * 0.1; //valor para a poupança

	cout << "Venda Total de Pães e Broas: R$: " << arrpao+arrbroa << endl 
	<< "10% para a Poupança: R$: " << setprecision(3) << vpoup << endl;
	
	system("pause");
}

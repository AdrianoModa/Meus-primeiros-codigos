#include<iostream>
#include<stdlib.h>

/*Calcule a dívida do cheque especial ao ser quitada 6 meses depois a uma taxa de 5% de juros ao mês.
 O valor do empréstimo deve ser informado. (D = E*(1+j)^t)*/
using namespace std;

int main(){

    double j,e,d;
    int t;

	cout << "Entre com o valor do Emprestimo:\n";
	cin >> e;
	j = 0.05;
	t = 6;
	d = e*(pow(j+1,t));
	cout << "O resultado = R$ " << d << endl;

	system("pause");

}

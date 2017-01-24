#include<iostream>
#include<stdlib.h>
#include<iomanip>
double fatorial(int num){ //Valores de Entrada que vou precisar na fun��o
    double fat;
    fat = 1;
    for(int i = 2; i <= num ; i++){ // C�lculo do Fatorial
        fat = fat*i;
    }
    return fat;
}
double combinacao(int n1,int n2){ //Valores de entrada necess�ria para a fun��o. No caso da combina��o n1 e n2.
    return (fatorial(n1)/(fatorial(n2)*fatorial(n1-n2))); // C�lculo da Combina��o.
}
using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");
    int n1, n2;
    cout << "::C�lculo de Combina��o Probabilidade::\n\n";
    cout << "Informe O N�mero de Elementos:\n";
    cin >> n1;
    cout << "Informe O N�mero de Grupos:\n";
    cin >> n2;

    cout << "A combina��o de " << n1 << " e " << n2 << " � " << setprecision(10) << combinacao(n1,n2) << endl;

    system("pause");
}

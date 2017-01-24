#include<iostream>
#include<stdlib.h>
#include<iomanip>
double fatorial(int num){ //Valores de Entrada que vou precisar na função
    double fat;
    fat = 1;
    for(int i = 2; i <= num ; i++){ // Cálculo do Fatorial
        fat = fat*i;
    }
    return fat;
}
double combinacao(int n1,int n2){ //Valores de entrada necessária para a função. No caso da combinação n1 e n2.
    return (fatorial(n1)/(fatorial(n2)*fatorial(n1-n2))); // Cálculo da Combinação.
}
using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");
    int n1, n2;
    cout << "::Cálculo de Combinação Probabilidade::\n\n";
    cout << "Informe O Número de Elementos:\n";
    cin >> n1;
    cout << "Informe O Número de Grupos:\n";
    cin >> n2;

    cout << "A combinação de " << n1 << " e " << n2 << " é " << setprecision(10) << combinacao(n1,n2) << endl;

    system("pause");
}

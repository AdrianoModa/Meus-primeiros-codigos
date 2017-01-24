#include<iostream>
#include<stdlib.h>
#include<iomanip>

using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");
    long int n,fat;
    int i;
    fat = 1;
    cout << "Informe um número Para o Cálculo de Fatorial:\n";
    cin >> n;
    for (i = n; i > 0; i--){
        fat = fat*i;
    }
    cout << "Fatorial de " << n << "! = " << setprecision(5) << fat << endl;

    system("pause");
}

#include<iostream> #include<stdlib.h>
#include<iomanip>
/* Recebe apenas numeros inteiros positivos, encerra quanto recebe o
primeiro número negativo, então exibe a média dos números digitados */
using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");
    int i,acum,acumi,n;
    i = 1;
    acum = 0;
    acumi = 0;
    while(i > 0){
        cout << "Informe Um Número Inteiro Qualquer:\n";
        cin >> n;
        if (n >= 0){
            acum = acum+n;
            acumi = acumi+1;
        }
        else{
            cout << "A Média dos Números Positivos Digitados: " << setprecision(2) << (float)acum/acumi << endl;
            i = -1;
        }
    i++;
    }
}

#include<iostream> #include<stdlib.h>
#include<iomanip>
/* Recebe apenas numeros inteiros positivos, encerra quanto recebe o
primeiro n�mero negativo, ent�o exibe a m�dia dos n�meros digitados */
using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");
    int i,acum,acumi,n;
    i = 1;
    acum = 0;
    acumi = 0;
    while(i > 0){
        cout << "Informe Um N�mero Inteiro Qualquer:\n";
        cin >> n;
        if (n >= 0){
            acum = acum+n;
            acumi = acumi+1;
        }
        else{
            cout << "A M�dia dos N�meros Positivos Digitados: " << setprecision(2) << (float)acum/acumi << endl;
            i = -1;
        }
    i++;
    }
}

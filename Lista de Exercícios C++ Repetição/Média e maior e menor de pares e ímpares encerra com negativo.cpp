#include<iostream>
#include<stdlib.h>
/*Construa um algoritmo para calcular a m�dia de valores PARES e �MPARES, que ser�o digitados pelo usu�rio.
 Ao final o algoritmo deve mostrar estas duas m�dias. O algoritmo deve mostrar tamb�m o maior n�mero PAR
  digitado e o menor n�mero �MPAR digitado. Para finalizar o usu�rio ir� digitar um valor negativo.*/
using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");
    int n,i,apar,cpar,auxp,aimpar,cimpar,auxi;
    i = 1; apar = cpar = auxp = aimpar = cimpar = auxi = 0;
    while(i > 0){
        cout << "Informe Um N�mero Inteiro Qualquer:\n";
        cin >> n;
        if(n >=0){
            }
            else{
                i = -1;
            }
            if((n % 2 == 0)&&(n > 0)){ //Verifica��o se o n�mero � Par.
                apar = apar+n;
                cpar = cpar+1;
                if(n > auxp){
                    auxp = n;
                }
            }
        if(n >=0){
            }
            else{
                i = -1;
            }
            if((n % 2 != 0)&&(n > 0)){
                aimpar = aimpar+n;
                cimpar = cimpar+1;
                if(auxi == 0){
                    auxi = n+1;
                }
                    if(n < auxi){
                        auxi = n;
                    }
            }
        i++;
        }
        /* As variaveis acumulativas ("cpar" e "cimpar") recebem inicializa��o 0. Caso o usu�rio s� digite
        numeros pares ou s� digite n�meros impares uma delas ficar� com 0, e na sa�da deveria efetuar a divis�o
        por 0, o que � incorreto. Ent�o foi feita um filtro linha(47 e 50) para se for o caso essa vari�vel
        receba o valor 1 para poder efetuar uma divis�o retornando 0 j� que o usu�rio n�o digitou n�meros, ou
        �mpar ou par */
        if(cpar == 0 ){
            cpar = 1;
        }
        if(cimpar == 0){
            cimpar = 1;
        }
    cout << "A m�dia dos n�mero pares: " << (apar/cpar) << endl;
    cout << "O maior n�mero par �: " << auxp << endl;
    cout << "A m�dia dos impares �: " << (aimpar/cimpar) << endl;
    cout << "O menor n�mero �mpar e: " << auxi << endl;
    system("pause");
}

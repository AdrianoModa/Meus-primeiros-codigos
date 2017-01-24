#include<iostream>
#include<stdlib.h>
/*Construa um algoritmo para calcular a média de valores PARES e ÍMPARES, que serão digitados pelo usuário.
 Ao final o algoritmo deve mostrar estas duas médias. O algoritmo deve mostrar também o maior número PAR
  digitado e o menor número ÍMPAR digitado. Para finalizar o usuário irá digitar um valor negativo.*/
using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");
    int n,i,apar,cpar,auxp,aimpar,cimpar,auxi;
    i = 1; apar = cpar = auxp = aimpar = cimpar = auxi = 0;
    while(i > 0){
        cout << "Informe Um Número Inteiro Qualquer:\n";
        cin >> n;
        if(n >=0){
            }
            else{
                i = -1;
            }
            if((n % 2 == 0)&&(n > 0)){ //Verificação se o número é Par.
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
        /* As variaveis acumulativas ("cpar" e "cimpar") recebem inicialização 0. Caso o usuário só digite
        numeros pares ou só digite números impares uma delas ficará com 0, e na saída deveria efetuar a divisão
        por 0, o que é incorreto. Então foi feita um filtro linha(47 e 50) para se for o caso essa variável
        receba o valor 1 para poder efetuar uma divisão retornando 0 já que o usuário não digitou números, ou
        ímpar ou par */
        if(cpar == 0 ){
            cpar = 1;
        }
        if(cimpar == 0){
            cimpar = 1;
        }
    cout << "A média dos número pares: " << (apar/cpar) << endl;
    cout << "O maior número par é: " << auxp << endl;
    cout << "A média dos impares é: " << (aimpar/cimpar) << endl;
    cout << "O menor número ímpar e: " << auxi << endl;
    system("pause");
}

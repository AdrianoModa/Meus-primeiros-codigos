#include<iostream>
#include<stdlib.h>
/* Escreva um algoritmo que receba números do usuário enquanto eles forem
positivos, e ao fim o algoritmo deve imprimir quantos números foram digitados.*/
using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");//Permite acentuação gráfica para o Idioma Português.
    int acum,i,n; //declaração de variáveis.
    acum = 0; //inicializa o acumulador.
    i = 1; // inicializa o contador para entrar no laço while.
    while(i > 0){ //condição do laço while. A condição apenas para entrar no laço.
        cout << "Informe Um Número Inteiro Qualquer:\n";
        cin >> n; // entrada de dados. Recebo um numero inteiro qualquer.
        if(n >= 0){ //admitirá a entrada de somente números positivos.
            acum = acum+1; //contador desses números positivos.
        }
        else{ //caso entre um número negativo, apresenta a saída.
            cout << "Quantidade de Números Positivos Digitados: " << acum << endl;
            i = -1; //contador recebe valor -1 para que mesmo com o incremento, a variável encerre o laço while.
        }
    i++; //incrementa o laço while.
    }
    system("pause");//pausa o algoritmo depois da saída de dados.
}

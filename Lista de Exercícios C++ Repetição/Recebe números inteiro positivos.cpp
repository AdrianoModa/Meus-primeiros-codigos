#include<iostream>
#include<stdlib.h>
/* Escreva um algoritmo que receba n�meros do usu�rio enquanto eles forem
positivos, e ao fim o algoritmo deve imprimir quantos n�meros foram digitados.*/
using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");//Permite acentua��o gr�fica para o Idioma Portugu�s.
    int acum,i,n; //declara��o de vari�veis.
    acum = 0; //inicializa o acumulador.
    i = 1; // inicializa o contador para entrar no la�o while.
    while(i > 0){ //condi��o do la�o while. A condi��o apenas para entrar no la�o.
        cout << "Informe Um N�mero Inteiro Qualquer:\n";
        cin >> n; // entrada de dados. Recebo um numero inteiro qualquer.
        if(n >= 0){ //admitir� a entrada de somente n�meros positivos.
            acum = acum+1; //contador desses n�meros positivos.
        }
        else{ //caso entre um n�mero negativo, apresenta a sa�da.
            cout << "Quantidade de N�meros Positivos Digitados: " << acum << endl;
            i = -1; //contador recebe valor -1 para que mesmo com o incremento, a vari�vel encerre o la�o while.
        }
    i++; //incrementa o la�o while.
    }
    system("pause");//pausa o algoritmo depois da sa�da de dados.
}

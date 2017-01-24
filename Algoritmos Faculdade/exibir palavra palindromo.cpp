#include<iostream>
#include<stdlib.h>
#include<iomanip>
/*Algoritmo feito em aula que exibe palavra palindroma. Foi feito comparando duas palavras.
uma na sequencia normal e a outra na sequencia inversa.*/
using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");
    string p1,p2;
    int i,j,k; //contadores
    cout << "Informe uma palavra\n";
    getline(cin,p1); //Na entrada de dados, capta a linha toda.
    for(i = 0; p1[i] != '\0'; i++); //contar quantos indice possui p1.
    p2 = p1; //Já que p1 foi contado na linha 14. Pra não contar o p2 novamente, utiliza-se essa igualdade.
    bool pali = true;
    for( j = i-1, k = 0; j >=0; j--, k++){
        p2[k] = p1[j];
        if (p2[k] != p1[k]){
            pali = false;
            break;
        }
    }
    if (pali == true){
        cout << "A Palavra é Palindroma.\n";
    }
    else{
        cout << "A Palavra Não é Palindroma\n";
    }
    system("pause");
}

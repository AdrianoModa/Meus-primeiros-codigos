#include<iostream>
#include<stdlib.h>
/*Solicitar um texto como entrada e mostrar como resultado o texto com todas as palavras iniciadas por
 letras mai�sculas e as demais min�sculas. Ex: p1 = "aula de estruturas"; sa�da = "Aula de Estruturas";*/
 using namespace std;

 int main(){
    setlocale(LC_ALL,"Portuguese");
    char nome[100];
    int i;
    cout << "Qual � o seu nome?\n";
    cin.getline(nome,100);
    for(i = 0; nome[i] != '\0'; i++){
        nome[0] = toupper(nome[0]);
      if(isspace (nome[i]) ){
            i++;
            nome[i] = toupper(nome[i]);
        }
    }
    // Convers�o para Inicial(is) Mai�scula(s)
    cout << "\nConvertido --> " << nome << endl;
 }

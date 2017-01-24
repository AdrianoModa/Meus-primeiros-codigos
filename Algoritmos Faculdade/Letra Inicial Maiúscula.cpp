#include<iostream>
#include<stdlib.h>
/*Solicitar um texto como entrada e mostrar como resultado o texto com todas as palavras iniciadas por
 letras maiúsculas e as demais minúsculas. Ex: p1 = "aula de estruturas"; saída = "Aula de Estruturas";*/
 using namespace std;

 int main(){
    setlocale(LC_ALL,"Portuguese");
    char nome[100];
    int i;
    cout << "Qual é o seu nome?\n";
    cin.getline(nome,100);
    for(i = 0; nome[i] != '\0'; i++){
        nome[0] = toupper(nome[0]);
      if(isspace (nome[i]) ){
            i++;
            nome[i] = toupper(nome[i]);
        }
    }
    // Conversão para Inicial(is) Maiúscula(s)
    cout << "\nConvertido --> " << nome << endl;
 }

//Começando em C++
#include<iostream> ///Biblioteca padrão para utilizar entrada e saída de dados.
#include<stdlib.h> //Biblioteca para utilizar o system("pause").
using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese"); //Acentuação Gráfica Português.
    int idade;
    string nome;

    cout << "Qual é o seu nome? ";
    getline(cin,nome); // permite fazer a leitura de entrada de dados da linha toda 
    cout << nome << ", qual a sua idade? ";
    cin >> idade;
    
    cout << nome << " você tem " << idade << " anos. \n";
    //endl para quebra de linha
        
	if (idade >= 18) {
        if (idade >= 60) {
          cout << "Você é idoso(a)\n";
    }
        else {
          cout << "Você é Jovem Adulto(a)\n";
        }	   
	}
    else {
        if (idade >= 12) {
            cout << "Você é Adolescente\n";
        }
        else {
            cout << "Você é Criança\n";
        }
    }
    
    system("pause");
}

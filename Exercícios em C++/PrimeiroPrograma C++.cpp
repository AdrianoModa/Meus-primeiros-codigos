//Come�ando em C++
#include<iostream> ///Biblioteca padr�o para utilizar entrada e sa�da de dados.
#include<stdlib.h> //Biblioteca para utilizar o system("pause").
using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese"); //Acentua��o Gr�fica Portugu�s.
    int idade;
    string nome;

    cout << "Qual � o seu nome? ";
    getline(cin,nome); // permite fazer a leitura de entrada de dados da linha toda 
    cout << nome << ", qual a sua idade? ";
    cin >> idade;
    
    cout << nome << " voc� tem " << idade << " anos. \n";
    //endl para quebra de linha
        
	if (idade >= 18) {
        if (idade >= 60) {
          cout << "Voc� � idoso(a)\n";
    }
        else {
          cout << "Voc� � Jovem Adulto(a)\n";
        }	   
	}
    else {
        if (idade >= 12) {
            cout << "Voc� � Adolescente\n";
        }
        else {
            cout << "Voc� � Crian�a\n";
        }
    }
    
    system("pause");
}

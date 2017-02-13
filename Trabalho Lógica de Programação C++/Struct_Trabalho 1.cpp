#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#define QTD 5 // constante definido n�mero de contatos
// autor: Adriano Moda Feitosa Mat: 1613244/6
using namespace std;

typedef struct Pessoa{
    string nome;
    int idade;
    char sexo;        
}pessoa;

typedef struct Endereco{
	string nomerua;
	int numero;
	string bairro;
}endereco;

typedef struct contatos{
	pessoa pessoa;
	int telefone;
	string email;
	endereco endereco;
}contatos;

int main(){
    
	setlocale(LC_ALL,"Portuguese");
	int i;
	contatos contatos[QTD], aux[QTD]; // Declara��o dos tipos
    
	/* Preenchimento dos Contatos */
	for(i=0; i < QTD; i++){
        cout << ":: Contato ::" << i+1 << endl;
		cout << "Nome: ";
        getline(cin,contatos[i].pessoa.nome);
        fflush(stdin);
        cout << "Idade: ";
        cin >> contatos[i].pessoa.idade;
        cout << "Sexo (M) ou (F): ";
        cin >> contatos[i].pessoa.sexo;
        cout << "<< Endere�o >>\n";
        cout << "Rua: ";
        fflush(stdin);
        cin >> contatos[i].endereco.nomerua;
        cout << "N�mero: ";
        cin >> contatos[i].endereco.numero;
        cout << "Bairro: ";
        fflush(stdin); // Limpar o buffer no Windows SO
        getline(cin,contatos[i].endereco.bairro);
        cout << "Telefone: ";
        cin >> contatos[i].telefone;
        cout << "E-mail: ";
        cin >> contatos[i].email; 
		fflush(stdin);   
		system("cls");    
    }
	 
	/* Ordenar Por ordem alfab�tica */ 
    for(int i = 0; i<QTD;i++){
		for(int j = 0;j<4;j++){
			if (contatos[i].pessoa.nome < contatos[j].pessoa.nome){
				aux[i]= contatos[i];
				contatos[i] = contatos[j];
				contatos[j]=aux[i];
			}
		}
	}
    /* Sa�da dos Contatos devidamente Preenchidos */
    for(int i = 0; i < QTD; i++){
		cout <<"\tContatos " << i+1 << endl;
		cout << "Nome "      << contatos[i].pessoa.nome 			<< endl;
		cout << "Idade "     << contatos[i].pessoa.idade << " anos" << endl;
		cout << "Sexo: "     << contatos[i].pessoa.sexo 			<< endl;
		cout << "Endereco: " 										<< endl;
		cout << "Rua: "      << contatos[i].endereco.nomerua 		<< endl;
		cout << "N�mero "    << contatos[i].endereco.numero 		<< endl;
		cout << "Bairro "    << contatos[i].endereco.bairro 		<< endl;
		cout << "Telefone: " << contatos[i].telefone 				<< endl;
		cout << "E-mail: "   << contatos[i].email 					<< endl;		
	}
}

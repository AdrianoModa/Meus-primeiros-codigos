#include<iostream>
#include<fstream>
#include<conio.h>
#include<stdlib.h>
#include<cstdlib>
// Adriano Moda Feitosa Mat: 1613244/6
using namespace std;
void menu_cpf(){
	cout << "\n\n\t\t(1) Validar CPF individual\n\t\t";
	cout << "(2) Exibir CPF�s v�lidos\n\t\t";
	cout << "(3) Sair\n\t\t";
}
int main(){
	
	setlocale(LC_ALL,"Portuguese");
	fstream validar_cpf; // declara��o de arquivo com fstream.
	validar_cpf.open("validarcpf.txt",ios::app); // criar um arquivo para escrever dados.
    char cpf[11];
	int opcao,i,j,compdv1,compdv2;    
	
	system("color F1");	// cor do fundo do terminal.
	menu_cpf(); // fun��o Menu do Programa
	cin >> opcao;
	system("cls"); // Limpa a tela depois de selecionado a tarefa do menu.

	switch (opcao){
		case 1: 
			if(validar_cpf.is_open()){
    			cout<<"Digite um n�mero de CPF: ";
					for(i = 0; i <= 10; i++){
						cpf[i] = getche(); // Fun��o getche() ecoa e preenche um vetor com cpf digitado.
						validar_cpf << cpf[i]-48; // Diminui por 48 para converter e manipular o n�mero de cpf, e n�o a posi��o da ASCII.
							if(i == 2 || i == 5){
								cout << ".";
								validar_cpf << ".";	// Exibir ponto separador do cpf no arquivo.						
							}
							if(i == 8){
								cout << "-";
								validar_cpf << "-";	// Exibir tra�o separador do cpf no arquivo.								
							}				
					}
	cout << endl;
	
	/* Verificar M�dulo 11 do D�gito Verificador 1 */
		
				int mdv1,acumdv1 = 0; // declara��o de vari�veis e inicializa��o de v�riavel Bloco digito 10.
				for(i = 0, j = 10; i < 9 ; i++, j--){ // Percorre um vetor incremento e outro em decremento para c�lculo.
					mdv1 = (cpf[i]-48)*j; // Multiplica��o para c�lculo do m�dulo 11.
					acumdv1 +=mdv1; // Soma os n�meros multiplicados para compara��o do c�lculo m�dulo 11.
				}
				if(acumdv1 % 11 == 0 || acumdv1 % 11 == 1){ // Condi��o do m�dulo 11 para d�gito 10.
					compdv1 = 0;
				}
				else{
					compdv1 = 11-(acumdv1 % 11);
				}
	
	/* Verificar M�dulo 11 do D�gito Verificador 2*/
	
				int mdv2,acumdv2 = 0; // declara��o de vari�veis e inicializa��o de v�riavel Bloco digito 11.
				for(i = 0, j = 11; i < 10 ; i++, j--){ // Percorre um vetor incremento e outro em decremento para c�lculo.
					mdv2 = (cpf[i]-48)*j; // Multiplica��o para c�lculo do m�dulo 11.
					acumdv2 +=mdv2; // Soma os n�meros multiplicados para compara��o do c�lculo m�dulo 11.
				}
				if(acumdv2 % 11 == 0 || acumdv2 % 11 == 1){ // Condi��o do m�dulo 11 para d�gito 11.
					compdv2 = 0;
				}
				else{
					compdv2 = 11-(acumdv2 % 11);
				}

	/* Verifica��o se CPF � V�lido ou Inv�lido */	
		
				if(validar_cpf.is_open()){ // criar arquivo para escrita
					if((compdv1 == (cpf[9]-48) && compdv2 == (cpf[10]-48))){ // Verifica se m�dulo 11 foi utilizado no CPF digitado pelo usu�rio
						for(i = 0; i < 11; i++){ // Se utilizado m�dulo 11, preenche o vetor novamente para exibir o cpf.
							cout << cpf[i]; 
							if(i == 2 || i == 5){
								cout << ".";
							}
							if(i == 8){
								cout << "-";								
							}
						}
							validar_cpf << ";V�lido" << endl; // sa�da para o arquivo "validarcpf.txt"
							cout << "\nO CPF V�lido!" << endl; // Exibe para o usu�rio que o CPF � v�lido.
					}
					else{
						for(i = 0; i < 11; i++){ // Se utilizado m�dulo 11, preenche o vetor novamente para exibir o cpf.
							cout << cpf[i];
							if(i == 2 || i == 5){
								cout << ".";								
							}
							if(i == 8){
								cout << "-";								
							}
					}
						validar_cpf << ";Inv�lido" << endl; // sa�da para o arquivo "validarcpf.txt"
						cout << "\nO CPF � Inv�lido!" << endl; // Exibe para o usu�rio que o CPF � Inv�lido.
					}
				}
				else{
					cout << "Erro ao Abrir Arquivo!";
					validar_cpf.close(); // fechar arquivo.
				}
   			}
   				break;
		case 2: 
			{ // Abrir chaves para declara��o ifstream funcionar como escopo, evitando pular case no switch.
				ifstream validar_cpf;
    			validar_cpf.open("validarcpf.txt", ios::out); // Abrir arquivo para leitura.
    			if (validar_cpf.is_open()){ // Verificar se o Arquivo est� aberto e realizar a leitura do mesmo.
        			string linha;
        				while (getline(validar_cpf, linha)){
            				cout << linha << endl;
        				}
    			}
    			else{
	       			cout << "Erro ao abrir arquivo!"; 
				}
				validar_cpf.close(); // fechar o arquivo
			}
				break;
		case 3: cout << "Encerrando o Programa..." << endl;	// fim do programa	
	}
	system("pause");
}	

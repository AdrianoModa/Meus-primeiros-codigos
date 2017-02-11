#include<iostream>
#include<fstream>
#include<conio.h>
#include<stdlib.h>
#include<cstdlib>
// Adriano Moda Feitosa Mat: 1613244/6
using namespace std;
void menu_cpf(){
	cout << "\n\n\t\t(1) Validar CPF individual\n\t\t";
	cout << "(2) Exibir CPF’s válidos\n\t\t";
	cout << "(3) Sair\n\t\t";
}
int main(){
	
	setlocale(LC_ALL,"Portuguese");
	fstream validar_cpf; // declaração de arquivo com fstream.
	validar_cpf.open("validarcpf.txt",ios::app); // criar um arquivo para escrever dados.
    char cpf[11];
	int opcao,i,j,compdv1,compdv2;    
	
	system("color F1");	// cor do fundo do terminal.
	menu_cpf(); // função Menu do Programa
	cin >> opcao;
	system("cls"); // Limpa a tela depois de selecionado a tarefa do menu.

	switch (opcao){
		case 1: 
			if(validar_cpf.is_open()){
    			cout<<"Digite um número de CPF: ";
					for(i = 0; i <= 10; i++){
						cpf[i] = getche(); // Função getche() ecoa e preenche um vetor com cpf digitado.
						validar_cpf << cpf[i]-48; // Diminui por 48 para converter e manipular o número de cpf, e não a posição da ASCII.
							if(i == 2 || i == 5){
								cout << ".";
								validar_cpf << ".";	// Exibir ponto separador do cpf no arquivo.						
							}
							if(i == 8){
								cout << "-";
								validar_cpf << "-";	// Exibir traço separador do cpf no arquivo.								
							}				
					}
	cout << endl;
	
	/* Verificar Módulo 11 do Dígito Verificador 1 */
		
				int mdv1,acumdv1 = 0; // declaração de variáveis e inicialização de váriavel Bloco digito 10.
				for(i = 0, j = 10; i < 9 ; i++, j--){ // Percorre um vetor incremento e outro em decremento para cálculo.
					mdv1 = (cpf[i]-48)*j; // Multiplicação para cálculo do módulo 11.
					acumdv1 +=mdv1; // Soma os números multiplicados para comparação do cálculo módulo 11.
				}
				if(acumdv1 % 11 == 0 || acumdv1 % 11 == 1){ // Condição do módulo 11 para dígito 10.
					compdv1 = 0;
				}
				else{
					compdv1 = 11-(acumdv1 % 11);
				}
	
	/* Verificar Módulo 11 do Dígito Verificador 2*/
	
				int mdv2,acumdv2 = 0; // declaração de variáveis e inicialização de váriavel Bloco digito 11.
				for(i = 0, j = 11; i < 10 ; i++, j--){ // Percorre um vetor incremento e outro em decremento para cálculo.
					mdv2 = (cpf[i]-48)*j; // Multiplicação para cálculo do módulo 11.
					acumdv2 +=mdv2; // Soma os números multiplicados para comparação do cálculo módulo 11.
				}
				if(acumdv2 % 11 == 0 || acumdv2 % 11 == 1){ // Condição do módulo 11 para dígito 11.
					compdv2 = 0;
				}
				else{
					compdv2 = 11-(acumdv2 % 11);
				}

	/* Verificação se CPF é Válido ou Inválido */	
		
				if(validar_cpf.is_open()){ // criar arquivo para escrita
					if((compdv1 == (cpf[9]-48) && compdv2 == (cpf[10]-48))){ // Verifica se módulo 11 foi utilizado no CPF digitado pelo usuário
						for(i = 0; i < 11; i++){ // Se utilizado módulo 11, preenche o vetor novamente para exibir o cpf.
							cout << cpf[i]; 
							if(i == 2 || i == 5){
								cout << ".";
							}
							if(i == 8){
								cout << "-";								
							}
						}
							validar_cpf << ";Válido" << endl; // saída para o arquivo "validarcpf.txt"
							cout << "\nO CPF Válido!" << endl; // Exibe para o usuário que o CPF é válido.
					}
					else{
						for(i = 0; i < 11; i++){ // Se utilizado módulo 11, preenche o vetor novamente para exibir o cpf.
							cout << cpf[i];
							if(i == 2 || i == 5){
								cout << ".";								
							}
							if(i == 8){
								cout << "-";								
							}
					}
						validar_cpf << ";Inválido" << endl; // saída para o arquivo "validarcpf.txt"
						cout << "\nO CPF é Inválido!" << endl; // Exibe para o usuário que o CPF é Inválido.
					}
				}
				else{
					cout << "Erro ao Abrir Arquivo!";
					validar_cpf.close(); // fechar arquivo.
				}
   			}
   				break;
		case 2: 
			{ // Abrir chaves para declaração ifstream funcionar como escopo, evitando pular case no switch.
				ifstream validar_cpf;
    			validar_cpf.open("validarcpf.txt", ios::out); // Abrir arquivo para leitura.
    			if (validar_cpf.is_open()){ // Verificar se o Arquivo está aberto e realizar a leitura do mesmo.
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

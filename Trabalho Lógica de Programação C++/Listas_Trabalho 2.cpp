#include <iostream>
#include <stdlib.h>
// autor: Adriano Moda Feitosa Mat: 1613244/6
using namespace std;

typedef struct nodeSimpEnc{ // Nó Lista Simplesmente Encadeada
	int info;
	nodeSimpEnc *prox = NULL;
}nodeSE;

typedef struct nodeDuplaEnc{ // Nó Lista Duplamente Encadeada
	int info;
	nodeDuplaEnc *prox = NULL;
	nodeDuplaEnc *ant = NULL; // aponta para Null
}nodeDE;

typedef struct ListaSimpEnc{ 
	nodeSE *cabeca = NULL;
	nodeSE *cauda = NULL;
}LSE;

typedef struct ListaDuplaEnc{
	nodeDE*cabeca = NULL;
	nodeDE*cauda = NULL;
}LDE;

void InserirCabeca (LSE*l){ // Inserir Cabeça Lista Simplesmente Encadeada
	char opcao = 's';
	int num;
	cout << "\t\tInsira um Número: ";
	cin >> num;
	while(opcao == 's'){
		nodeSE *n = new nodeSE;
		n->info = num;
		n->prox = NULL;
	
		if (l->cabeca == NULL){
			l->cabeca = n;
			l->cauda = n;
		} 
		else{
			n->prox = l->cabeca;
			l->cabeca = n;
		}
			cout << "\t\tDeseja continuar? (s) ou (n): ";
			cin >> opcao;
				if(opcao == 's'){
					cout << "\t\tInsira um Número: ";
					cin >> num;									
				}
	}
}
void InserirCab (LDE*l){ // Inserir Cabeça Lista Duplamente Encadeada
	char opcao = 's';
	int num;
	cout << "\t\tInsira um Número: ";
	cin >> num;
	while(opcao == 's'){
		nodeDE *n = new nodeDE;
		n->info = num;
		n->prox = NULL;
		n->ant = NULL;
	
		if (l->cabeca == NULL){
			l->cabeca = n;
			l->cauda = n;
		} 
		else{
			n->prox = l->cabeca;
			l->cabeca->ant = n;
			l->cabeca = n;
		}
			cout << "\t\tDeseja continuar? (s) ou (n): ";
			cin >> opcao;
				if(opcao == 's'){
			cout << "\t\tInsira um Número: ";
			cin >> num;	
				}
	}
}

void RemoverCabeca(LSE*l){ // Remove Cabeça de Lista Simplesmente Encadeada
	nodeSE *atual;
	atual = l->cabeca;
	l->cabeca = l->cabeca->prox;
	free(atual);
	cout << "\t\tO Elemento foi removido!"<<endl;
	system("pause");	
	}

void RemoverCab(LDE*l){ // Remove Cabeça de Lista Duplamente Encadeada
	nodeDE *atual;
	atual = l->cabeca;
	l->cabeca = l->cabeca->prox;
	l->cabeca->ant = NULL;
	free(atual);
	cout << "\t\tO Elemento foi removido!"<<endl;
	system("pause");	
	}

void InserirCauda(LSE*l){ // Insere um elemento na Cauda da Lista Simplesmente Encadeada
	char opcao = 's';
	int num;
	cout << "\t\tInsira um Número: ";
	cin >> num;
	while(opcao == 's'){
		nodeSE *n = new nodeSE;
		n->info = num;
		n->prox = NULL;
	
		if (l->cauda == NULL){
			l->cabeca = n;
			l->cauda = n;
		}
		else{
			l->cauda->prox = n;			
			l->cauda = n;
		}
			cout << "\t\tDeseja continuar? (s) ou (n): ";
			cin >> opcao;
				if(opcao == 's'){
					cout << "\t\tInsira um Número: ";
				 	cin >> num;
				}	
	}
}

void InserirCau(LDE*l) { // Insere um elemento na Cauda da Lista Duplamente Encadeada
	char opcao = 's';
	int num;
	cout << "\t\tInsira um Número: ";
	cin >> num;
	while(opcao == 's'){
		nodeDE *n = new nodeDE;
		n->info = num;
		n->prox = NULL;
		n->ant = NULL;
	
		if (l->cauda == NULL){
			l->cabeca = n;
			l->cauda = n;
		}else{
			l->cauda->prox = n;
			n->ant = l->cauda;
			l->cauda = n;
		}
			cout << "\t\tDeseja continuar? (s) ou (n): ";
			cin >> opcao;
				if(opcao == 's'){
					cout << "\t\tInsira um Número: ";
					cin >> num;
				}
	}
}

void RemoverCauda(LSE *l){ // Remove Cauda de Lista Simplesmente Encadeada
	nodeSE *ant = l->cabeca;
	nodeSE *frente = l->cabeca->prox;
	while(frente->prox != NULL){
		ant = frente;
		frente = frente->prox;
	}
	l->cauda = ant;
	ant->prox = NULL;			
	free(frente);
	cout << "\t\tO Elemento foi removido!"<<endl;
	system("pause");
}

void RemoverCau(LDE *l){ // Remove Cauda de Lista Duplamente Encadeada
	nodeDE *ant = l->cabeca;
	nodeDE *frente = l->cabeca->prox;	
	while(frente->prox != NULL){
		ant = frente;
		frente = frente->prox;
	}
	l->cauda->ant = NULL;
	l->cauda = ant;
	ant->prox = NULL;			
	free(frente);
	cout << "\t\tO Elemento foi removido!"<<endl;
	system("pause");
}

void ExibirLSE (LSE l){ // Exibe elementos da Lista Simplesmente Encadeada
 nodeSE *atual = l.cabeca;
 system ("cls");
 	if(atual == NULL){
 		cout << "A Lista está Vazia!\n";
	}	
	else{
		while (atual != NULL){
	 		cout << atual->info;
	 			if(atual->prox == NULL);
	 				cout << " -> ";	
			atual = atual->prox;
			 	}
	}
	cout << endl;
	system ("pause");
}

void ExibirLDE (LDE l){ // Exibe elementos da Lista Duplamente Encadeada
 nodeDE *atual = l.cabeca;
 system ("cls");
 	if(atual == NULL){
 		cout << "A Lista está Vazia!\n";
	}
	else{
	 	while (atual != NULL){
	 		cout << atual->info;
	 			if(atual->prox == NULL);
	 				cout << " -> ";	
			atual = atual->prox;
		 }
	}
	cout << endl;
	system ("pause");
}

void Menu_Inicial(){ // Função para o Menu Inicial
	system("color f1");
	cout << "\n\n\t\t<<:: Menu Inicial ::>> " << endl;
	cout << "\n\t\t(1) Lista SE" << endl;
	cout << "\t\t(2) Lista DE" << endl;
	cout << "\t\t(3) Sair" << endl;
	cout << "\n\t\tSelecione uma Opção: ";
}
void Submenu(){ // Função para o Submenu
	
	cout << "\n\n\t\t<<:: Submenu ::>>";
	cout << "\n\n\t\t(i) Incluir elemento na cabeça" << endl;
	cout << "\t\t(f) Incluir elemento na cauda" << endl;
	cout << "\t\t(r) Remover elemento da cabeça" << endl;
	cout << "\t\t(x) Remover elemento da cauda" << endl;
	cout << "\t\t(e) Exibir Lista" << endl;
	cout << "\t\t(v) Voltar" << endl;
	cout << "\n\n\t\tSelecione uma das Opções: ";
}
int main (){
	setlocale(LC_ALL,"Portuguese");
	LSE lista;LDE listaDE;
	char opcao;
	int info, op = 0; 

	while(op != 3){
	opcao = 'a'; 
	system ("cls");
	Menu_Inicial();
	cin >> op;
		switch (op){
			case 1:
				while(opcao != 'v'){
				system ("cls");
				Submenu();
				cin >> opcao;
					switch (opcao){
						case 'i':InserirCabeca(&lista);
						break;
						case 'f':InserirCauda(&lista);
						break;
						case 'r':RemoverCabeca(&lista);
						break;
						case 'x':RemoverCauda(&lista);
						break;
						case 'e':ExibirLSE(lista);
						break;
						case 'v':system("cls");
						break;
					}
				}
			case 2:
				while(opcao != 'v'){
				system ("cls");
				Submenu();
				cin >> opcao;
					switch (opcao){
						case 'i':InserirCab(&listaDE);
						break;
						case 'f':InserirCau(&listaDE);
						break;
						case 'r':RemoverCab(&listaDE);
						break;
						case 'x':RemoverCau(&listaDE);
						break;
						case 'e':ExibirLDE(listaDE);
						break;
						case 'v':system("cls");
						break;
					}
				}
			break;
			case 3:
				cout << "\t\tEncerrando o Programa...\n";
				break;
			default:
				cout << "\t\tOpção Inválida!"<<endl;
				exit(1);
				system ("pause");
				break;				
		}	
	}
}	
	
	


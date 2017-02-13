#include <iostream>
#include <stdlib.h>

using namespace std;

struct Node{
	int num;
	struct Node *prox;
};
typedef struct Node node;

int tam;

int menu(void);
void opcao(node *FILA, int op);
void inicia(node *FILA);
int vazia(node *FILA);
node *aloca();
void insere(node *FILA);
node *retira(node *FILA);
void exibe(node *FILA);
void libera(node *FILA);

int main(void){
	
	system("color f1");
	node *FILA = (node *) malloc(sizeof(node));
	if(!FILA){
		cout << "Sem memoria disponivel!\n";
		exit(1);
	}else{
	inicia(FILA);
	int opt;

	do{
		opt=menu();
		opcao(FILA,opt);
	}while(opt);

	free(FILA);
	return 0;
	}
}

void limpatela(){
	system("cls");
}

int menu(void)
{
	char opt;

	cout << "Menu\n";
	cout << "(i) Enfileirar\n";
	cout << "(r) Retirar da Fila\n";
	cout << "(e) Exibir Fila\n";
	cout << "(v) Voltar\n";
	cout << "Opcao: "; 
	cin >> &opt;
	return opt;
}

void opcao(node *FILA, int op)
{
	node *tmp;
	switch(op){
		case 'i':
			insere(FILA); 
			cout << "Elemento Adicionado!" << endl; 
			cout << "\n";
			system("pause"); 
			limpatela();
			break;
		case 'r': 
			libera(FILA);
			tmp= retira(FILA);
				if(tmp != NULL){
					cout << "Elemento Retirado! \n\n";
					libera(tmp);
				}
			system("pause");
			cout << "\n";
			limpatela();	
			break;
		case 'e': 
			exibe(FILA);
			cout << "\n";
			system("pause");
			limpatela();
			break;
		case 'v': 
			libera(FILA);
			exit(1);
			break;
		default:
			cout << "Opção inválida\n\n";
	}
}

void inicia(node *FILA){
	FILA->prox = NULL;
	tam=0;
}

int vazia(node *FILA){
	if(FILA->prox == NULL)
		return 1;
	else
		return 0;
}

node *aloca(){
	node *novo=(node *) malloc(sizeof(node));
	if(!novo){
		cout << "Sem memoria disponivel!\n";
		exit(1);
	}else{
		cout << "Novo elemento: "; 
		cin >> novo->num;
		return novo;
	}
}

void insere(node *FILA){
	node *novo=aloca();
	novo->prox = NULL;

	if(vazia(FILA))
		FILA->prox=novo;
	else{
		node *tmp = FILA->prox;

		while(tmp->prox != NULL)
			tmp = tmp->prox;

		tmp->prox = novo;
	}
	tam++;
}

node *retira(node *FILA){
	if(FILA->prox == NULL){
		cout <<"Fila ja esta vazia\n";
		return NULL;
	}else{
		node *tmp = FILA->prox;
		FILA->prox = tmp->prox;
		tam--;
		return tmp;
	}
}


void exibe(node *FILA){
	if(vazia(FILA)){
		cout <<("Fila vazia!\n\n");
		return ;
	}
	node *tmp;
	tmp = FILA->prox;
	cout << "\nFila : ";
	while( tmp != NULL){
		cout << "\t" << tmp->num;
		tmp = tmp->prox;
	}
	cout << "\n";
	int cont;
	for(cont=0 ; cont < tam ; cont++)
		cout << "\t^";
	cout << "\nOrdem: ";
	for(cont=0 ; cont < tam ; cont++)
		cout << "\t" << cont+1;
		cout << "\n\n";
}

void libera(node *FILA)
{
	if(!vazia(FILA)){
		node *proxNode,
			  *atual;

		atual = FILA->prox;
		while(atual != NULL){
			proxNode = atual->prox;
			free(atual);
			atual = proxNode;
		}
	}
}

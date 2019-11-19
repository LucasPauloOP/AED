#include<stdio.h>
#include<stdlib.h>


typedef struct {
	int chave;
	/*Resto da implementação do struct*/
}Item;

typedef struct Celula{
	Item elemento;
	Celula *proximo, *anterior;
}Celula;


typedef struct{
	Celula *primeiro,*ultimo;
}Lista;

void CriarLDEVazia (Lista *lista){
	lista->primeiro = (Celula*) malloc(sizeof(Celula));
	lista->ultimo = lista->primeiro;
	lista->primeiro->proximo = NULL;
	lista->primeiro->anterior = NULL;
}

int ChecaLDEVazia (Lista lista){
	return (lista.primeiro == lista.ultimo);
}

void InsereFinalLDE(Lista *lista, Item item){
	Celula *aux;
	lista->ultimo->proximo = (Celula*) malloc(sizeof(Celula));
	aux = lista->ultimo;
	lista->ultimo = lista->ultimo->proximo;
	lista->ultimo->elemento = item;
	lista->ultimo->proximo = NULL;
	lista->ultimo->anterior = aux;
}

void imprimirListaProx(Lista lista){
	Celula *aux;
	aux = lista.primeiro->proximo;
	
	if(ChecaLDEVazia(lista)){
		printf("\nlista vazia\n");	
	}
	else{
		while(aux != NULL)
		{
			printf("%d-",aux->elemento.chave);
			aux = aux->proximo;
		}
	}
}

void imprimirListaAnt(Lista lista){
	Celula *aux;
	aux = lista.ultimo;
	
	if(ChecaLDEVazia(lista)){
		printf("\nlista vazia\n");	
	}
	else{
		while(lista.ultimo != lista.primeiro)
		{
			
			printf("\n%d-",lista.ultimo->elemento.chave);
			lista.ultimo = lista.ultimo->anterior;
			
		}
	}
}

int main(){
	Lista l1;
	Item x;
	CriarLDEVazia(&l1);
	ChecaLDEVazia(l1);
	
	x.chave = 99;
	
	InsereFinalLDE(&l1, x);
	
	x.chave = 80;
	
	InsereFinalLDE(&l1, x);
	
	imprimirListaProx(l1);
	
	imprimirListaAnt(l1);
	
}

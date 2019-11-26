#include<stdio.h>
#include<stdlib.h>


typedef struct {
	int chave;
	/*Resto da implementa�ao do struct*/
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
		while(aux != lista.primeiro)
		{
			
			printf("%d-",aux->elemento.chave);
			aux = aux->anterior;
			
		}
	}
}

void retirarFinal(Lista *lista, Item *elemento){
	Celula *aux;
	if(ChecaLDEVazia(*lista)){
		printf("\nlista vazia\n");	
	}
	
	else{
		aux = lista->ultimo;
		lista->ultimo = lista->ultimo->anterior;
		lista->ultimo->proximo = NULL;
		*elemento = aux->elemento;
		free(aux);
	}
}

void insereInicio(Lista *lista,Item chave){
	
	Celula *aux;
	aux = (Celula*) malloc(sizeof(Celula));
	
	aux->proximo = lista->primeiro->proximo;
	lista->primeiro->proximo->anterior = aux;
	
	lista->primeiro->proximo = aux;
	aux->anterior = lista->primeiro;
	
	aux->elemento = chave;

}

void retirarInicio(Lista *lista) {
	
	if(ChecaLDEVazia(*lista))	{
		printf("Lista vazia...");
	}
	else{
		
		Celula *aux;
		aux = lista->primeiro->proximo;

		lista->primeiro->proximo = aux->proximo;
		aux->proximo->anterior = lista->primeiro;
	
		free(aux);
	}

}

void inserirPosicao(Lista *lista,Item x, int pos) {
	
	if(ChecaLDEVazia(*lista) || pos == 0)	{
		insereInicio(lista,x);
	}
	else{
		Celula *aux,*aux2;
		aux= lista->primeiro->proximo;
		
		int count =0;
		while(count<pos){
			aux = aux->proximo;
			count++;
		}
		
		if(aux->proximo == NULL){
			InsereFinalLDE(lista, x);
		}
			
		aux2 = (Celula*) malloc(sizeof(Celula));
		aux2->elemento = x;
		aux2->proximo = aux;
		aux2->anterior = aux->anterior;
		aux->anterior->proximo = aux2;
		aux->anterior = aux2;
			
	}
	
}

void retiraPosicao (Lista *lista,Item *elemento,int pos) {
	if(ChecaLDEVazia(*lista))	{
		printf("Lista vazia...");
	}
	else{
		
		Celula *aux,*aux2;
		aux= lista->primeiro->proximo;
		
		if(aux->proximo == NULL)
			retirarInicio(lista);
			
		else{
			
			int count =0;
			
			while(count<pos){
				aux = aux->proximo;
				count++;
			}
			
			if(aux->proximo == NULL)
				retirarFinal(lista,elemento);
				
			aux2 = aux->proximo;
			aux2->anterior = aux->anterior;
			aux->anterior->proximo = aux2;
			
			free(aux);
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
	printf("\n");
	
	imprimirListaAnt(l1);
	
	//retirarFinal(&l1,&x);
	printf("\n");
	//imprimirListaProx(l1);
	
	x.chave = 70;
	insereInicio(&l1,x);
	imprimirListaProx(l1);
	
	printf("\n");
	retirarInicio(&l1);
	imprimirListaProx(l1);
	
	printf("\n");
	x.chave = 70;
	inserirPosicao(&l1,x,1);
	imprimirListaProx(l1);
	
	printf("\n");
	printf("\n");
	retiraPosicao(&l1,&x,1);
	imprimirListaProx(l1);
	
	
}

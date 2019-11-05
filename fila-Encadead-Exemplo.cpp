#include<stdio.h>
#include<stdlib.h>

typedef struct{
	int chaves;
}Item;

typedef struct Celula{
	Item elemento;
	Celula *proximo;
}Celula;

typedef struct{
	Celula *frente,  *tras;
}Fila;

void CriarFilaVazia(Fila *fila){
	fila->frente = (Celula*)malloc(sizeof(Celula));
	fila->tras = fila->frente;
	fila->frente->proximo = NULL;
}

int VerificaFilaVazia(Fila *fila){
	return (fila->frente == fila->tras);
}

void enfileira(Fila *fila, Item x){

	fila->tras->proximo = (Celula *)malloc(sizeof(Celula));
	fila->tras = fila->tras->proximo;
	fila->tras->elemento = x;
	fila->tras->proximo = NULL;

}

void desenfileira(Fila *fila, Item *x)
{
	Celula *aux;
	if(VerificaFilaVazia(fila)){
		printf("Fila vazia.\n");
	}
	else{
		aux = fila->frente->proximo;
		fila->frente->proximo = aux->proximo;
		*x = aux->elemento;
		if(aux->proximo == NULL){
			fila->tras = fila->frente;
		}
		free(aux);
	}
}

void imprimirFila(Fila fila){
	Celula *aux;
	aux = fila.frente->proximo;
	
	while(aux != NULL)
	{
		printf(" %d ",aux->elemento.chaves);
		aux = aux->proximo;
	}
}

void CopiaFila(Fila fila,Fila fila2){
	Celula *aux;
	aux = fila.frente->proximo;
	Item item;
	
	
	
	while(aux!= NULL)
	{
	
		item = aux->elemento;
		enfileira(&fila2,item);
		aux = aux->proximo;
		desenfileira(&fila,&item);

	}
	
	imprimirFila(fila2);
}

int main(){
	Fila fila,fila2;
	Item num;
	
	CriarFilaVazia(&fila);
	CriarFilaVazia(&fila2);
	VerificaFilaVazia(&fila);
	
	int aux=0;
	while(aux<3)
	{	
		printf("\nDigite um numero: ");
		scanf("%d",&num.chaves);
		enfileira(&fila,num);
		aux++;
	}
	
	printf("\nAntes de Copiar: \n");
	imprimirFila(fila);
	
	printf("\nDepois de Copiar: \n");
	//desenfileira(&fila,&num);
	CopiaFila(fila,fila2);
	//imprimirFila(fila2);
}

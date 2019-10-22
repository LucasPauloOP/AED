#include<stdlib.h>
#include<stdio.h>
#include<conio.h>


typedef struct {
	int chave;
	
}Item;

typedef struct Celula {
	Item elemento;
	Celula *proximo;
}Celula;

typedef struct{
	Celula *fundo,*topo;
	int tamanho;
}Pilha;

void criarPilhaVazia(Pilha *pilha){
	
	pilha ->topo = (Celula *) malloc(sizeof(Celula));
	pilha->fundo = pilha->topo;
	pilha->fundo->proximo = NULL;
	pilha->tamanho = 0;
	
}//cria pilha vazia

int verificaPilhaVazia (Pilha *pilha){
	return (pilha->topo == pilha->fundo);
}

void empilhar(Pilha *pilha, Item chave)
{
	Celula *aux;
	aux = (Celula*)malloc(sizeof(Celula));
	pilha->topo->elemento = chave;
	aux->proximo = pilha->topo;
	pilha->topo = aux;
	pilha->tamanho++;
}

void desempilhar(Pilha *pilha, Item *x)
{
	Celula *aux;
	if(verificaPilhaVazia(pilha))
		printf("\nPilha Vazia.\n");
	else{
		aux = pilha->topo;
		pilha->topo = aux->proximo;
		*x = aux->proximo->elemento;
		free(aux);
		pilha->tamanho--;
	}	
}

int main(){
	Pilha pilha;
	Item chave;
	int qtd;
	
	criarPilhaVazia(&pilha);
	verificaPilhaVazia(&pilha);
	
	printf("\nQuantos elementos voce ira empilhar: ");
	scanf("%d",&qtd);
	
	int aux=0;
	while(aux<qtd)
	{
		printf("\nDigite uma quantidade: ");
		scanf("%d",&chave.chave);
		empilhar(&pilha,chave);
		aux++;
	}
	
	aux=0;
	printf("\nAntes de desempilhar: %d\n",pilha.topo->proximo->elemento.chave);
	printf("\nDesempilhando....");
	while(aux<qtd)
	{
		desempilhar(&pilha,&chave);
		printf("\nPilha: %d",pilha.topo->elemento.chave);
		aux++;
	}
	
}

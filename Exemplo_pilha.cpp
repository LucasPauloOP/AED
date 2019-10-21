#include<stdio.h>
#include<stdlib.h>
#define max 1000

typedef struct{
	int chave;
}Item;

typedef struct{
	Item item[max];
	int topo;
}Pilha;

void criarPilhaVazia(Pilha *pilha){
	pilha->topo =0;
	
}//Cria uma pilha vazia

int verificaPVazia(Pilha pilha){
	return (pilha.topo == 0);
	
}//Verifica se a pilha está vazia.

void empilha(Item x, Pilha *pilha)
{
	if(pilha->topo == max)
	{
		printf ("Erro: Pilha está cheia.\n");
	}
	else{
		pilha->item[pilha->topo] = x;
		pilha->topo++;
	}
}//Empilha

void desempilha(Pilha *pilha,Item *item){
	if(verificaPVazia(*pilha))
		printf("\nErro: Pilha está vazia.\n");
	
	else{
		*item = pilha->item[pilha->topo-1];
		pilha->topo--;
	}
}//Desempilha.

int main(){
	Item num;
	Pilha pilha;
	
	criarPilhaVazia(&pilha);
	verificaPVazia(pilha);
	
	for(int aux=0;aux<3;aux++){
		printf("Digite um numero: ");
		scanf("%d",&num.chave);
		empilha(num,&pilha);
	}
	
	printf("\nAntes de desempilhar: %d\n",pilha.item[max].chave);
	
	desempilha(&pilha,&num);
	
	printf("\nDepois de desempilhar: %d\n",pilha.item[max].chave);	
}

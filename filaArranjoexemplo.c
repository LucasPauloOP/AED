#include<stdlib.h>
#include<stdio.h>
#define MaxTam 1000

typedef struct {
	int Chave;
	/* outros componentes */
}Item;

typedef struct {
	Item item[MaxTam];
	int Frente, Tras;
}Fila;





void FFVazia(Fila *fila)
{
	fila->Frente = 1;
	fila->Tras = fila->Frente;
}

int Vazia(Fila fila){
	return (fila.Frente == fila.Tras);
}

void enfileira(Item x, Fila *fila){
	if(fila->Tras % MaxTam + 1 == fila->Frente )
		printf("Erro: fila cheia\n");
	
	else{
		fila->item[fila->Tras - 1 ] = x;
		fila->Tras = fila->Tras % MaxTam + 1;
	}
}

void Desenfileira(Fila *fila, Item *item){
	if(Vazia(*fila))
		printf("Erro fila esta vazia\n");
		
	else{
		*item = fila->item[fila->Frente - 1];
		fila->Frente = fila->Frente % MaxTam + 1;
	}
}

void imprimirFila(Fila *fila){
	while(!Vazia(*fila)){
		printf("\n%c",fila->item[fila->Frente-1].Chave);
		Desenfileira(fila,fila->item);
	}
}

int main()
{
	Fila f1;
	Item x;
	
	FFVazia(&f1);
	
	x.Chave = 'A';
	enfileira(x,&f1);
	
	x.Chave = 'B';
	enfileira(x,&f1);
	
	//Desenfileira(&f1,&x);
	imprimirFila(&f1);
	
}

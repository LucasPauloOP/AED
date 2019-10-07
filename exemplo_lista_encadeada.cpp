#include<stdio.h>
#include<stdlib.h>

typedef struct{//struct que da os elementos
	int chave;
}Item;

typedef struct Celula{//struct que define o conteudo das celulas
	Item elemento;
	Celula *proximo;
}Celula;

typedef struct{//struct de controle
	Celula *primeiro,*ultimo;
}Lista;


void criaListaVazia(Lista *lista){//cria uma lista vazia (com cabeça)
	lista->primeiro = (Celula*) malloc(sizeof(Celula));
	lista->ultimo = lista->primeiro;
	lista->primeiro->proximo = NULL;
}

int checkList(Lista *lista){//checa se a lista se encontra vazia
		
	return (lista->primeiro == NULL && lista->ultimo == NULL);
	
}

void insertEnd (Lista *list, Item x)//insere um elemento no final da lista
{
	list->ultimo->proximo = (Celula*) malloc(sizeof(Celula));
	list->ultimo = list->ultimo->proximo;
	list->ultimo->elemento = x;
	list->ultimo->proximo = NULL;
}

void printList(Lista *list)//função para mostrar todos os elementos da lista
{

	while(list->ultimo->proximo==NULL)
	{
		list->primeiro = list->primeiro->proximo;
		printf("%d-",list->primeiro->elemento);
		
	}
}

int main()
{
	Lista list;//variavel da lista
	Item x;//variavel do elemento
	
	criaListaVazia(&list);//cria lista na variavel lista(passando a como referencia)
	
	if(!checkList(&list))//checa se a lista se encontra vazia
	{
		printf("\nLista vazia");
	}
	else
	if(checkList(&list))
	{
		printf("\nuai");
	}
	
	for(int aux=0;aux<3;aux++)
	{
		printf("\nDigite um numero: ");
		scanf("%d",&x.chave);
		insertEnd(&list,x);//insere elemento no final da lista que é passada por referencia
		
	}
	
	printList(&list);//mostra os elementos da lista que é passada por referencia
	
	if(list.primeiro == NULL && list.ultimo == NULL)//checa se é vazia
	{
		printf("\nLista vazia");
	}
	else
	{
		printf("\nuai");
	}
	
}

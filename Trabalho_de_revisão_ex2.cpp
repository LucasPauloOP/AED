#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<locale.h>

typedef struct {
	
	char cidadeOrigem[30];
	char cidadeDestino[30];
	char data[10];
	char partida[10];
	char chegada[10];
	int valor;
	
}Voo;

int main()
{
	setlocale(LC_ALL,"portuguese");
	Voo *v;
	
	v = (Voo*) malloc(sizeof(Voo*));
	
	printf("\nDigite a cidade de origem: ");
	gets(v->cidadeOrigem);
	
	printf("\nDigite a cidade de destino: ");
	gets(v->cidadeDestino);
	
	printf("\nDigite a data de partida: ");
	gets(v->data);
	
	printf("\nDigite a horário de partida: ");
	gets(v->partida);
	
	printf("\nDigite a horário de chegada: ");
	gets(v->chegada);
	
	printf("\nDigite o valor da passagem: ");
	scanf("%d",&v->valor);
	
	printf("\nA cidade de origem digitada foi: %s",v->cidadeOrigem);
	printf("\nA cidade de chegada digitado foi: %s",v->cidadeDestino);
	printf("\nA data digitada foi: %s",v->data);
	printf("\nA horário de partida digitada foi: %s",v->partida);
	printf("\nA horário de chegada digitada foi: %s",v->chegada);
	printf("\nO valor da passagem digitada foi: R$ %d",v->valor);
	
}

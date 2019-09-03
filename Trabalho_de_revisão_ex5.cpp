#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<locale.h>

typedef struct {
	
	char nome[30];
	int matricula;
	int notas[3];
	
}Aluno;

void ler_dados(Aluno*a){
	
	int aux=0,aux2=0;
	

	
	
		aux=0;
	while(aux<5){
		
		fflush(stdin);
		system("cls");
		
		printf("\nDigite um nome: ");
	
		gets(a[aux].nome);
		
		printf("\nDigite a matricula do aluno: ");
	
		scanf("%d",&a[aux].matricula);
		
		for(aux2=0;aux2<3;aux2++){
			printf("\nDigite as notas do aluno: ");
		
			scanf("%d",&a[aux].notas[aux2]);
		}
	
		
		aux++;
	}
	
}

void mostrar_dados(Aluno*a)
{
	int aux=0;
	while(aux<5){
		
		printf("\nO nome digitado foi: %s",a[aux].nome);
		printf("\nA matricula digitada foi: %d",a[aux].matricula);
		for(int aux2=0;aux2<3;aux2++){
			printf("\nAs notas digitada foi: %d",a[aux].notas[aux2]);
		}
		
			
		aux++;
	}
	
}

int main()
{
	setlocale(LC_ALL,"portuguese");
	Aluno *a;

	a = (Aluno*) malloc(sizeof(Aluno)*5);
	
	ler_dados(a);
	mostrar_dados(a);
	
}

#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<locale.h>

typedef struct {
	
	char nome[30];
	float altura;
	float peso;
	int  idade;
	char nascimento[10];
	char sexo[2];
	
}Pessoal;

int main()
{
	setlocale(LC_ALL,"portuguese");
	Pessoal *p;
	
	p = (Pessoal*) malloc(sizeof(Pessoal)*5);
	
	int aux=0;
	while(aux<5){
		fflush(stdin);
		system("cls");
		
		printf("\nDigite um nome: ");
		gets(p[aux].nome);
	
		printf("\nDigite F para sexo feminino e M para sexo masculino: ");
		gets(p[aux].sexo);
		
		printf("\nDigite uma data: ");
		gets(p[aux].nascimento);
		
		printf("\nDigite a idade da pessoa: ");
		scanf("%d",&p[aux].idade);

		printf("\nDigite a sua altura: ");
		scanf("%f",&p[aux].altura);
		
		printf("\nDigite o seu peso: ");
		scanf("%f",&p[aux].peso);
		
		aux++;
	}
	
	aux=0;
	while(aux<5){
		
		printf("\nO nome digitado foi: %s",p[aux].nome);
		printf("\nO sexo digitado foi: %s",p[aux].sexo);
		printf("\nA data digitada foi: %s",p[aux].nascimento);
		printf("\nA idade digitada foi: %d",p[aux].idade);
		printf("\nA altura digitada foi: %2.f",p[aux].altura);
		printf("\nO peso digitado foi: %2.f",p[aux].peso);
			
		aux++;
	}
	

	
}

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<locale.h>

typedef struct {
	
	char nome[30];
	char sexo[2];
	int  idade;
	float altura;
	
}Pessoa;

int main()
{
	setlocale(LC_ALL,"portuguese");
	Pessoa p;
	
	printf("\nDigite um nome: ");
	gets(p.nome);
	
	printf("\nDigite F para sexo feminino e M para sexo masculino: ");
	gets(p.sexo);
	
	printf("\nDigite a idade da pessoa: ");
	scanf("%d",&p.idade);
	
	printf("\nDigite a sua altura: ");
	scanf("%f",&p.altura);
	
	printf("\nO nome digitado foi: %s",p.nome);
	printf("\nO sexo digitado foi: %s",p.sexo);
	printf("\nA idade digitada foi: %d",p.idade);
	printf("\nA altura digitada foi: %2.f",p.altura);
	
}

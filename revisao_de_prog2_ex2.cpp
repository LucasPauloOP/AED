//2) Ler o nome de dois candidatos e as notas deles. Escrever o nome do aluno com maior nota.

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	int v[2];
	char alunos[2][30];
	
	int aux = 0;
	while(aux<2){
		
		printf("\nDigite o nome do aluno: ");
		fflush(stdin);
		gets(alunos[aux]);
	
		printf("\nDigite a nota do aluno: ");
		fflush(stdin);
		scanf("%d",&v[aux]);
		
		aux++;
	}
	
	int maior = v[0];
	int aluno = 0;
	
	aux=0;
	while(aux < 2){
		
		if(v[aux] > maior)
		{
			aluno =aux;
		}
		aux++;
	}
	
	printf("\nO aluno com a maior nota foi %s que tirou %d.",alunos[aluno],v[aluno]);
	
}

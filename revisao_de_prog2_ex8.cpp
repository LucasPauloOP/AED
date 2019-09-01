/*8)	Ler uma lista de notas de alunos e calcular: a média, a maior e a menor nota e quantos alunos
 tiraram acima de 9. (O fim da lista é indicado por -1). 
 
 Obs: Não implementar este programa utilizando vetor (matriz).

Exemplo:
| 5 | 7 | 6.3 | 9.5 | 10 | 4.5 | 7 | -1

Maior: 10
Menor: 4.5
Média: 7
Acima de 9: 2 alunos
*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	char alunos[30];
	int materias;
	
	int opc=0;

	float maior,menor,media=0;
	
	while(opc!=-1)
	{
	
		printf("Digite o nome do aluno: ");
		gets(alunos);
		
		printf("Quantas notas irao ser colocadas: ");
		scanf("%d",&materias);
		
		int notas[materias];
		
		for(int aux = 0 ; aux < materias ; aux++)
		{
			printf("Digite a nota do aluno na materia %d: ",aux+1);
			scanf("%d",&notas[aux]);
		}
		
		maior=notas[0];
		menor=notas[0];
		for(int aux = 0 ; aux < materias ; aux++)
		{
			if(maior < notas[aux])
			{
				maior = notas[aux];
			}
			
			if(menor > notas[aux])
			{
				menor = notas[aux];
			}
			media += notas[aux];
		}
		
		media /= materias;
		
		printf("\nA maior nota do %s foi : %.2f\nA menor nota do %s foi: %.2f\nA média do %s foi: %.2f",alunos,maior,alunos,menor,alunos,media);
		
		printf("\nDigite -1 caso queira parar de listar");
		scanf("%d",&opc);
	}

}

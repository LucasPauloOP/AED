//Revis�o das materias anteriores 2019 prog 2

//1)Ler 3 N�s e escrever o maior valor deles. N�o precisa considerar casos especiais de N�s iguais.

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>

int main ()
{
	setlocale(LC_ALL,"portuguese");
	
	int v[3];
	
	int aux = 0;
	while(aux<3){
		
		printf("\nDigite um n�mero: ");
		scanf("%d",&v[aux]);
		
		aux++;
	}

	int maior = v[0];
	
	aux=0;
	while(aux < 3){
		
		if(v[aux] > maior)
		{
			maior = v[aux];
		}
		aux++;
	}
	
	printf("\nO maior n�meor �: %d",maior);
	
}

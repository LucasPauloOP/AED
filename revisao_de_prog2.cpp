//Revisão das materias anteriores 2019 prog 2

//1)Ler 3 Nºs e escrever o maior valor deles. Não precisa considerar casos especiais de Nºs iguais.

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
		
		printf("\nDigite um número: ");
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
	
	printf("\nO maior númeor é: %d",maior);
	
}

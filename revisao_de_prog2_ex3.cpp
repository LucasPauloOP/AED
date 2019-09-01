/* 3)Ler a temperatura e dizer se está quente ou frio. Considere que uma temperatura acima de 30 é quente, abaixo frio e igual normal.*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main ()
{
	setlocale(LC_ALL,"portuguese");
	int temp;
	
	printf("\nDigite uma temperatura: ");
	scanf("%d",&temp);
	
	if(temp>30)
	{
		printf("O dia está quente");
	}
	else
	if(temp<30){
		printf("O dia está frio");
	}
	else{
		printf("O dia está normal");
	}
}

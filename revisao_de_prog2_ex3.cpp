/* 3)Ler a temperatura e dizer se est� quente ou frio. Considere que uma temperatura acima de 30 � quente, abaixo frio e igual normal.*/

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
		printf("O dia est� quente");
	}
	else
	if(temp<30){
		printf("O dia est� frio");
	}
	else{
		printf("O dia est� normal");
	}
}

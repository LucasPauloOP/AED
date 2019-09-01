/*4)Ler a dist�ncia percorrida e o tempo gasto. Escrever LENTO, NORMAL e R�PIDO, 
caso a velocidade m�dia est� abaixo de 60km/h, entre 60 e 100, ou acima de 100 km/h. Dica: 
para calcular a velocidade deve-se fazer "dist�ncia/tempo". V=d/t.*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	int dist,temp,v,min;
	
	printf("Digite a dist�ncia percorrida em km: ");
	scanf("%d",&dist);
	
	printf("Digite quantas horas gastou: ");
	scanf("%d",&temp);
	
	printf("Digite quantos minutos gastou: ");
	scanf("%d",&min);
	
	min *= 60;
	temp += min;
	
	v = dist/temp;
	
	if(v<60){
		printf("LENTO");
	}
	else
	if(v<100){
		printf("NORMAL");
	}
	else{
		printf("R�PIDO");
	}
}

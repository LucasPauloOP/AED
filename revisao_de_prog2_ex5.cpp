/*5)Criar um programa que escreva todos os Nºs ímpares de 1 a n.*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int imp;
	
	printf("Digite a quantidade final de numeros da sequencia \nLEMBRANDO que irá aparecer apenas os números ímpares: ");
	scanf("%d",&imp);
	

	int res=0;
	for(int aux = 0;aux <= imp; aux++)
	{
	
		if( aux%2 == 1)
		{
			printf(" %d-",aux);
		}
	
	}
	
}

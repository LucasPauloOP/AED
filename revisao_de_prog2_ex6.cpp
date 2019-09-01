//6)Criar um programa que calcule a soma dos 10 primeiros Nº naturais.

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int val=0;
	
	for(int aux=0;aux <= 10;aux++)
	{
		val += aux;
	}
	
	printf("O resultado da soma de todos os numeros naturais é: %d",val);
	
}

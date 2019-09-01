
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	printf("a)");
	for(int aux = 1;aux <=	 20; aux++)
	{
		printf("X");
		if(aux%4 == 0)
		{
			printf("\n");
		}
	}
	printf("\n");
	printf("b)");
	for(int aux = 1;aux <= 5; aux++)
	{
		for(int aux2 = 1; aux2 <= aux; aux2++){
			printf("X");
		}
		printf("\n");
	}
}

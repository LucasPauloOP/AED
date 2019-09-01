#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<locale.h>

typedef struct {
	
	char nome[30];
	int tel;
	
}Registro;

int main()
{
	setlocale(LC_ALL,"portuguese");
	Registro *r;
	
	r = (Registro*) malloc(sizeof(Registro*)*5);
	
	int aux=0;
	while(aux<5){
		fflush(stdin);
		
		printf("\nDigite o nome do registro %d: ",aux+1);
		gets(r[aux].nome);
		
		printf("\nDigite o telefone do registro %d: ",aux+1);
		scanf("%d",&r[aux].tel);
		
		aux++;
	}
	
	Registro r2;
	int min;
	
	for (int i=0; i<5-1; i++){
	        min = i;
	        
	    for (int j=i+1; j<5; j++){
	    	
	       	 if (strcmp(r[j].nome,r[min].nome)<0)
	        	min = j;	         
	    }
	    
		r2 = r[min];
	    r[min] = r[i];
		r[i] = r2;
		
	}
	
	aux=0;
	while(aux<5){
		printf("\nNome do registro: %s",r[aux].nome);
		aux++;
	}
	

	
}

/**/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){

    int va[5],vb[5];
    int s[5];

    for(int aux = 1; aux <= 5; aux++){

        printf("\nDigite os valores do vetor A: ");
        scanf("%d",&va[aux]);

    }

    for(int aux = 1; aux <= 5; aux++){

         printf("\nDigite os valores do vetor B: ");
         scanf("%d",&vb[aux]);

    }
   
   for(int aux=1;aux<=5;aux++)
   {
       s[aux] = va[aux] + vb[aux];
   }
    

    for(int aux=1;aux<=5;aux++)
   {
        printf("\nA soma de cada elemento do vetor sao: %d",s[aux]);
   }

	int w[10],aux2=1,aux3=1;
     for(int aux=1;aux<=10;aux++)
    {
    	
       if(aux % 2 == 0)
       {
       		w[aux] = va[aux3];
       		aux3++;
	   }
	    
	    if(aux % 2 == 1)
	    {
	    	w[aux] = vb[aux2];
	    	aux2++;
		}
		
    }

  	 for(int aux=1;aux<=10;aux++)
	{
       printf("\nvetores intercalados: %d",w[aux]);
    }
    
    
	int z[5];
   for(int aux=5;aux>0;aux--)
   {
       z[aux] = va[aux];
   }

     for(int aux=5;aux>0;aux--)
    {
       printf("\nVetor 'a' invertido: %d",z[aux]);
    }
    
    int o[5];
    for(int aux=1;aux<=5;aux++)
    {
    	for(int aux2=1;aux2<=5;aux2++)
    	{
    		if(va[aux] == vb[aux2])
      		{
       			o[aux] = vb[aux2];
	  		}
		}
    }

 	 for(int aux=1;aux<=5;aux++)
    {
       printf("\nOs numeros comuns entre 'a' e 'b' sao: %d",o[aux]);
    }


  int y[10];
  aux2=1;
  aux3=1;
     for(int aux=1;aux<=10;aux++)
    {
    	
       if(aux <= 5)
       {
       		y[aux] = va[aux3];
       		aux3++;
	   }
	   
	    else{
	    	y[aux] = vb[aux2];
	    	aux2++;
		}
		
    }

  for(int aux=1;aux<=10;aux++)
    {
       printf("\nUniao dos vetores: %d",y[aux]);
    }
    
     aux3=va[1];
  for(int aux=1;aux<=5;aux++)
    {
    	for(int aux2=1;aux2<=5-1;aux2++)
    	{
    		if(va[aux2]>va[aux])
    		{
    			aux3 = va[aux2];
    			va[aux2] = va[aux];
    			va[aux] = aux3;
    		
			}
		}
       
    }

  for(int aux=1;aux<=5;aux++)
    {
       printf("\nordenacao dos vetores: %d",va[aux]);
    }
    

}

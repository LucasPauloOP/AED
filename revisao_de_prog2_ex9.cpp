/*9)Crie um menu utilizando switch para que o usuário possa escolher 5 funcionalidades de um sistema: 
Cadastrar, Relatórios, Vender, Comprar, Sair. 
Obs: As funcionalidades não precisam ser implementadas.Vamos somente revisão o uso de switch
*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");

	int opc=0;


		do{
			printf("#########################");
			printf("\n#\t1-Cadastrar\t#");
			printf("\n#\t2-Relatórios\t#");
			printf("\n#\t3-Vender\t#");
			printf("\n#\t4-Comprar\t#");
			printf("\n#\t5-Sair\t\t#");
			printf("\n#########################");
			scanf("%d",&opc);
			
			switch(opc)
			{
				case 1:printf("\nCadastrar\n");
				break;
				
				case 2:printf("\nRelatórios\n");
				break;
				
				case 3:printf("\nVender\n");
				break;
				
				case 4:printf("\nComprar\n");
				break;
				
				case 5:printf("\nSair\n");
				break;
				
				 default:
       		 		printf("\nNúmero inválido\n");
      	 		 break;
			}
		}while(opc!=5);
		

}

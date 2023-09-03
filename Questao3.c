/*Faça um programa que receba 3 números inteiros positivos e em seguida apresente o seguinte menu para o usuário:

Escolha uma das opções:
1 -  Mostre os números em ordem crescente
2 -  Mostre os números em ordem decrescente
3 - Mostre o menor número entre os demais.

De acordo com a opção escolhida, 1, 2 ou 3, mostre o resultado pedido.

Obs.: 
- os número devem ser separados por hífen ( - ), veja exemplo a seguir;
- considerando os números 30, 50 e 60, a opção 3 irá mostrar 50 - 30 - 60 ou 60 - 30 - 50.
*/
#include <stdio.h>
#include "lancarErro.h"
int main(){

	int n1,n2,n3,opcao;
	
	
	while(1){

		
		printf("Digite o número 1: ");
		if(scanf("%i", &n1) == 0){
			lancarErro();
			continue;
		}
		
		printf("Digite o número 2: ");
		if(scanf("%i", &n2) ==0){
			lancarErro();
			continue;
		}
		
		printf("Digite o número 3: ");
		if(scanf("%i", &n3) == 0){
			lancarErro();
			continue;			
		};
		
		printf(" Escolha uma das opções\n");
		printf(" 1 - Mostre os números em ordem crescente\n");
		printf(" 2 - Mostre os números em ordem decrescente\n");
		printf(" 3 - Mostre o menor número entre os demais.\n");
		
		if(scanf("%i",&opcao) == 0){
			lancarErro();
			continue;
		};
		if(opcao == 1){
			if(n1 < n2 && n1 < n3){
				printf("%i - ", n1);
				if(n2 < n3){
					printf("%i - %i",n2,n3);
				}else{
					printf("%i - %i",n3,n2);
				}
			}else if(n2 < n1 && n2 < n3){
				printf("%i - ", n2);
				if(n1 < n3){
					printf("%i - %i",n1,n3);
				}else{
					printf("%i - %i",n3,n1);
				}
			}else if(n3 < n1 && n3 < n2){
				printf("%i - ", n3);
				if(n2 < n1){
					printf("%i - %i",n2,n1);
				}else{
					printf("%i - %i",n1,n2);
				}
			}
		}else if(opcao == 2){
			if(n1 > n2 && n1 > n3){
				printf("%i - ", n1);
				if(n2 > n3){
					printf("%i - %i",n2,n3);
				}else{
					printf("%i - %i",n3,n2);
				}
			}else if(n2 > n1 && n2 > n3){
				printf("%i - ", n2);
				if(n1 > n3){
					printf("%i - %i",n1,n3);
				}else{
					printf("%i - %i",n3,n1);
				}
			}else if(n3 > n1 && n3 > n2){
				printf("%i - ", n3);
				if(n2 > n1){
					printf("%i - %i",n2,n1);
				}else{
					printf("%i - %i",n1,n2);
				}
			}
		}else if(opcao == 3){
			if(n1 < n2 && n1 < n3){
				printf("%i - %i - %i", n3, n1, n2);
			}else if(n2 < n1 && n2 < n3){
				printf("%i - %i - %i",n3, n2, n1);
				
			}else if(n3 < n1 && n3 < n2){
				printf("%i - %i - %i", n1, n3, n2);
				
			}
			
			
		}else{
			printf("Opção inválida");
			setbuf(stdin,NULL);
			continue;
		}
		
		printf("\n");
		
	}
	
	return 0;
}
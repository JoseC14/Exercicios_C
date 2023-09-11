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

void lancarErro(){
    char c;
    while( c = getchar() != '\n');
    printf("Tipo de Entrada Inválido\n");
}

int main(){
	int numeros[3];
	int temp;
	int n1,n2,n3,opcao;
	
	
	while(1){

		
		printf("Digite o número 1: ");
		if(scanf("%i", &numeros[0]) == 0){
			lancarErro();
			continue;
		}
		
		printf("Digite o número 2: ");
		if(scanf("%i", &numeros[1]) ==0){
			lancarErro();
			continue;
		}
		
		printf("Digite o número 3: ");
		if(scanf("%i", &numeros[2]) == 0){
			lancarErro();
			continue;			
		};
		
		if(numeros[0] == numeros[1] || numeros[1] == numeros[2] || numeros[0] == numeros[2]){
			printf("Erro. Dois números não podem se iguais\n");
			continue;
		}
		printf(" Escolha uma das opções\n");
		printf(" 1 - Mostre os números em ordem crescente\n");
		printf(" 2 - Mostre os números em ordem decrescente\n");
		printf(" 3 - Mostre o menor número entre os demais.\n");
		
		if(scanf("%i",&opcao) == 0){
			lancarErro();
			continue;
		};

		//Utilizando o algoritmo bubble sort...
		if(opcao == 1){

			for(int i = 0; i < 3; i++){
				for(int j = 0; j < 2; j++){
					if(numeros[j]>numeros[j+1]){
						temp = numeros[j + 1];
						numeros[ j + 1] = numeros[j];
						numeros[j] = temp;
					}
				}
			}

			printf("%d - %d - %d",numeros[0],numeros[1],numeros[2]);
	
		}else if(opcao == 2){
			for(int i = 0; i < 3; i++){
				for(int j = 0; j < 2; j++){
					if(numeros[j]<numeros[j+1]){
						temp = numeros[j +1];
						numeros[ j +1] = numeros[j];
						numeros[j] = temp;
					}
				}
			}
			

			printf("%d - %d - %d",numeros[0],numeros[1],numeros[2]);
			
		}else if(opcao == 3){
			for(int i = 0; i < 3; i++){
				for(int j = 0; j < 2; j++){
					if(numeros[j]<numeros[j+1]){
						temp = numeros[j +1];
						numeros[ j +1] = numeros[j];
						numeros[j] = temp;
					}
				}
			}

			printf("%d - %d - %d",numeros[1],numeros[2],numeros[0]);
		}else{
			printf("Opção inválida");
			setbuf(stdin,NULL);
			continue;
		}
		
		printf("\n");
		
	}
	
	return 0;
}
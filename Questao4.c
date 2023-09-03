//Faça um programa que leia um número inteiro positivo até que o usuário digite 0. Para cada número maior que zero, mostre o número e o fatorial do mesmo.
#include <stdio.h>

void lancarErro(){
    char c;
    while( c = getchar() != '\n');
    printf("Tipo de Entrada Inválido\n");
}
int main(){
	
    int num,res;
	
	
	while(1){
		res = 1;
		printf("Digite o número para fazer o fatorial: ");
		
		if(scanf("%i", &num) == 0){
			lancarErro();
			continue;
		};
		
		if(num == 0){
			break;
		}else if(num < 0){
			printf("Número negativo\n");
			continue;
		}else{
			while(num !=0){
				res *= num;
				num--;
			}
			
			printf("Resultado do Fatorial: %i \n", res);
		}
	
	}
	
	printf("Fim do programa\n");
	return 0;
}
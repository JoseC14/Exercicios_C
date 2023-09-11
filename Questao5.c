

/*
Faça um programa que receba as idades, pesos e alturas de dez pessoas, calcule e mostre:

1) a média das idades das dez pessoas;

2) a quantidade de pessoas com peso superior a 80Kg e altura inferior a 1,50 metro;

3) a porcentagem de pessoas com idade entre 10 e 30 anos entre as pessoas que medem mais de 1,90m.
*/
#include <stdio.h>

void lancarErro(){
    char c;
    while( c = getchar() != '\n');
    printf("Tipo de Entrada Inválido\n");
}

int main(){
	
	int idade, quantPesoMetro, idades,altos,entre;
	float peso, altura, porcetagem, idadeMedia;
	quantPesoMetro = 0;
	idades = 0;
	for(int i = 0; i < 10 ; i++){
		printf("Digite a idade da pessoa %i: ", i + 1);

		if(scanf("%i",&idade) == 0){
			lancarErro();

			i -= 1;
			continue;
		}
		
		printf("Digite o peso: ");
		if(scanf("%f",&peso) == 0){
			lancarErro();

			i -= 1;
			continue;
		}
		
		printf("Digite a altura: ");
		if(scanf("%f", &altura) == 0){
			lancarErro();

			i -= 1;
			continue;
		}
		
		if(peso > 80 && altura < 1.50){
			quantPesoMetro += 1;
		}
		
		if(altura >= 1.90){
			
			altos += 1;	
			if((idade >= 10 && idade <= 30)){
				
			 	entre += 1;
			}
		}
		
		
		
		idades += idade;
	}
			
	idadeMedia =  idades/10;
	
	if(altos != NULL){
		porcetagem =  ((float) entre/altos) * 100;
		printf("porcentagem de pessoas com idade entre 10 e 30 anos entre as pessoas que medem mais de 1,90m: %.2f%%\n", porcetagem);
	}else{
		printf("Não há pessoas com mais de 1.90 de altura\n");
	}
	
    printf("Média das idades %f \n", idadeMedia);
	printf("%i pessoas com peso superior a 80Kg e altura inferior a 1,50 metro\n", quantPesoMetro);
	
	
	return 0;
}
/*

Faça um programa que receba uma hora formada por hora e minutos (um número real), calcule e mostre a quantidade de minutos e a quantidades de segundos equivalentes à hora digitada. 

Observações:
1) o número digitado 15.35 equivale a 15 horas e 35 minutos;
2) as horas vão de 0 a 23;
3) os minutos vão de 0 a 59.

*/

#include <stdio.h>
#include <math.h> 


void lancarErro(){
    char c;
    while( c = getchar() != '\n');
    printf("Tipo de Entrada Inválido\n");
}

int main(){

	float tempo,horas;
	int minutos,segundos;
	
	while(1){
		printf("Digite as horas no formato HH.MM: ");
		
		if (scanf("%f", &tempo) == 0){
			lancarErro();
			continue;
		};
	
		horas = truncf(tempo);	
	    
		minutos  = (int) ((tempo - horas) * 100);
		
		if((horas < 0 || horas >23) || (minutos < 0 || minutos > 59)){
			printf("Tempo inválido\n");
		}else{
			segundos = (int) (horas * 3600) + (minutos * 60);
			minutos = (int) (horas * 60) + minutos;
			
			printf("%i segundos\n",segundos);
			printf("%i minutos\n", minutos);
			
		}
	}
    

	return 0;
	
}
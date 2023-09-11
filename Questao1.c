/*1) Faça um programa que receba um número positivo e maior que zero, calcule e mostre os seguintes resultados com precisão de 2 casas decimais:

1) o número digitado ao quadrado;

2) o número digitado ao cubo;

3) a raiz quadrada do número digitado;

4) a raiz cúbica do número digitado;

5) o resto da divisão do número por 3.
*/

// AVISO: UTILIZE -lm quando for compilar

#include <stdio.h>
#include <math.h>


void lancarErro(){
    char c;
    while( c = getchar() != '\n');
    printf("Tipo de Entrada Inválido\n");
}

int main(){
    float numero;
	float parteDecimal;
	int numeroInteiro;
    double numeroQuadrado,numeroCubo,numeroRaiz,numeroCubica,numeroResto;
	
	while(1){
		
		printf("Digite um número inteiro e positivo: ");
		if(scanf("%f",&numero) == 0){
			lancarErro();
			continue;
		}

		numeroInteiro = (int) numero;
        
		parteDecimal = numero - numeroInteiro;

		if(numero > 0 && parteDecimal == 0){
			
			numeroQuadrado = pow(numero,2.0);		
			printf("%i ao quadrado é %0.2lf \n", numero, numeroQuadrado);
			
			numeroCubo = pow(numero,3.0);		
			printf("%i ao cubo é %0.2lf \n", numero, numeroCubo);
			
			numeroRaiz = sqrt(numero);
			printf("A raiz de quadrada de %i é %0.2lf \n", numero, numeroRaiz);
			
			
			numeroCubica = cbrt(numero);
			printf("A raiz cubica de %i é %0.2lf \n", numero, numeroCubica);
			
			numeroResto = fmod(numero,3.0);
			printf("O resto da divisão de %i por 3 é %0.2lf \n\n", numero, numeroResto);
		}else{
			lancarErro();
		}
	}
	
	
	return 0;
}
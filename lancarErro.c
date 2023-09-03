#include <stdio.h>
#include "lancarErro.h"

void lancarErro(){
    char c;
    while( c = getchar() != '\n');
    printf("Tipo de Entrada Inválido\n");
}
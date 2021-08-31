#include <stdio.h>
#include "struct.h"

void imprimirPersona(ST_PERSONA persona){
    printf("%s\n", persona.nombre);
    printf("%d\n", persona.edad);
}
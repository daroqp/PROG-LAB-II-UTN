#include <stdio.h>
#include <string.h>
#include "struct.h"

void imprimirPersona(ST_PERSONA * persona){
    (*persona).edad = 33;
    strcpy((*persona).nombre, "DARO");
    printf("%s\n", (*persona).nombre);
    printf("%d\n", (*persona).edad);
}
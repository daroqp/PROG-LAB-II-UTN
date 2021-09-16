#include <stdio.h>
#include "struct.h"
#include "string.h"

int main(){

    ST_PERSONA persona;
    strcpy(persona.nombre, "Kokumo");
    persona.edad = 30;

    imprimirPersona(&persona);
}
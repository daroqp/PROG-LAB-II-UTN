#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int legajo;
    int horasTrabajadas;
    int horasAusentes;
    int ausentismo;
}ST_EMPLEADO;

typedef struct nodo {
    ST_EMPLEADO empelado;
    struct nodo *ste;
}ST_NODO;



int main(){

    ST_NODO *lista = NULL;

    FILE *ptrArchivo = fopen("HORAS_DIARIAS.dat", "rb");
    ST_EMPLEADO empelado;

    fread(&empelado, sizeof(ST_EMPLEADO), 1, ptrArchivo);
    while(!feof(ptrArchivo)){
        
    } 

    return 0;
}
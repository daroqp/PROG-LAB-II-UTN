#include <stdio.h>
#include <stdbool.h>

typedef struct nodo{
    int dato;
    struct nodo *ste;
}ST_NODO;

typedef struct {
    char nombreApellido[35];
    int legajo;
    int divisionAsignada;
}ST_ALUMNO;

typedef struct queue{
    ST_NODO *frente;
    ST_NODO *fin;
}ST_QUEUE;

ST_QUEUE create(){
    ST_QUEUE queue;
    queue.frente = NULL;
    queue.fin = NULL;
    return queue;
}

int main(){

    ST_QUEUE queue = create();
    FILE *ptrArchivo = fopen("ARCHIVO.bin", "r");


    ST_ALUMNO alumno[300];
    fread(&alumno, sizeof(ST_ALUMNO), 1, ptrArchivo);

    while(ptrArchivo++ != NULL){
        
    }


    return 0;
}
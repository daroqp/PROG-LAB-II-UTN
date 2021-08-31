#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptrNro;
    printf("Direccion de memoria: %p\nEl valor de la direccion: %d\n", &ptrNro, ptrNro);

    ptrNro = (int *) malloc(sizeof(int));
    printf("Dinamico: %p", ptrNro);
    printf("Valor dinamico: %d", *ptrNro);
    free(ptrNro);
}
#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE *archivoTxt = NULL;
    archivoTxt = fopen("ejemplo.txt", "r");

    if(archivoTxt == NULL){
        printf("Error al abrir el archivo");
        exit(EXIT_FAILURE);
    }

        

    return 0;
}
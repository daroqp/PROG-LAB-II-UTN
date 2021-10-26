#include <stdio.h>

int main(){

    char palabra[6] = "dar9x";
    char *ptr = palabra;

    int i=0;

    char *ptrInicio = palabra+i;
    char *ptrFin = palabra+i;

    printf("%c\n", *(ptrInicio+3));

    int entero = *(ptr+2) - '0';

    if(entero >= 0 && entero <= 9){
        printf("%s", "Es numero");
    } else {
        printf("%s", "NO es numero");
    }


    return 0;
}
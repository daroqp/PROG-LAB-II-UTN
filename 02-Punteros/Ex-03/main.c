#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

    char *miPuntero = (char *) malloc(sizeof(char) * 10);
    strcpy(miPuntero, "HOLA");

    printf("%s\n", miPuntero);
    printf("%p\n", &miPuntero);
    printf("s\n", *miPuntero);
    printf("Actual: %p\n", miPuntero[0]);
    printf("%c\n", miPuntero[0]);
    miPuntero++;
    printf("%c\n", miPuntero[0]);

    return 0;
}
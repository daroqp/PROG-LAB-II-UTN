#include <stdio.h>

int main(){

    int n = 10;
    char vect[] = "Hola mundo";
    float decimal = 20.3;

    printf("El valor es: %d y su posicion de memoria es: %p\n", n, &n);
    printf("El valor es: %f y su posicion de memoria es: %p\n", decimal, &decimal);
    printf("El valor es: %s y si direccion de memoria inicial: %p\n", vect, vect);

    return 0;
}
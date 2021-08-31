#include <stdio.h>

int main()
{
    int nro = 0;
    int vect[10];

    for(int i = 0; i < 10; i++){
        printf("Ingrese un nro: %d\n", i+1);
        scanf("%d", &nro);
        vect[i] = nro;
    }

    
    for(int i = 0; i < 10; i++){
        printf("El numero es %d", &vect[i]);
    }

    return 0;
}
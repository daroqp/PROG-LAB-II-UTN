#include <stdio.h>

int main()
{
    int nro = 0;
    int vect[10] = {1,2,3,4,5,6,7,8,9,10};

    for(int i=1; i<10; i++){
        vect[i] = vect[i] * vect[i-1];
    }

    for(int i = 0; i < 10; i++){
        printf("El numero es %d\n", vect[i]);
    }

    int max = 10 - 1;
    for(int i=0; i< 10/2; i++){
        int aux = vect[i];
        vect[i] = vect[max -i];
        vect[max-i] = aux;
    }
    for(int i = 0; i < 10; i++){
        printf("El numero es %d\n", vect[i]);
    }

    //Terminado

    return 0;
}
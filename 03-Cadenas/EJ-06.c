#include <stdio.h>
#include <stdlib.h>

int main(){
    char *miPuntero = (char *) malloc(sizeof(char) * 80);

    printf("Ingrese una frase: ");
    gets(miPuntero);

    
    int i = 0;    
    int j = 0;
    int cantLetras = 0;
    int cantPalabras = 0;

//    while(miPuntero + i != '\0'){
//        while(miPuntero + j != ' '){
//            cantLetras++;
//            j++;
//        }
//        cantPalabras++;
//        i+=j;
//        i++;
//    }

    

    return 0;
}
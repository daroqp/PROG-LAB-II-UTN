#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

int main(){

    char *palabra = (char*)malloc(sizeof(char) * 80);
    printf("Ingrese una palabra: \n");
    scanf("%s", palabra);

    int longPalabra = strlen(palabra);
    bool flag = true;
    for(int i = 0; i < longPalabra/2; i++){
        if(!(*(palabra+i) == *(palabra+(longPalabra-1-i)))){
            flag = false;
        }
    }

    printf("\n%s", flag ? "Es palindromo" : "No es palindromo");

    return 0;
}
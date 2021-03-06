#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

int largoPalabra(char *palabra){
    int i = 0;
    int cant = 0;
    while (*(palabra+i) != '\0'){
        cant++;
        i++;
    }
    
    return cant;
}

int main(){

    char *palabra = (char*)malloc(sizeof(char) * 80);
    printf("Ingrese una palabra: \n");
    scanf("%s", palabra);

    int longPalabra = largoPalabra(palabra);
    bool flag = true;
    for(int i = 0; i < longPalabra/2; i++){
        if(!(*(palabra+i) == *(palabra+(longPalabra-1-i)))){
            flag = false;
        }
    }

    printf("\n%s", flag ? "Es palindromo" : "No es palindromo");

    return 0;
}
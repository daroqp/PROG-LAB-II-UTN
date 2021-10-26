#include <stdio.h>

int validaTelefono(char *cadena){
    int cantidad = 0;
    while(*(cadena++) != NULL){
        if(*(cadena + cantidad) == 'a' || *(cadena + cantidad) == 'e' || *(cadena + cantidad) == 'i' || *(cadena + cantidad) == 'o' || *(cadena + cantidad) == 'u'){
            cantidad++;
        }
    }
    return cantidad;
}
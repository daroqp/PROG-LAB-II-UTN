#include <stdio.h>

int main() {

    FILE *archivoTxt = NULL;
    archivoTxt = fopen("ejemplo.txt", "r");

    if(archivoTxt == NULL){
        return -1;
    }

        

    return 0;
}
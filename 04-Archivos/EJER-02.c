#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int legajo;
    int nota1;
    int nota2;
}ST_ALUMNO;

int main(){

    FILE *ptrCursoTxt = fopen("CURSO.TXT", "r");
    if(ptrCursoTxt == NULL){
        printf("Error al abrir el archivo");
        exit(EXIT_FAILURE);
    }
    
    FILE *ptrAprobados = fopen("APROBADOS.txt", "w");
    if(ptrAprobados == NULL){
        printf("Error al abrir el archivo\n");
        exit(EXIT_FAILURE);
    }

    char buffer[30];

    fprintf(ptrAprobados, "%s", "Lista de alumnos aprobados\n");
    while(fgets(buffer, 30, ptrCursoTxt) != NULL){
        int legajo = atoi(strtok(buffer, "\t"));
        float token = atof(strtok(NULL, "\t"));
        if(token >= 6){
            fprintf(ptrAprobados, "%d\t%.2f\n", legajo, token);
        }
    }
    
    fclose(ptrCursoTxt);
    fclose(ptrAprobados);

    return 0;
}

//hacer hasta el 9 o 12
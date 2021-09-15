#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int legajo;
    int nota1;
    int nota2;
}ST_ALUMNO;


float calcPromedio(int n1, int n2){
    return (float) (n1 + n2)/2;
}

int main(){
    ST_ALUMNO alumno;    
    FILE *cursoTxt = fopen("CURSO.TXT", "w");

    if(cursoTxt == NULL){
        exit(EXIT_FAILURE);
    }

    printf("Ingrese un alumno: \n");
    scanf("%d", &alumno.legajo);

    while(alumno.legajo > 0){
        printf("Ingrese la primer nota: ");
        scanf("%d", &alumno.nota1);
        printf("Ingrese la segunda nota: ");
        scanf("%d", &alumno.nota2);
        
        fprintf(cursoTxt,"%d %.2f", alumno.legajo, calcPromedio(alumno.nota1,alumno.nota2));

        printf("Ingrese un alumno: \n");
        scanf("%d", &alumno.legajo);
    }

    fclose(cursoTxt);
    
    return 0;
}
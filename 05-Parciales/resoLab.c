#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char codMateria[4];
    int cantAlumnos;
}ST_MATERIA;

typedef struct {
    char codMateria[4];
    char numLegajo[6];
    int nota;
}ST_ALUMNO;

int main(){

    int cantPorNota[11];

    FILE *ptrAlumno = fopen("ALUMNOS.DAT", "rb");

    ST_ALUMNO alumno;  
    fread(&alumno, sizeof(ST_ALUMNO), 1, "ALUMNOS.DAT");

    while(!feof(ptrAlumno)){
        cantPorNota[alumno.nota]++;
        fread(&alumno, sizeof(ST_ALUMNO), 1, "ALUMNOS.DAT");
    }

    for(int i = 0; i < 11; i++){
        printf("Cantidad por notas %d", cantPorNota[i]);
    }

    return 0;
}
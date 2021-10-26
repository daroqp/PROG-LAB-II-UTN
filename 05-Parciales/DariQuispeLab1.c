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

void llenarVectorMaterias(ST_MATERIA materias[]);
ST_ALUMNO alumnoActual(FILE *file);

int main() {

    ST_MATERIA materias[20];
    ST_ALUMNO alumno;

    FILE *ptrAlumno = fopen("ALUMNOS.DAT", "rb");
    if(ptrAlumno == NULL){
        printf("Error al abrir el archivo");
        exit(EXIT_FAILURE);
    }
       
    llenarVectorMaterias(materias);
    int cantApr[20] = {0};    
    int cantDesApr[20] = {0};    
    int cantPorNota[10] = {0};
    int posAlumno = 0;
    for(int i=0; i <20; i++){
        alumno = alumnoActual(ptrAlumno);

        if(materias[i].codMateria == alumno.codMateria){
            if(alumno.nota > 6){
                cantApr[i]++;
            } else {
                cantDesApr[i]++;
            }
        }
        cantPorNota[alumno.nota-1]++;
    }

    for(int i = 0; i < 20; i++){
        printf("Materia %s: - Aprobados %d\% - Reprodaos %d\%\n", materias[i].codMateria, (cantApr[i]*100)/materias[i].cantAlumnos, (cantDesApr[i]*100)/materias[i].cantAlumnos);
    }
    for(int i=0; i<10; i++){
        printf("Cantidad de alumnos con la nota %d son %d\n", i+1, cantPorNota[i]);
    }
    fclose(ptrAlumno);

    return 0;
}

void llenarVectorMaterias(ST_MATERIA *materias){
    FILE *ptrMateria = fopen("MATERIAS.DAT", "rb");
    if(ptrMateria == NULL){
        printf("Error al abrir el archivo");
        exit(EXIT_FAILURE);
    }
    
    char *materia;
    fread(materia, sizeof(ST_MATERIA), 1, ptrMateria);
    int i = 0;
    while(!feof(ptrMateria)){
        strcpy(materias[i].codMateria , (char *)strtok(materia, sizeof(char)*4));
        materias[i].cantAlumnos = atoi(strtok(NULL, materia));
        i++;
    } 
    fclose(ptrMateria);
}


ST_ALUMNO alumnoActual(FILE *file){

    ST_ALUMNO alumno;
    char *alumnoActual;
    fread(alumnoActual, sizeof(ST_ALUMNO), 1, file);
    
    strcpy(alumno.codMateria , (char *)strtok(file, sizeof(char)*4));
    strtok(NULL, sizeof(char)*6);
    alumno.nota = atoi(strtok(NULL, sizeof(int)));

    return alumno;
}
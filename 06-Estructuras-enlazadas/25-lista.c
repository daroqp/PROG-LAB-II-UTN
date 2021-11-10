/*
    Dado un archivo de registros de alumnos ARCHA sin ningún orden donde 
    cada registro contiene: a) Apellido y Nombre del alumno (34 caracteres) 
    b) Número de legajo (6 dígitos) c) División asignada (3 dígitos) 
    Se debe desarrollar el algoritmo y codificación del programa que 
    imprima el listado de alumnos por división ordenado por división y 
    número de legajo crecientes, a razón de 55 alumnos por hoja.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nombreApellido[35];
    int legajo;
    int division;
}ST_ALUMNO;

typedef struct nodo {
    ST_ALUMNO alumno;
    struct nodo *ste;
}ST_NODO;

typedef struct nodo_division {
    int division;
    struct nodo_division *ste;
}ST_NODO_DIVISION;

ST_NODO_DIVISION * search(ST_NODO_DIVISION *list, int dato){
    ST_NODO_DIVISION *listAux = list;
    while(listAux != NULL && listAux->division != dato){
        listAux = listAux->ste;
    }
    return listAux;
}

int main(){

    ST_NODO_DIVISION *list = NULL;
    FILE *ptrAlumno = fopen("ARCHA", "rb");
    ST_ALUMNO alumno;

    fread(&alumno, sizeof(ST_ALUMNO), 1, ptrAlumno);
    while(!feof(ptrAlumno)){

        if(search(list, alumno.division) != NULL){
            
        }

        fread(&alumno, sizeof(ST_ALUMNO), 1, ptrAlumno);
    }

    return 0;
}





ST_NODO_DIVISION *insertOrdered(ST_NODO_DIVISION **listDivision, int division){
    //creacion del nodo
    ST_NODO_DIVISION *nodo = (ST_NODO_DIVISION *) malloc(sizeof(ST_NODO_DIVISION));
    nodo->division = division;
    nodo->ste = NULL;

    ST_NODO_DIVISION *listAux = *list;
    ST_NODO_DIVISION *nodoAnt = NULL;
    while (listAux != NULL && listAux->division){
        nodoAnt = listAux;
        listAux = listAux->ste;
    }

    if(nodoAnt == NULL){
        *list = nodo;
    } else {
        nodoAnt->ste = nodo;
    }
    
    nodo->ste = listAux;
    return nodo;    
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
{
    char apellidoNombre[35];
    int legajo;
    int division;
}ST_ALUMNO;

int main(){

    ST_ALUMNO alumnos[10] = {
        {"Michael Jordan", 23,10},
        {"Scottie Pippen", 33,5},
        {"Isaia Thomas", 12,11},
        {"Karem Abdul", 28,3},
        {"Magic Johnson", 1,5},
        {"Larry Bird", 34,5},
        {"Charles Barkley", 35,3},
        {"Clyde Drexler", 37,10},
        {"Dominique Wilkins", 21,11},
        {"Karl Malone", 00,11}
        };

    
    

    FILE *fileAlumnos = fopen("ARCHA.DAT", "wb");

    for (int i = 0; i < 10; i++)
    {
        fwrite(&alumnos[i], sizeof(ST_ALUMNO), 1, fileAlumnos);
    }

    fclose(fileAlumnos);


    return 0;

}

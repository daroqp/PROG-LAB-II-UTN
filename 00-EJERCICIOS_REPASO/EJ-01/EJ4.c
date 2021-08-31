#include <stdio.h>

typedef struct 
{
    char nombre[10+1];
    int legajo;
    char tramite;
}ST_PERSONA;


int main(){
    
    ST_PERSONA primeraPersona;
    ST_PERSONA persona;
    ST_PERSONA personaLegajoMasBajo;
    int cantidadPersonas = 0;

    while (persona.legajo != 0)
    {
        printf("Ingrese el nombre de la persona: \n");
        scanf("%s", persona.nombre);
        printf("Ingrese el legajo de la persona: \n");
        scanf("%d", &persona.legajo);
        printf("Ingrese el tramite: \n");
        scanf("%s", persona.tramite);

        if(cantidadPersonas == 0){
            
        }       
    }
    

}
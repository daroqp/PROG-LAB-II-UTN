#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nombre[20];
    char apellido[20];
    char email[20];
    char nombreHijo[20];
    char fechaVacunacion[10];
}ST_CLIENTE;

typedef struct {
    char email[20];
    char mensaje[256];
}ST_REGISTRO;

char fechaParseada(char *cliente);
ST_CLIENTE pacienteParseado(char *cliente);
char mensajeArmado(ST_CLIENTE cliente);

int main(){
    
    ST_REGISTRO registro;

    FILE *ptrAgenda = fopen("Agenda.txt", "r");
    if(ptrAgenda == NULL){
        printf("Error al abrir el archivo");
        exit(EXIT_FAILURE);
    }    

    FILE *ptrRegistro = fopen("AltaDeFecha.bin", "wr");
    if(ptrRegistro == NULL){
        printf("Error al abrir el archivo");
        exit(EXIT_FAILURE);
    }

    char *fechaIngresada;
    char *cliente;

    do{
        
        printf("Ingrese una fecha: \n");
        scanf("%s", fechaIngresada);

        while(!eof(ptrAgenda)){
            fgets(&cliente, sizeof(ST_CLIENTE), ptrAgenda);
            char *fecha = fechaParseada(cliente);
        
            if(strcmp(fechaIngresada, fecha) == 0){
                ST_CLIENTE clienteParseado = pacienteParseado(cliente);
                strcpy(registro.email, clienteParseado.email);
                char mensaje[256] = mensajeArmado(clienteParseado);
                strcpy(registro.mensaje, mensaje);
                fwrite(&registro, sizeof(ST_REGISTRO), 1, ptrRegistro);
            }

        }

    }while(fechaIngresada != "c");

   fclose(ptrRegistro);
   fclose(ptrAgenda);


    return 0;
}


 char fechaParseada(char *cliente){
    char buffer[255];
    strcpy(buffer, cliente);      
    strtok(NULL, ' ');
    strtok(NULL, ' ');
    strtok(NULL, ' ');
    return strtok(NULL, ' ');
}

ST_CLIENTE pacienteParseado(char *cliente){
    ST_CLIENTE clienteParseado;
    char buffer[255];
    strcpy(buffer, cliente);      
    strcpy(clienteParseado.nombre, strtok(buffer, cliente));
    strcpy(clienteParseado.apellido, strtok(NULL, cliente));
    strcpy(clienteParseado.email, strtok(NULL, cliente));
    strcpy(clienteParseado.nombreHijo, strtok(NULL, cliente));
    strcpy(clienteParseado.fechaVacunacion, strtok(NULL, cliente));

    return clienteParseado;
}

char mensajeArmado(ST_CLIENTE cliente){
    char mensaje[256] = "Estimado/a ";
    strcpy(mensaje, cliente.nombre);
    strcpy(mensaje, ", el dia ");
    strcpy(mensaje, cliente.fechaVacunacion);
    strcpy(mensaje, "debera vacunar a ");
    strcpy(mensaje, cliente.nombreHijo);
    strcpy(mensaje, " para cumplir con el calendario de vacunacion.");

    return mensaje;
}

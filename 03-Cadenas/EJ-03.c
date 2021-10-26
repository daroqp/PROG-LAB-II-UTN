#include <stdio.h>
#include <stdbool.h>


int main(){
    char numIps[10];
    int i = 0;
    int cant = 0;
    int *ptrInicio = &numIps;
    int *ptrFin = &numIps;

    while(*(numIps + i) != '\0'){
        
        ptrInicio = numIps + i;
        while(*(numIps + i) != '.'){
            ptrFin = numIps + i;
            i++;
        }
        
        if(validToken(numIps, ptrInicio, ptrFin)){
            cant++;
        }
        
        i++;
    }

    printf("%s", cant <= 3 ? "Ip valida" : "Ip no valida");    

    return 0;
}



bool validToken(int *arr, int *vi, int *vf){
    bool flag = true;
    int i = 0;

    while(vi+i <= vf){
        
    }

    return flag;
}
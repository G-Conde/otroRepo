
#include <stdio.h>
#include <stdlib.h>
#include "persona.h"

stPersona cargaPersona(){
    stPersona p;
        printf("Nombre: ");
        fgets(p.nombre,10,stdin);
        printf("Edad: ");
        scanf("%d",&p.edad);
        fflush(stdin);
        printf("Dni: ");
        fgets(p.dni,10,stdin);
return p;
}
int cargaMuchasPersonas(stPersona p[], int v){
    int i=0;
    for(i=0;i<v;i++){
        p[i]=cargaPersona();
    }
return i;
}
void verUnaPersona(stPersona p){
    printf("Nombre: %s\n", p.nombre);
    printf("Edad: %d\n", p.edad);
    printf("Dni: %s\n", p.dni);
}
void verPersonas(stPersona p[], int v){
    for(int i=0;i<v;i++){
        verUnaPersona(p[i]);
    }
}

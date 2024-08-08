#include <stdio.h>
#include <stdlib.h>
#include "adl.h"


int alta(adlCelda celda[], int v, stPaciente dato, stDoctor p){

    int pos= buscaPos(celda,v,p);
    if(pos==-1){
        v=agregarProfesional(celda,v,p);
        pos=v-1;
    }
    celda[pos].dato=agregarAlArbol(celda[pos].dato, cargaArbol(p);
    return v;
}
int buscaPos(adlCelda celda[], int v, stDoctor p){
    int pos=-1;
    int i=0;
    while(pos==-1 && i<v){
        if(celda[i] )
    }


}

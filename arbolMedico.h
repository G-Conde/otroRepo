#ifndef ARBOLMEDICO_H_INCLUDED
#define ARBOLMEDICO_H_INCLUDED
#include "stHospital.h"


typedef struct{
    stPaciente dato;
    nodoArbol* izq;
    nodoArbol* der;
}nodoArbol;

nodoArbol* inicArbol();
nodoArbol* cargaArbol(stPaciente dato);
nodoArbol* agregarAlArbol(nodoArbol* arbol, stPaciente dato);
void verArbol(nodoArbol* arbol);

#endif // ARBOLMEDICO_H_INCLUDED

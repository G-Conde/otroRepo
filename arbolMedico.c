#include <stdio.h>
#include <stdlib.h>
#include "arbolMedico.h"

nodoArbol* inicArbol()
{
    return NULL;
}
nodoArbol* cargaArbol(stPaciente dato)
{
    nodoArbol* nuevo = (nodoArbol*)malloc(sizeof(nodoArbol));
    nuevo->dato=dato;
    nuevo->der=NULL;
    nuevo->izq=NULL;
    return nuevo;
}
nodoArbol* agregarAlArbol(nodoArbol* arbol, stPaciente dato)
{

    if(arbol == NULL)
    {
        arbol=cargaArbol(dato);
    }
    else
    {
        if(dato.socio < arbol->dato.socio)
        {
            arbol->izq=agregarAlArbol(arbol->izq, dato);
        }
        else if(dato.socio > arbol->dato.socio)
        {
            arbol->der=agregarAlArbol(arbol->der, dato);
        }
    }
    return arbol;
}
void verArbol(nodoArbol* arbol)
{
    if(arbol =! NULL)
    {
        verPaciente(arbol->dato);
        verArbol(arbol->izq);
        verArbol(arbol->der);
    }
}

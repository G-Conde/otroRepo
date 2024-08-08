#ifndef ADL_H_INCLUDED
#define ADL_H_INCLUDED
#include "profesional.h"
#include "arbolMedico.h"

typedef struct{
    stProfesional profesional;
    arbol* dato;
}adlCelda;

int alta ( adlCelda celda[], int v, stPaciente dato, stProfesional p);


#endif // ADL_H_INCLUDED

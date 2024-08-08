#ifndef STHOSPITAL_H_INCLUDED
#define STHOSPITAL_H_INCLUDED
#include "persona.h"

typedef struct{
    stPersona persona;
    char diagnostico[10];
    int socio;
}stPaciente;

stPaciente cargaPaciente();
void verPaciente(stPaciente p);


#endif // STHOSPITAL_H_INCLUDED

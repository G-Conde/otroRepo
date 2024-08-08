#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED

typedef struct{
    char nombre[10];
    int edad;
    char dni[13];
}stPersona;

stPersona cargaPersona();
int cargaMuchasPersonas(stPersona p[], int v);
void verUnaPersona(stPersona p);
void verPersonas(stPersona p[], int v);
#endif // PERSONA_H_INCLUDED

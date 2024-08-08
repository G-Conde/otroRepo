#include <stdio.h>
#include <stdlib.h>
#include "stHospital.h"


stPaciente cargaPaciente()
{
    stPaciente p;
    p.persona=cargaPersona();
    printf("Agregar diagnostico medico: \n");
    fgets(p.diagnostico,sizeof(p.diagnostico),stdin);
    p.socio=rand();
    return p;
}
void verPaciente(stPaciente p)
{
    verUnaPersona(p.persona);
    printf("Diagnostico: %s\n",p.diagnostico);
    printf("Socio: %d",p.socio);

}

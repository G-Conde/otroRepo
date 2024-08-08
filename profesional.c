#include <stdio.h>
#include <stdlib.h>
#include "profesional.h"



stDoctor cargarProfesional()
{
    stDoctor d;
    d.p=cargaPersona();
    printf("ESPECIALIDAD:\n");
    fgets(d.especialidad,sizeof(d.especialidad),stdin);
    d.legajo=rand();
    return d;
}
int cargarDoctores(stDoctor d[], int v)
{
    int i=0;
    while(i<v)
    {
        d[i]=cargarProfesional();
        i++;
    }
    return i;
}
void verUnProfesional(stDoctor d)
{
    verUnaPersona(d.p);
    printf("LEGAJO: %d\n",d.legajo);
    printf("ESPECIALIDAD: %s", d.especialidad);
    printf("----------------------------------\n");
}

#ifndef PROFESIONAL_H_INCLUDED
#define PROFESIONAL_H_INCLUDED

typedef struct{
    stPersona p;
    int legajo;
    char especialidad[10];
}stDoctor;

stDoctor cargarProfesional();
int cargarDoctores(stDoctor d[], int v);
void verUnProfesional(stDoctor d){
    verUnaPersona(d.p);
    printf("LEGAJO: %d\n",d.legajo);
    printf("ESPECIALIDAD: %s", d.especialidad);
    printf("----------------------------------\n");
}


#endif // PROFESIONAL_H_INCLUDED

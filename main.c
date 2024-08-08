#include <stdio.h>
#include <stdlib.h>
#include "persona.h"
#include "stHospital.h"
#include "time.h"
//#define AR_HOSP "archi.dat"
//void cargaArchivo(char archivo[],)

int main()
{
    //char archivo[]=AR_HOSP;

    srand(time(NULL));
    //stPersona p[3];
    stPaciente paciente=cargaPaciente();
    verPaciente(paciente);
  //  int validos=0;

   // validos=cargaMuchasPersonas(p,3);
   // printf("%d",validos);
    //verPersonas(p,validos);
    return 0;
}

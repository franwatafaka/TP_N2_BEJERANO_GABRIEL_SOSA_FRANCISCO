#ifndef CLSVALIDACIONESBL_H
#define CLSVALIDACIONESBL_H

#include "../DTO/clsAlumnoDTO.h"

class clsValidacionesBL{

    public:
    char validarUnNumero(char *);
    char validarUnaLetra(char *);
    int strAlfa(char *);
    bool ValidacionFecha(tFecha);
};

#endif // CLSVALIDACIONESBL_H

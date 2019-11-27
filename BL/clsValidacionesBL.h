#ifndef CLSVALIDACIONESBL_H
#define CLSVALIDACIONESBL_H

#include "../DTO/clsAlumnoDTO.h"
#include "../Helpers/clsCadenas.h"

class clsValidacionesBL{

    public:
    char validarUnNumero(char *);
    char validarUnaLetra(char *);
    int strAlfa(char *);
    bool ValidacionFecha(tFecha);
    IngresoAyuda(char *);
};

#endif // CLSVALIDACIONESBL_H

#ifndef CLSALUMNODAO_H
#define CLSALUMNODAO_H

/** #############################################################################
 ARCHIVO             : menu.h
 AUTOR/ES            : GABRIEL BEJARANO, FRANCISCO SOSA
 VERSION             : 0.01 beta.
 FECHA DE CREACION   : 07/09/2019.
 ULTIMA ACTUALIZACION: 07/09/2019.
 LICENCIA            : GPL (General Public License) - Version 3.

  **************************************************************************/
/*****************************************************************************
                             INCLUSIONES PERSONALES
/*=============================================================================**/
#include <cstdio>
#include "../DTO/clsAlumnoDTO.h"

char const ARCHIVO_ALUMNOS[]="archivo_alumno.dat";
/**=============================================================================**/

class clsAlumnoDAO
{
    public:

    void Insertar(clsAlumnoDTO);
    void Eliminar(int);
    void Modificar(clsAlumnoDTO);
    void Listar(clsAlumnoDTO * );
    int Count();
    void leerAlumno(int, clsAlumnoDTO);
    int buscarAlumno(int);
};

#endif // CLSALUMNODAO_H

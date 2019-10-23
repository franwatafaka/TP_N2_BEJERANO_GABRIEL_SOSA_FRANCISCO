#ifndef CLSMATERIADAO_H
#define CLSMATERIADAO_H
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
#include "../DTO/clsMateriaDTO.h"

char const ARCHIVO_MATERIAS[]="archivo_materia.dat";
/**=============================================================================**/

class clsMateriaDAO
{
    public:

    void Insertar(clsMateriaDTO);
    void Eliminar(int);
    void Modificar(clsMateriaDTO);
    void Listar(clsMateriaDTO * );
    int Count();

};

#endif // CLSMATERIADAO_H

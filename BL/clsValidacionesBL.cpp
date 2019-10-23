#include "clsValidacionesBL.h"

/**=============================================================================
 FUNCION : void ValidarUnNumero()
 ACCION : Funcion del Menu Principal
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
char clsValidacionesBL::validarUnNumero(char *opcion)
{
        if((opcion[0] >= 49) && (opcion[0] <= 57))
        {
            return opcion[0];
        }
        else
        {
        return -1;
        }
}

/**=============================================================================
 FUNCION : void ValidarUnNumero()
 ACCION : Funcion del Menu Principal
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
char clsValidacionesBL::validarUnaLetra(char *opcion)
{
        if(((opcion[0] >= 65) && (opcion[0] <= 90)) || ((opcion[0] >= 97) && (opcion[0] <= 122)))
        {
            return opcion[0];
        }
        else
        {
        return -1;
        }
}


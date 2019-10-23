#include "clsValidacionesBL.h"

/**=============================================================================
 FUNCION : void ValidarUnNumero()
 ACCION : Funcion del Menu Principal
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
char clsValidacionesBL::validarUnNumero(char* opcion)
{
    bool valido = false;
    while(!valido)
    {
        if((opcion[0] == 49) || (opcion[0] == 50) || (opcion[0] == 51)
                || (opcion[0] == 52) || (opcion[0] == 53)
                || (opcion[0] == 54) || (opcion[0] == 55)
                || (opcion[0] == 56) || (opcion[0] == 57)
                || (opcion[0] == 82) || (opcion[0] == 114)
          )
        {
            valido = true;
            return opcion[0];
        }
        else
        {
            //DEVUELVE MENOS 1 SU N HUBO INGRESO
            return -1;
        }
    }
    return 'e';
}


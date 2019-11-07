/**#############################################################################
 ARCHIVO             : clsValidacionesBL.cpp
 AUTOR/ES            : Francisco Sosa y Gabriel Bejarano
 VERSION             : 1.0 beta.
 FECHA DE CREACION   : 23/10/2019.
 ULTIMA ACTUALIZACION: 07/1/2019.
*****************************************************************************
                             INCLUSIONES ESTANDAR
=============================================================================**/
#include "clsValidacionesBL.h"

/**=============================================================================
 FUNCION : char ValidarUnNumero()
 ACCION : Valida en formato ascii que el valor ingresado sea un numero
 PARAMETROS: char *opcion
 DEVUELVE : devuelve en char un numero ascii, caso contrario devolvera -1,
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
 FUNCION : char validarUnaLetra()
 ACCION : Valida en formato ascii que el caracter ingresado sea una letra.
 PARAMETROS: char * opcion
 DEVUELVE : devuelve en char el caracter ingresado, caso contrario devolvera -1,
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


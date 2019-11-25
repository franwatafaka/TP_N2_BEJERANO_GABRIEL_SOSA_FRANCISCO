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
 DEVUELVE : devuelve el valor ascii si es un caracter numerico, caso contrario devolvera -1,
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
 ACCION : devuelve el valor ascii si es una letra,
 PARAMETROS: char * opcion
 DEVUELVE : devuelve ascii si es una letra, caso contrario devolvera -1,
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

/**=============================================================================
 FUNCION : char strAlfa()
 ACCION : devuelve el tama�o de chars de la cadena, o -1 si hay un n�mero en ella, � -1 si es
          una cadena vacia
 PARAMETROS: char *str
 DEVUELVE : valida que se ingrese solo una cadena de chars, y que no se haya
            ingresado vacio
============================================================================= **/
int clsValidacionesBL::strAlfa(char *str)
{
    int ic = 0, is,tamSub;
    tamSub = strlen(str);
    if(tamSub== 0)
    {
        return -1;
    }
    while(str[ic]!='\0')
    {
        if(ic==0)
        {
            if(str[ic]==' ' )
            {
                return -1;
                break;
            }
        }

            if(str[ic]==' ')
            {
                ic++;
            }
            else
            {
                if(((str[ic] >= 65) && (str[ic] <= 90)) || ((str[ic] >= 97) && (str[ic] <= 122)))
                {
                    ic++;
                }
                else
                {
                    return -1;
                    break;
                }
            }
            ic++;

    }
    return  ic++;

}

/**=============================================================================
 FUNCION : bool ValidacionFecha()
 ACCION : devuelve false si se ingresa una fecha incorrecta
 PARAMETROS: int dia, int mes, int anio
 DEVUELVE : devuelve true si la fecha est� ok
============================================================================= **/
bool clsValidacionesBL::ValidacionFecha(tFecha fecha)
{
    int x=0;
    if(fecha.dia>0 && fecha.dia<32)
    {
        x++;
    }
    if(fecha.mes>0 && fecha.mes<13)
    {
        x++;
    }
    if(fecha.anio>1900 && fecha.anio<2200)
    {
        x++;
    }
    if(x==3)
    {
        return true;
    }
    else
    {
        return false;
    }
}

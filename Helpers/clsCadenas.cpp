/**#############################################################################
 ARCHIVO             : clsCadenas.cpp
 AUTOR/ES            : Francisco Sosa y Gabriel Bejarano
 VERSION             : 0.01 beta.
 FECHA DE CREACION   : 07/11/2019.
 ULTIMA ACTUALIZACION: 13/11/2019.
*****************************************************************************/
#include "clsCadenas.h"
#include <cstring>


/**=============================================================================
 FUNCION : clsCadenas::strToUpper()
 ACCION : convierte una cadena a Mayúsculas, decrementando su valor ascii
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsCadenas::strToUpper(char *cad )
{
  while(*cad != '\0')
  {
      if(*cad >='a' && *cad<='z')
      {
          *cad = *cad - 32;
      }
      cad++;
  }
}

/**=============================================================================
 FUNCION : clsCadenas::strSub()
 ACCION : compara dos cadenas, y devuelve la cantidad de caracteres consecutivos iguales que hay entre ellas
 PARAMETROS: char *c, char *s
 DEVUELVE : int
============================================================================= **/
int clsCadenas::strSub(char *c, char *s)
{
    char cad[100];
    char sub[100];
    strcpy(cad, c);
    strcpy(sub, s);
    strToUpper(cad);
    strToUpper(sub);
    int ic = 0, is,tamSub;
    tamSub = strlen(sub);
    while(cad[ic]!='\0')
    {
        int icAux = ic;
        is = 0;
        while(sub[is]==cad[icAux] && sub[is]!='\0')
        {
            icAux++;
			is++;
        }
        if(tamSub==is)
        {
            return ic;
        }
        ic++;
    }
    return -1;
}











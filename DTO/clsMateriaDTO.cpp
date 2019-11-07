/**#############################################################################
 ARCHIVO             : clsMateriaDTO.cpp
 AUTOR/ES            : Francisco Sosa y Gabriel Bejarano
 VERSION             : 1.0 beta.
 FECHA DE CREACION   : 23/10/2019.
 ULTIMA ACTUALIZACION: 07/11/2019.
*****************************************************************************
                             INCLUSIONES ESTANDAR
=============================================================================**/
#include "clsMateriaDTO.h"
/**=============================================================================
 FUNCION : clsMateriaDTO()
 ACCION : constructor de la clase, setea en falso el status de materia
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
clsMateriaDTO::clsMateriaDTO()
{
    this->Eliminado = false;

}
/**=============================================================================
 FUNCION : void Copy()
 ACCION : Levanta los datos del materia y los guarda en el nuevo objeto dto.
 PARAMETROS: clsMateriaDTO dto
 DEVUELVE : nada
============================================================================= **/
 void clsMateriaDTO::Copy(clsMateriaDTO dto)
 {
     char nombre[50],profesor[50];
     this->Id = dto.GetId();
     dto.GetNombre(nombre);
     strcpy(this->Nombre,nombre);
     dto.GetProfesor(Profesor);
     strcpy(this->Profesor,Profesor);

 }

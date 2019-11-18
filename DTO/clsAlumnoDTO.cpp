/**#############################################################################
 ARCHIVO             : clsAlumnoDTO.cpp
 AUTOR/ES            : Francisco Sosa y Gabriel Bejarano
 VERSION             : 1.0 beta.
 FECHA DE CREACION   : 22/10/2019.
 ULTIMA ACTUALIZACION: 07/11/2019.
*****************************************************************************
                             INCLUSIONES ESTANDAR
=============================================================================**/
#include "clsAlumnoDTO.h"
/**=============================================================================
 FUNCION : clsAlumnoDTO()
 ACCION : constructor de la clase, setea en falso el status del alumno
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
clsAlumnoDTO::clsAlumnoDTO()
{
    this->Eliminado = false;

}

/**=============================================================================
 FUNCION : void Copy()
 ACCION : Levanta los datos del alumno y los guarda en el nuevo objeto dto.
 PARAMETROS: clsAlumnoDTO dto
 DEVUELVE : nada
============================================================================= **/
 void clsAlumnoDTO::Copy(clsAlumnoDTO dto)
 {
     char nombre[50],apellido[50];
     this->Legajo = dto.GetLegajo();
     dto.GetNombre(nombre);
     strcpy(this->Nombre,nombre);
     dto.GetApellido(Apellido);
     strcpy(this->Apellido,Apellido);
     this->Fecha = dto.GetFecha();
 }

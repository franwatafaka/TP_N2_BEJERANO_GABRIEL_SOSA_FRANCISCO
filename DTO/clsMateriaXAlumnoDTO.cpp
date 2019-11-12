/**#############################################################################
 ARCHIVO             : clsMensajesView.cpp
 AUTOR/ES            : Francisco Sosa y Gabriel Bejarano
 VERSION             : 0.01 beta.
 FECHA DE CREACION   : 07/11/2019.
 ULTIMA ACTUALIZACION: dd/mm/aaaa.
*****************************************************************************
                             INCLUSIONES ESTANDAR
=============================================================================**/
#include "clsMateriaXAlumnoDTO.h"
/**=============================================================================
 FUNCION : clsMateriaDTO()
 ACCION : constructor de la clase, setea en falso el status de materia
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
clsMateriaXAlumnoDTO::clsMateriaXAlumnoDTO()
{
    this->Eliminado = false;

}
/**=============================================================================
 FUNCION : void Copy()
 ACCION : Levanta los datos del materia y los guarda en el nuevo objeto dto.
 PARAMETROS: clsMateriaDTO dto
 DEVUELVE : nada
============================================================================= **/
 void clsMateriaXAlumnoDTO::Copy(clsMateriaXAlumnoDTO dto)
 {
     int id, legajo, LegajoMateria;
     this->Id = dto.GetId();
     this->Legajo = dto.GetLegajo();
     this->LegajoMateria = dto.GetLegajoMateria();

 }

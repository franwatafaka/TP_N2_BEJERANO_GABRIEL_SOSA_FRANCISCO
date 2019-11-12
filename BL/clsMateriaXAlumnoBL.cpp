/**#############################################################################
 ARCHIVO             : clsMateriaXAlumnoBL.cpp
 AUTOR/ES            : Francisco Sosa y Gabriel Bejarano
 VERSION             : 0.01 beta.
 FECHA DE CREACION   : 05/11/2019.
 ULTIMA ACTUALIZACION: 07/11/2019.
*****************************************************************************
                             INCLUSIONES ESTANDAR
=============================================================================**/

#include "clsMateriaXAlumnoBL.h"
/**=============================================================================
 FUNCION : void subMaterias()
 ACCION : Muestra y permite el acceso a las funciones de gestion de materias
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsMateriaXAlumnoBL::Insertar(clsMateriaXAlumnoDTO dto, int id, int legajo, int LegajoMateria){
    clsMateriaXAlumnoDAO dao;
    dto.SetId(id);
    dto.SetLegajo(legajo);
    dto.SetLegajoMateria(LegajoMateria);
    dao.Insertar(dto);
}

/**=============================================================================
 FUNCION : void Listar()
 ACCION : Lista el contenido de la db
 PARAMETROS: clsMateriaDTO *lista
 DEVUELVE : nada
============================================================================= **/
//void clsMateriaBL::Listar(clsMateriaXAlumnoDTO *lista)
//    {
//    clsMateriaXAlumnoDAO dao;
//    dao.Listar(lista);
//    }
/**=============================================================================
 FUNCION : int Count()
 ACCION : devuelve la cantidad de registros que existen en la db
 PARAMETROS: nada
 DEVUELVE : cantidad de registros
============================================================================= **/
int clsMateriaXAlumnoBL::Count()
{
    clsMateriaXAlumnoDAO dao;
    return dao.Count();
}



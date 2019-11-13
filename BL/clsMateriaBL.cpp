/**#############################################################################
 ARCHIVO             : clsMateriaBL.cpp
 AUTOR/ES            : Francisco Sosa y Gabriel Bejarano
 VERSION             : 1.0 beta.
 FECHA DE CREACION   : 23/110/2019.
 ULTIMA ACTUALIZACION: 07/1/2019.
*****************************************************************************
                             INCLUSIONES ESTANDAR
=============================================================================**/
#include "clsMateriaBL.h"
/**=============================================================================
 FUNCION : void Insertar()
 ACCION : Inserta en la db un objeto MateriaDTO
 PARAMETROS: clsMateriaDTO dto
 DEVUELVE : nada
============================================================================= **/
void clsMateriaBL::Insertar(clsMateriaDTO dto){
    clsMateriaDAO dao;
    int id=dao.Count()+1;
    dto.SetId(id);
    dto.SetEliminado(false);
    dao.Insertar(dto);
}
/**=============================================================================
 FUNCION : void Eliminar()
 ACCION : Elimina (de manera logica) un registro de la db
  PARAMETROS: int id
 DEVUELVE : nada
============================================================================= **/
void clsMateriaBL::Eliminar(int id)
    {
    clsMateriaDAO dao;
    dao.Eliminar(id);

    }
/**=============================================================================
 FUNCION : void Modificar()
 ACCION : Permite modificar un registro de la db
 PARAMETROS: clsMateriaDTO dto
 DEVUELVE : nada
============================================================================= **/
void clsMateriaBL::Modificar(clsMateriaDTO dto)
    {
    clsMateriaDAO dao;
    dao.Modificar(dto);
    }
/**=============================================================================
 FUNCION : void Listar()
 ACCION : Lista el contenido de la db
 PARAMETROS: clsMateriaDTO *lista
 DEVUELVE : nada
============================================================================= **/
void clsMateriaBL::Listar(clsMateriaDTO *lista)
    {
    clsMateriaDAO dao;
    dao.Listar(lista);
    }

/**=============================================================================
 FUNCION : void ListarAsignados()
 ACCION : Lista los alumnos de la db
 PARAMETROS: clsAlumnoDTO *listalegajos, int *legajos
 DEVUELVE : nada
============================================================================= **/

void clsMateriaBL::ListarAsignados(clsMateriaDTO *listaids, int *ids)
{
    clsMateriaDAO dao;
    dao.ListarAsignados(listaids, ids);
}
/**=============================================================================
 FUNCION : int Count()
 ACCION : devuelve la cantidad de registros que existen en la db
 PARAMETROS: nada
 DEVUELVE : cantidad de registros
============================================================================= **/
int clsMateriaBL::Count()
{
    clsMateriaDAO dao;
    return dao.Count();
}

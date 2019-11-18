/**#############################################################################
 ARCHIVO             : clsAlumnoBL.cpp
 AUTOR/ES            : Francisco Sosa y Gabriel Bejarano
 VERSION             : 1.0 beta.
 FECHA DE CREACION   : 23/10/2019.
 ULTIMA ACTUALIZACION: 07/1/2019.
*****************************************************************************
                             INCLUSIONES ESTANDAR
=============================================================================**/

#include "clsAlumnoBL.h"

/**=============================================================================
 FUNCION : void Insertar()
 ACCION : Inserta un nuevo objeto Alumno en la db
 PARAMETROS: clsAlumnoDTO dto
 DEVUELVE : nada
============================================================================= **/
void clsAlumnoBL::Insertar(clsAlumnoDTO dto){
    clsAlumnoDAO dao;
    int legajo=dao.Count()+1;
    dto.SetLegajo(legajo);
    tFecha fecha;
    dto.SetFecha(fecha);
    dto.SetEliminado(false);
    dao.Insertar(dto);
}
/**=============================================================================
 FUNCION : void Eliminar()
 ACCION : Elimina (de manera logica) un legajo de la db
 PARAMETROS: int legajo
 DEVUELVE : nada
============================================================================= **/
void clsAlumnoBL::Eliminar(int legajo)
    {
    clsAlumnoDAO dao;
    dao.Eliminar(legajo);

    }
/**=============================================================================
 FUNCION : void Modificar()
 ACCION : Permite modificar un objeto Alumno
 PARAMETROS: clsAlumnoDTO dto
 DEVUELVE : nada
============================================================================= **/
void clsAlumnoBL::Modificar(clsAlumnoDTO dto)
    {
    clsAlumnoDAO dao;
    dao.Modificar(dto);
    }
/**=============================================================================
 FUNCION : void Listar()
 ACCION : Lista los alumnos de la db
 PARAMETROS: clsAlumnoDTO *lista
 DEVUELVE : nada
============================================================================= **/
void clsAlumnoBL::Listar(clsAlumnoDTO *lista)
    {
    clsAlumnoDAO dao;
    dao.Listar(lista);
    }

/**=============================================================================
 FUNCION : void ListarAsignados()
 ACCION : Lista los alumnos de la db
 PARAMETROS: clsAlumnoDTO *listalegajos, int *legajos
 DEVUELVE : nada
============================================================================= **/

void clsAlumnoBL::ListarAsignados(clsAlumnoDTO *listalegajos, int *legajos)
{
    clsAlumnoDAO dao;
    dao.ListarAsignados(listalegajos, legajos);
}
/**=============================================================================
 FUNCION : void Count()
 ACCION : Realiza conteo de la cantidad de registros que existen en la db.
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
int clsAlumnoBL::Count()
{
    clsAlumnoDAO dao;
    return dao.Count();
}

/**=============================================================================
 FUNCION : void BuscarsubA()
 ACCION : Compara dos cadenas, char *cond
 PARAMETROS: clsMateriaDTO *lista
 DEVUELVE : nada
============================================================================= **/
void clsAlumnoBL::BuscarSubA(clsAlumnoDTO *lista, char *cond)
    {
    clsAlumnoDAO dao;
    dao.BuscarSubA(lista, cond);
    }

/**=============================================================================
 FUNCION : int BuscarSubCountA()
 ACCION : cuenta la diferencia de chars entre dos cadenas
 PARAMETROS: nada
 DEVUELVE : 0 si no hay strings iguales, y el valor de characteres iguales entre las
            dos cadenas
============================================================================= **/
int clsAlumnoBL::BuscarSubCountA(char *cond)
{
    clsAlumnoDAO dao;
    return dao.BuscarSubCountA(cond);
}

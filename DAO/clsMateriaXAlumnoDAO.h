#ifndef CLSMATERIAXALUMNODAO_H
#define CLSMATERIAXALUMNODAO_H
/** #############################################################################
 ARCHIVO             : clsMateriaXAlumnoDAO.h
 AUTOR/ES            : GABRIEL BEJARANO, FRANCISCO SOSA
 VERSION             : 0.01 beta.
 FECHA DE CREACION   : 07/09/2019.
 ULTIMA ACTUALIZACION: 07/09/2019.
 LICENCIA            : GPL (General Public License) - Version 3.

  **************************************************************************/
/*****************************************************************************
                             INCLUSIONES PERSONALES
/*=============================================================================**/
#include <cstdio>
#include "../DTO/clsMateriaXAlumnoDTO.h"
#include "../DTO/clsMateriaDTO.h"
#include "../DTO/clsAlumnoDTO.h"
#include "../DAO/clsMateriaDAO.h"
#include "../DAO/clsAlumnoDAO.h"
#include "../VIEW/clsMateriasView.h"
#include "../VIEW/clsAlumnosView.h"

char const ARCHIVO_MXA[]="archivo_materiaxalumno.dat";
//char const ARCHIVO_ALUMNOS[]="archivo_alumno.dat";
//char const ARCHIVO_MATERIAS[]="archivo_materia.dat";
/**=============================================================================**/

class clsMateriaXAlumnoDAO
{
public:
    bool Insertar(clsMateriaXAlumnoDTO);
    void Listar(clsMateriaXAlumnoDTO *);
    void ListaLegajos(int, int *);
    void ListaIds(int, int *);
    int Count();
    int CountAsignados(int);
    int CountAsignadosM(int);
//    int buscarAlumno(int, clsAlumnoDTO);
//    int buscarMateria(int);
    bool verificarEstadoMateria(int);
    bool verificarEstadoAlumno(int);
    void mostrarAlumnosAsignados(int);
    void mostrarMateriasAsignadas(int);


};

#endif // CLSMATERIAXALUMNODAO_H

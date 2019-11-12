/**#############################################################################
 ARCHIVO             : clsMensajesView.cpp
 AUTOR/ES            : Francisco Sosa y Gabriel Bejarano
 VERSION             : 0.01 beta.
 FECHA DE CREACION   : 07/11/2019.
 ULTIMA ACTUALIZACION: dd/mm/aaaa.
*****************************************************************************
                             INCLUSIONES ESTANDAR
=============================================================================**/

#include "clsMateriaXAlumnoVIEW.h"
#include "../CSYSTEM/csystem.h"

using namespace std;

/**=============================================================================
 FUNCION : void AsignarAtoM()
 ACCION : Permite asociar un alumno a una materia
 PARAMETROS:nada.
 DEVUELVE : nada.
============================================================================= **/
void clsMateriaXAlumnoVIEW::AsignarAtoM()
{
    system("cls");
    clsMateriaXAlumnoDAO dao; clsMateriaXAlumnoDTO dto;
    clsAlumnosView aview; clsMateriasView mview; clsMensajesView txt;
    int legajo, id;
    bool exit=false, c=false;
    aview.Listar();
    txt.txtAsignacionDeAlumnos();
    cin>>legajo;
    cin.ignore();
    exit=dao.verificarEstadoAlumno(legajo);
    if(!exit)
    {
        dto.SetLegajo(legajo);
    }
    while(!exit)
    {
        system("cls");
        mview.Listar();
        txt.txtLinea();
        txt.txtAsignacionDeMaterias();
        cin>>id;
        cin.ignore();
        //VALIDA SI EL ID ES CORRECTO
        exit=dao.verificarEstadoMateria(id);
        if(!exit)
        {
            dto.SetId(id);
            c=dao.Insertar(dto);
            if(c)
            {
                txt.txtAsignacionExitosa();
            }
            else
            {
                txt.txtAsignacionError();
            }
        }
    }
}
/**=============================================================================
 FUNCION : void AsignarMtoA()
 ACCION : estructura de las materias x alumno
 PARAMETROS:nada.
 DEVUELVE : nada.
============================================================================= **/
void clsMateriaXAlumnoVIEW::AsignarMtoA()
{
    system("cls");
    clsMateriaXAlumnoDAO dao; clsMateriaXAlumnoDTO dto;
    clsAlumnosView aview; clsMateriasView mview; clsMensajesView txt;
    int legajo, id;
    bool exit=false, c=false;
    mview.Listar();
    txt.txtLinea();
    txt.txtAsignacionDeMaterias();
    cin>>id;
    cin.ignore();
    //VALIDA SI EL ID ES CORRECTO
    exit=dao.verificarEstadoMateria(id);
    if(!exit)
    {
            dto.SetId(id);
    }
    while(!exit)
    {
        system("cls");
        aview.Listar();
        txt.txtAsignacionDeAlumnos();
        cin>>legajo;
        cin.ignore();
        exit=dao.verificarEstadoAlumno(legajo);
        if(!exit)
        {
            dto.SetLegajo(legajo);
        }
        c=dao.Insertar(dto);
        if(c)
        {
            txt.txtAsignacionExitosa();
        }
        else
        {
            txt.txtAsignacionError();
        }
    }
}

/**=============================================================================
 FUNCION : void MostrarAlumno()
 ACCION : Muestra el listado de alumnos de la db.
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsMateriaXAlumnoVIEW::MostrarAsignaciones()
{
        clsMateriaXAlumnoDAO mdao;
        clsMensajesView txt;
        txt.txtLinea();
        txt.txtSeleccionDeMateria();
        int id;
        cin>>id;
        mdao.Listar(id);
}

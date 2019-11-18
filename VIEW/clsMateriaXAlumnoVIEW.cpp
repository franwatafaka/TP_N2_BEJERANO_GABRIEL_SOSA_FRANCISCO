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

#include "../BL/clsValidacionesBL.h"
#include "../VIEW/clsMensajesView.h"

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
    clsMateriaXAlumnoDAO dao;
    clsMateriaXAlumnoDTO dto;
    clsAlumnosView aview;
    clsMateriasView mview;
    clsMensajesView txt;
    int legajo, id;
    bool exit=false, c=false, validID;
    aview.Listar();
    txt.txtAsignacionDeAlumnos();
    cin>>legajo;
    cin.ignore();
    validID=dao.verificarEstadoAlumno(legajo);
    if(!validID)
    {
        dto.SetLegajo(legajo);
    while(!exit)
    {
         system("cls");
        mview.Listar();
        txt.txtLinea();
        txt.txtAsignacionDeMaterias();
        cin>>id;
        cin.ignore();
        if(id==0)
        {
            exit = true;
        }
        else
        {
            //VALIDA SI EL ID ES CORRECTO
            validID=dao.verificarEstadoMateria(id);
            if(!validID)
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
    system("cls");
    }
}
/**=============================================================================
 FUNCION : void AsignarMtoA()
 ACCION : Permite asociar un alumno a una materia
 PARAMETROS:nada.
 DEVUELVE : nada.
============================================================================= **/
void clsMateriaXAlumnoVIEW::AsignarMtoA()
{
    system("cls");
    clsMateriaXAlumnoDAO dao;   clsMateriaXAlumnoDTO dto; clsAlumnosView aview; clsMateriasView mview; clsMensajesView txt;
    int legajo, id;
    bool exit=false, c=false,validId;
    mview.Listar();
    txt.txtLinea();
    txt.txtAsignacionDeMaterias();
    cin>>id;
    cin.ignore();
    //VALIDA SI EL ID ES CORRECTO
    validId=dao.verificarEstadoMateria(id);
    if(!validId)
    {
        dto.SetId(id);
        while(!exit)
        {
            system("cls");
            aview.Listar();
            txt.txtAsignacionDeAlumnos();
            cin>>legajo;
            cin.ignore();

            if(legajo == 0)
            {
                exit = true;
            }
            else
            {
                validId=dao.verificarEstadoAlumno(legajo);
                if(!validId)
                {
                    dto.SetLegajo(legajo);
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

    }
    system("cls");
}

/**=============================================================================
 FUNCION : void MenuMXA()
 ACCION : muestra las opciones de asignacion disponible, y concede acceso a las mismas
 PARAMETROS:nada.
 DEVUELVE : nada.
============================================================================= **/
void clsMateriaXAlumnoVIEW::MenuMXA()
{
    clsMensajesView txt;
    system("cls");
    char op[50];
    clsValidacionesBL validar;
    bool salir=false;
    while(!salir)
    {
        txt.txtMenuMXA();
        cin.getline(op, 50);
        switch(validar.validarUnaLetra(op))
        {
        case 'a':
        case 'A':
        {
            AsignarAtoM();
        }
        break;
        case 'b':
        case 'B':
        {
            AsignarMtoA();
        }
        case 'c':
        case 'C':
        {
            clsMateriaXAlumnoVIEW mxaview;
            mxaview.MostrarAsignaciones();
        }
        case 'd':
        case 'D':
        {
            clsMateriaXAlumnoVIEW mxaview;
            mxaview.MostrarAsignacionesM();
        }
        break;
        case 's':
        case 'S':
        {
            salir=true;
        }
        break;
        default:
        {
            txt.txtMensajeError();
            system("cls");
        }
        break;
        }
    }
}

/**=============================================================================
 FUNCION : void MostrarAsignaciones()
 ACCION : Muestra el listado de alumnos asignados a materias de la db.
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsMateriaXAlumnoVIEW::MostrarAsignaciones()
{
    clsMateriaXAlumnoBL bl;
    clsAlumnoBL abl;
    clsAlumnosView aview;
    clsMensajesView txt;
    clsMateriaXAlumnoDAO dao;
    bool exit;
    aview.Listar();
    txt.txtLinea();
    txt.txtSeleccionDeAlumno();
    int id;
    cin>>id;
    exit=dao.verificarEstadoAlumno(id);
    if(!exit)
    {
        int c=bl.CountAsignados(id);
        int legajos[c];
        for(int x=0; x<c; x++)
        {
            legajos[x]=0;
        }
        clsAlumnoDTO *listalegajos = (clsAlumnoDTO*)malloc(sizeof(clsAlumnoDTO)*c);
        bl.ListaLegajos(id, legajos);
        abl.ListarAsignados(listalegajos, legajos);
        aview.MostrarAsignados(listalegajos, c);
    }
}

/**=============================================================================
 FUNCION : void MostrarAsignaciones()
 ACCION : Muestra el listado de materias asignadas a alumnos de la db.
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsMateriaXAlumnoVIEW::MostrarAsignacionesM()
{
    clsMateriaXAlumnoBL bl;
    clsMateriaBL abl;
    clsMateriasView aview;
    clsMensajesView txt;
    aview.Listar();
    txt.txtLinea();
    txt.txtSeleccionDeMateria();
    int legajo;
    cin>>legajo;
    int c=bl.CountAsignadosM(legajo);
    int ids[c];
    for(int x=0; x<c; x++)
    {
        ids[x]=0;
    }
    clsMateriaDTO *listaids = (clsMateriaDTO*)malloc(sizeof(clsMateriaDTO)*c);
    bl.ListaIds(legajo, ids);
    abl.ListarAsignados(listaids, ids);
    aview.MostrarAsignadosM(listaids, c);
}


/**#############################################################################
 ARCHIVO             : clsMensajesView.cpp
 AUTOR/ES            : Francisco Sosa y Gabriel Bejarano
 VERSION             : 0.01 beta.
 FECHA DE CREACION   : 07/11/2019.
 ULTIMA ACTUALIZACION: dd/mm/aaaa.
*****************************************************************************
                             INCLUSIONES ESTANDAR
=============================================================================**/
#include "clsMensajesView.h"

/*****************************************************************************
                             INCLUSIONES PERSONALES
=============================================================================**/
#include <cstdlib>
#include <iomanip>
using namespace std;

/**=============================================================================
 FUNCION : void subMaterias()
 ACCION : Muestra y permite el acceso a las funciones de gestion de materias
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsMensajesView::mensajeError()
{
            cout<<"|------------------------------------------------------------|"<<endl;
            cout<<setw(30)<<"   -   ERROR: POR FAVOR, INGRESE UNA OPCION VALIDA-"<<endl;
            cout<<"|------------------------------------------------------------|"<<endl;
            system("pause");
}
/**=============================================================================
 FUNCION : void subMaterias()
 ACCION : Muestra y permite el acceso a las funciones de gestion de materias
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsMensajesView::vistaMenuPpal()
{

}
/**=============================================================================
 FUNCION : void subMaterias()
 ACCION : Muestra y permite el acceso a las funciones de gestion de materias
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsMensajesView::vistaMenuMateria()
{
 cout<<"----------SUBMENU MATERIAS---------"<<endl;
    cout<<"A - Nueva Materia"<<endl;
    cout<<"B - Listar Materias"<<endl;
    cout<<"C - Eliminar Materias"<<endl;
    cout<<"D - Modificar Materias"<<endl;
    cout<<"S - Salir"<<endl;
    cout<<"-----------------------------------"<<endl;
}
/**=============================================================================
 FUNCION : void subMaterias()
 ACCION : Muestra y permite el acceso a las funciones de gestion de materias
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsMensajesView::vistaMenuAlumno()
{
    cout<<"----------SUBMENU ALUMNOS---------"<<endl;
    cout<<"A - Nuevo Alumno"<<endl;
    cout<<"B - Listar Alumnos"<<endl;
    cout<<"C - Eliminar Alumnos"<<endl;
    cout<<"D - Modificar Alumnos"<<endl;
    cout<<"S - Salir"<<endl;
    cout<<"-----------------------"<<endl;
}
/**=============================================================================
 FUNCION : void subMaterias()
 ACCION : Muestra y permite el acceso a las funciones de gestion de materias
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsMensajesView::vistaMenuMatXAl()
{

}

/**=============================================================================
 FUNCION : void subMaterias()
 ACCION : Muestra y permite el acceso a las funciones de gestion de materias
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsMensajesView::txtLinea()
{
    cout<<"----------------------------------------------"<<endl;
}


/**=============================================================================
 FUNCION : void subMaterias()
 ACCION : Muestra y permite el acceso a las funciones de gestion de materias
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsMensajesView::TxtMenuPpal(){
cout<<"|----------------------------MENU----------------------------|"<<endl;
        cout<<setw(40)<<right<<" A - Materias"<<endl;
        cout<<setw(40)<<right<<" B - Alumnos"<<endl;
        cout<<setw(35)<<right<<" S - Salir"<<endl;
        cout<<"|------------------------------------------------------------|"<<endl;

}


/**=============================================================================
 FUNCION : void subMaterias()
 ACCION : Muestra y permite el acceso a las funciones de gestion de materias
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsMensajesView::TxtListaAlumnos(){
system("cls");
    cout<<"---------------------------------------------"<<endl;
    cout<<"-               LISTA DE ALUMNOS            -"<<endl;
    cout<<"---------------------------------------------"<<endl;
}

/**#############################################################################
 ARCHIVO             : clsMensajesView.cpp
 AUTOR/ES            : Francisco Sosa y Gabriel Bejarano
 VERSION             : 0.01 beta.
 FECHA DE CREACION   : 07/11/2019.
 ULTIMA ACTUALIZACION: dd/mm/aaaa.
*****************************************************************************
                             INCLUSIONES ESTANDAR
=============================================================================**/
#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include "clsMainView.h"
#include "clsMateriasView.h"
#include "clsAlumnosView.h"
#include "../BL/clsValidacionesBL.h"
#include "../VIEW/clsMensajesView.h"
using namespace std;

//agregar menu.h ACÁ ABAJO, (TODOS LOS MENUS Y SUBMENUS A UTILIZAR)

/**=============================================================================
 FUNCION : void subMaterias()
 ACCION : Muestra y permite el acceso a las funciones de gestion de materias
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsMainView::Menu()
{
    char op[50];
    clsValidacionesBL validar;
    clsMensajesView txt;
    bool salir=false;
    while(!salir)
    {

        system("cls");
        txt.TxtMenuPpal();
        cin.getline(op, 50);
        switch(validar.validarUnaLetra(op))
        {
        case 'a':
        case 'A':
        {
            clsMateriasView matView;
            matView.MenuMaterias();
        }
        break;
        case 'b':
        case 'B':
        {
            clsAlumnosView aluView;
            aluView.MenuAlumnos();
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
           txt.mensajeError();
        }
        }
    }
}

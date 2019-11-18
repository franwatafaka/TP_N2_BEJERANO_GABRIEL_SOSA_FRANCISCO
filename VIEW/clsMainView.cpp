/**#############################################################################
 ARCHIVO             : clsMensajesView.cpp
 AUTOR/ES            : Francisco Sosa y Gabriel Bejarano
 VERSION             : 1.0 beta.
 FECHA DE CREACION   : 07/11/2019.
 ULTIMA ACTUALIZACION: 16/11/2019.
*****************************************************************************
                             INCLUSIONES ESTANDAR
=============================================================================**/
#include <cstdio>

/*******************************************************************************
                             INCLUSIONES PERSONALES
=============================================================================**/
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include "clsMainView.h"
#include "clsMateriasView.h"
#include "clsAlumnosView.h"
#include "../BL/clsValidacionesBL.h"
#include "../VIEW/clsMensajesView.h"
#include "../VIEW/clsMateriaXAlumnoVIEW.h"

using namespace std;

/**=============================================================================
 FUNCION : void Menu()
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
    txt.txtPresentacion();
    while(!salir)
    {

        system("cls");
        txt.txtMenuPpal();
        cout << "\t \t " ; cin.getline(op, 50);
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
        case 'c':
        case 'C':
        {
            clsMateriaXAlumnoVIEW mxaView;
            mxaView.MenuMXA();
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
        }
        }
    }
    txt.txtDespedida();
}

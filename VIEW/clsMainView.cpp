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
      clsMateriasView matView;
        clsAlumnosView aluView;
           clsMateriaXAlumnoVIEW mview;
    clsMensajesView txt;
    bool salir=false;
    txt.txtPresentacion();
    while(!salir)
    {

        system("cls");
        txt.txtMenuPpal();
        cin.getline(op, 50);
        switch(validar.validarUnaLetra(op))
        {
        case 'a':
        case 'A':
        {

            matView.MenuMaterias();
        }
        break;
        case 'b':
        case 'B':
        {

            aluView.MenuAlumnos();
        }
        break;
        case 'C':
        case 'c':
            {

                matView.Listar();
                mview.AsignarAtoM();
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

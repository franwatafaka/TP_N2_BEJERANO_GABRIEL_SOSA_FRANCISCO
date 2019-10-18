#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

/** #############################################################################
 ARCHIVO             : menu.h
 AUTOR/ES            : GABRIEL BEJARANO, FRANCISCO SOSA
 VERSION             : 0.01 beta.
 FECHA DE CREACION   : 07/09/2019.
 ULTIMA ACTUALIZACION: 07/09/2019.
 LICENCIA            : GPL (General Public License) - Version 3.

  **************************************************************************/
/*****************************************************************************
                             INCLUSIONES PERSONALES
/*=============================================================================**/
#include <iostream>
#include <cstdlib>  /** Libreria estandar que contiene la funcion exit(). */
#include <cstdio>   /** Libreria para manejo de archivos. */
#include <locale>   /** Libreria para manejo de Idiomas */
#include <cstring>  /** Libreria para el manejo de cadenas de texto tDato String */
#include <windows.h>
#include "../CSYSTEM/csystem.h" /** Libreria para multiplataforma. */
#include "./mensajes.h"    /** TEXTOS DE LA APLICACION - Y SI, MUCHO MAS COMODO ! */
#incude "DTO/clsMateriasDTO.h" /** LIBRERIA DE FUNCIONES DE MATERIAS - CAPA DATOS */
#incude "DAO/clsMateriasDAO.h" /** LIBRERIA DE FUNCIONES DE MATERIAS - CAPA LOGICA */
/**=============================================================================**/



/**=============================================================================
 FUNCION : void menuPpal()
 ACCION : Funcion del Menu Principal
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void menuPpal()
{
    clsMateriaDTO dto;

}

#endif // MENU_H_INCLUDED

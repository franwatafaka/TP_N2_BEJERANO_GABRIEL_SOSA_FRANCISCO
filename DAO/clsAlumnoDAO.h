#ifndef CLSALUMNODAO_H
#define CLSALUMNODAO_H



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
#include <cstring>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <clsAlumnoDAO.h>

using namespace std;
/**=============================================================================**/

class clsAlumnoDTO
{
    public:
       // clsAlumnoDTO(char*, int, char*, bool);
        clsAlumnoDTO();

         int GetLegajo() { return Legajo; }
        void SetLegajo(int val) { Legajo = val; }
        void GetNombre(char* val) { strcpy(val,Nombre ); }
        void SetNombre(char* val) { strcpy(Nombre,val ); }
        void GetApellido(char* val) { strcpy(val,Apellido ); }
        void SetApellido(char* val) { strcpy(Apellido ,val); }
        bool GetEliminado();
        void SetEliminado(bool val);
        void Copy(clsAlumnoDTO);

    private:
        char Nombre[50];
        int Legajo;
        char Apellido[50];
        bool Eliminado;
};



#endif // CLSALUMNODAO_H

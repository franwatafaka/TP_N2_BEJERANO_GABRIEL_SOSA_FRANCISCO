#ifndef CLSALUMNODTO_H
#define CLSALUMNODTO_H

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

/**=============================================================================**/
//STRUCT QUE CONTIENE LA ARQUITECTURA DE FECHA QUE UTILIZARÁ EL OBJETO ALUMNO
struct tFecha{
    int dia;
    int mes;
    int anio;
};

class clsAlumnoDTO
{
    public:
        clsAlumnoDTO();

         int GetLegajo() { return Legajo; }
        void SetLegajo(int val) { Legajo = val; }
        void GetNombre(char* val) { strcpy(val,Nombre ); }
        void SetNombre(char* val) { strcpy(Nombre,val ); }
        void GetApellido(char* val) { strcpy(val,Apellido ); }
        void SetApellido(char* val) { strcpy(Apellido ,val); }
        bool GetEliminado() { return Eliminado; }
        void SetEliminado(bool val) { Eliminado = val; }
        tFecha GetFecha() { return Fecha; }
        void SetFecha(tFecha val) { Fecha = val; }

        void Copy(clsAlumnoDTO);

    private:
        char Nombre[50];
        int Legajo;
        char Apellido[50];
        tFecha Fecha;
        bool Eliminado;
};

#endif // CLSALUMNODTO_H

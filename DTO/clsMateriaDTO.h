#ifndef CLSMATERIADTO_H
#define CLSMATERIADTO_H
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

class clsMateriaDTO
{
    public:
        clsMateriaDTO();

        int GetId() { return Id; }
        void SetId(int val) { Id = val; }
        void GetNombre(char* val) { strcpy(val,Nombre ); }
        void SetNombre(char* val) { strcpy(Nombre,val ); }
        void GetProfesor(char* val) { strcpy(val,Profesor ); }
        void SetProfesor(char* val) { strcpy(Profesor ,val); }
        bool GetEliminado() { return Eliminado; }
        void SetEliminado(bool val) { Eliminado = val; }

        void Copy(clsMateriaDTO);

    private:
        char Nombre[50];
        int Id;
        char Profesor[50];
        bool Eliminado;
};

#endif // CLSMATERIADTO_H

#include "clsAlumnoDTO.h"

clsAlumnoDTO::clsAlumnoDTO()
{
    this->Eliminado = false;

}

 void clsAlumnoDTO::Copy(clsAlumnoDTO dto)
 {
     char nombre[50],apellido[50];
     this->Legajo = dto.GetLegajo();
     dto.GetNombre(nombre);
     strcpy(this->Nombre,nombre);
     dto.GetApellido(Apellido);
     strcpy(this->Apellido,Apellido);
 }

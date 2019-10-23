#include "clsAlumnoDTO.h"


//clsAlumnoDTO::clsAlumnoDTO(char Nombre, int Legajo, char Apellido, bool Eliminado)
//{
//    strcpy(this->Nombre, Nombre);
//    this->Legajo=Legajo;
//    strcpy(this->Apellido, Apellido);
//    this->Eliminado = Eliminado;
//}

clsAlumnoDTO::clsAlumnoDTO()
{
    strcpy(this->Nombre, "Nombre");
    this->Legajo=9999;
    strcpy(this->Apellido, "Apellido");
    this->Eliminado = false;
}


bool clsAlumnoDTO::GetEliminado(){
    return Eliminado;
}

void clsAlumnoDTO::SetEliminado(bool val){
    this->Eliminado = val;
}

 void clsAlumnoDTO::Copy(clsAlumnoDTO dto)
 {
     char nombre[50],apellido[50];
     this->legajo = dto.GetLegajo();
     dto.GetNombre(nombre);
     strcpy(this->Nombre,nombre);
     dto.GetApellido(apellido);
     strcpy(this-Apellido,apellido);

 }

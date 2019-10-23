#include "clsMateriaDTO.h"

//clsMateriaDTO::clsMateriaDTO(char Nombre, int Id, char Profesor, bool Eliminado)
//{
//    strcpy(this->Nombre, Nombre);
//    this->Id=Id;
//    strcpy(this->Profesor, Profesor);
//    this->Eliminado = Eliminado;
//}

clsMateriaDTO::clsMateriaDTO()
{
    strcpy(this->Nombre, "Nombre");
    this->Id=9999;
    strcpy(this->Profesor, "Profesor");
    this->Eliminado = false;
}


bool clsMateriaDTO::GetEliminado(){
    return Eliminado;
}

void clsMateriaDTO::SetEliminado(bool val){
    this->Eliminado = val;
}

 void clsMateriaDTO::Copy(clsMateriaDTO dto)
 {
     char nombre[50],profesor[50];
     this->id = dto.GetId();
     dto.GetNombre(nombre);
     strcpy(this->Nombre,nombre);
     dto.GetProfesor(profesor);
     strcpy(this-Profesor,profesor);

 }

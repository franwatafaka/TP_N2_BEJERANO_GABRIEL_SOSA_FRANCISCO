#include "clsAlumnoBL.h"


void clsAlumnoBL::Insertar(clsAlumnoDTO dto){
    clsAlumnoDAO dao;
    int legajo=dao.Count()+1;
    dto.SetLegajo(legajo);
    dto.SetEliminado(false);
    dao.Insertar(dto);
}

void clsAlumnoBL::Eliminar(int legajo)
    {
    clsAlumnoDAO dao;
    dao.Eliminar(legajo);

    }

void clsAlumnoBL::Modificar(clsAlumnoDTO dto)
    {
    clsAlumnoDAO dao;
    dao.Modificar(dto);
    }

void clsAlumnoBL::Listar(clsAlumnoDTO *lista)
    {
    clsAlumnoDAO dao;
    dao.Listar(lista);
    }

int clsAlumnoBL::Count()
{
    clsAlumnoDAO dao;
    return dao.Count();
}

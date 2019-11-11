#ifndef CLSALUMNOSVIEW_H
#define CLSALUMNOSVIEW_H

#include <cstring>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cstdio>
#include "../DTO/clsAlumnoDTO.h"
#include "../BL/clsAlumnoBL.h"
#include "clsMateriaXAlumnoVIEW.h"
#include "../DAO/clsMateriaXAlumnoDAO.h"


class clsAlumnosView
{
    public:
    void MenuAlumnos();
    void Insertar();
    void Listar();
    void Asignar();
    void MostrarAlumno(clsAlumnoDTO);
    void Eliminar();
    void Modificar();
    void MostrarAsignaciones();

};

#endif // CLSALUMNOSVIEW_H

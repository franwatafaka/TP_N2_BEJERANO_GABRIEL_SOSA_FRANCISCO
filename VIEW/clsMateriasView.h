#ifndef CLSMATERIASVIEW_H
#define CLSMATERIASVIEW_H

#include <cstring>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cstdio>
#include "../DTO/clsMateriaDTO.h"
#include "../BL/clsMateriaBL.h"
#include "clsMateriaXAlumnoVIEW.h"
#include "../DAO/clsMateriaXAlumnoDAO.h"


class clsMateriasView
{
    public:
    void MenuMaterias();
    void Insertar();
    void Listar();
    void ListarBusqueda();
    void Asignar();
    void MostrarMateria(clsMateriaDTO);
    void MostrarAsignadosM(clsMateriaDTO *, int);
    void Eliminar();
    void Modificar();
    void MostrarAsignaciones();

};

#endif // CLSMATERIASVIEW_H

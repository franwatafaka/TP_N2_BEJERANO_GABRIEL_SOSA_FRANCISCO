#ifndef CLSALUMNOSVIEW_H
#define CLSALUMNOSVIEW_H

#include <cstring>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cstdio>
#include "../DTO/clsAlumnoDTO.h"
#include "../BL/clsAlumnoBL.h"


class clsAlumnosView
{
    public:
    void MenuAlumnos();
    void Insertar();
    void Listar();

};

#endif // CLSALUMNOSVIEW_H

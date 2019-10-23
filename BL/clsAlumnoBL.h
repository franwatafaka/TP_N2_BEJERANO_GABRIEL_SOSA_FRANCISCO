#ifndef CLSALUMNOBL_H
#define CLSALUMNOBL_H

#include "../DAO/clsAlumnoDAO.h"
#include "../DTO/clsAlumnoDTO.h"
#include <iostream>
#include <cstdio>
#include <iomanip>


class clsAlumnoBL
{
    public:
    void Insertar(clsAlumnoDTO);
    void Eliminar(int);
    void Modificar(clsAlumnoDTO);
    void Listar(clsAlumnoDTO *);
    int Count();

};


#endif // CLSALUMNOBL_H

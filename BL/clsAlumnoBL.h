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
    void ListarAsignados(clsAlumnoDTO *, int *);
    void BuscarSubA(clsAlumnoDTO *, char *cond);
    int BuscarSubCountA(char *);

};


#endif // CLSALUMNOBL_H

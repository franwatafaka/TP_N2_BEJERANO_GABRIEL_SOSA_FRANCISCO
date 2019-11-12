#ifndef CLSMATERIAXALUMNOBL_H
#define CLSMATERIAXALUMNOBL_H

#include "../DAO/clsMateriaXAlumnoDAO.h"
#include "../DTO/clsMateriaXAlumnoDTO.h"
#include <iostream>
#include <cstdio>
#include <iomanip>


class clsMateriaXAlumnoBL
{
    public:
        void Insertar(clsMateriaXAlumnoDTO, int, int, int);
        void Listar(clsMateriaXAlumnoDTO *);
        int Count();

};

#endif // CLSMATERIAXALUMNOBL_H

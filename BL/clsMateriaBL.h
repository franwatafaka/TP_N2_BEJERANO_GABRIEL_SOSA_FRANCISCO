#ifndef CLSMATERIABL_H
#define CLSMATERIABL_H

#include "../DAO/clsMateriaDAO.h"
#include "../DTO/clsMateriaDTO.h"
#include "../CSYSTEM/csystem.h"
#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;


class clsMateriaBL
{
    public:
    void Insertar(clsMateriaDTO);
    void Eliminar(int);
    void Modificar(clsMateriaDTO);
    void Listar(clsMateriaDTO *);
    int Count();

};

#endif // CLSMATERIABL_H

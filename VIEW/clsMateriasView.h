#ifndef CLSMATERIASVIEW_H
#define CLSMATERIASVIEW_H

#include <cstring>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cstdio>
#include "../DTO/clsMateriaDTO.h"
#include "../BL/clsMateriaBL.h"


class clsMateriasView
{
    public:
    void MenuMaterias();
    void Insertar();
    void Listar();

};

#endif // CLSMATERIASVIEW_H

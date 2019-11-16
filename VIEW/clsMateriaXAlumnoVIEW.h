#ifndef CLSMATERIAXALUMNOVIEW_H
#define CLSMATERIAXALUMNOVIEW_H

#include "../DAO/clsMateriaXAlumnoDAO.h"
#include "../DTO/clsMateriaXAlumnoDTO.h"
#include "../BL/clsMateriaXAlumnoBL.h"

class clsMateriaXAlumnoVIEW
{
    public:
        void AsignarMtoA();
        void AsignarAtoM();
        void MenuMXA();
        void MostrarAsignaciones();
        void MostrarAsignacionesM();

};

#endif // CLSMATERIAXALUMNOVIEW_H

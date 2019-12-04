#ifndef CLSMENSAJESVIEW_H
#define CLSMENSAJESVIEW_H

#include <cstring>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cstdio>


class clsMensajesView
{
    public:
        void txtMensajeError();
        void txtMenuPpal();
        void txtMenuMateria();
        void txtMenuAlumno();
        void txtMenuMXA();
        void txtLinea();
        void txtLineaLarga();
        void txtListaAlumnos();
        void txtListaMaterias();
        void txtPresentacion();
        void txtDespedida();
        void txtAsignacionError();
        void txtAsignacionExitosa();
        void txtAsignacionDeAlumnos();
        void txtAsignacionDeMaterias();
        void txtYaAsignado();
        void txtNoResults();
        void txtMateriaInexistente();
        void txtAlumnoInexistente();
        void txtSeleccionDeAlumno();
        void txtSeleccionDeMateria();
        void txtBusquedaSinResultados();
        void txtErrorIngreso();
};

#endif // CLSMENSAJESVIEW_H

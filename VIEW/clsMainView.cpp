
#include <cstdio>
#include <iostream>
#include <cstdlib>
#include "../CSYSTEM/csystem.h"
#include "clsMainView.h"
#include "clsMateriasView.h"
#include "clsAlumnosView.h"
#include "../BL/clsValidacionesBL.h"

using namespace std;

//agregar menu.h ACÁ ABAJO, (TODOS LOS MENUS Y SUBMENUS A UTILIZAR)

void clsMainView::Menu()
{
    char *op;
    clsValidacionesBL validar;
    bool salir=false;

//    cout<<op<<endl;

//    system("cls");
    while(!salir)
    {
        cout<<"----------MENU---------"<<endl;
        cout<<" 1 - Materias"<<endl;
        cout<<" 2 - Alumnos"<<endl;
        cout<<" 9 - Salir"<<endl;
        cout<<"-----------------------"<<endl;

        sys::getline(op,1);
        switch(validar.validarUnNumero(op))
        {
        case 49:
        {
            clsMateriasView matView;
            matView.MenuMaterias();
        }
        break;
        case 50:
        {
            clsAlumnosView aluView;
            aluView.MenuAlumnos();
        }
        case 57:
        {
            salir=true;
        }
        break;
        default:
        {

        }

        }
    }
}

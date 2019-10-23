
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
    char op[50];
    clsValidacionesBL validar;
    bool salir=false;
    while(!salir)
    {
        system("cls");
        cout<<"----------MENU---------"<<endl;
        cout<<" A - Materias"<<endl;
        cout<<" B - Alumnos"<<endl;
        cout<<" S - Salir"<<endl;
        cout<<"-----------------------"<<endl;
        cin.getline(op, 50);
        switch(validar.validarUnaLetra(op))
        {
        case 'a':
        case 'A':
        {
            clsMateriasView matView;
            matView.MenuMaterias();
        }
        break;
        case 'b':
        case 'B':
        {
            clsAlumnosView aluView;
            aluView.MenuAlumnos();
        }
        break;
        case 's':
        case 'S':
        {
            salir=true;
        }
        break;
        default:
        {
            cout<<"Error, elija una opcion valida"<<endl;
        }
        }
    }
}

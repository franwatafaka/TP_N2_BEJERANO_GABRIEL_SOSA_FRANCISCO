
#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <iomanip>
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
        cout<<"|----------------------------MENU----------------------------|"<<endl;
        cout<<setw(40)<<right<<" A - Materias"<<endl;
        cout<<setw(40)<<right<<" B - Alumnos"<<endl;
        cout<<setw(35)<<right<<" S - Salir"<<endl;
        cout<<"|------------------------------------------------------------|"<<endl;
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
            cout<<"|------------------------------------------------------------|"<<endl;
            cout<<setw(30)<<"   -   ERROR: POR FAVOR, INGRESE UNA OPCION VALIDA-"<<endl;
            cout<<"|------------------------------------------------------------|"<<endl;
            system("pause");
        }
        }
    }
}

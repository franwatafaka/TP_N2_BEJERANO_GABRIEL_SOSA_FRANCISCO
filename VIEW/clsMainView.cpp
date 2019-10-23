#include "clsMainView.h"
#include "clsMateriasView.h"
#include "clsAlumnosView.h"

using namespace std;

//agregar menu.h ACÁ ABAJO, (TODOS LOS MENUS Y SUBMENUS A UTILIZAR)

void clsMainView::Menu()
{
 char op;
 bool     salir=false;
    cout<<"----------MENU---------"<<endl;
    cout<<"M - Materias"<<endl;
    cout<<"A - Alumnos"<<endl;
    cout<<"S - Salir"<<endl;
    cout<<"-----------------------"<<endl;
    cin>>op;
    cin.ignore();
    system("cls");
    switch(op)
    {
        case 'm':
        case'M' :
        {
          clsMateriasView matView;
          matView.MenuMaterias();
        }
        break;
        case 'a':
        case'A' :
        {
          clsAlumnosView aluView;
          aluView.MenuAlumnos();
        }
        case's':
        case'S':
        {

        }
        break;
        default:
        {

        }
        break;
    }
}

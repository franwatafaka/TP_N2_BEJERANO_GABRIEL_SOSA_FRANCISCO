#include "clsMainView.h"
#include "clsMateriasView.h"
#include "clsAlumnosView.h"
#include "../BL/clsValidacionesBL.h"

using namespace std;

//agregar menu.h ACÁ ABAJO, (TODOS LOS MENUS Y SUBMENUS A UTILIZAR)

void clsMainView::Menu()
{
 char *op;
 clsValidacionesBL val;
 bool salir=false;
    cout<<"----------MENU---------"<<endl;
    cout<<" 1- Materias"<<endl;
    cout<<" 2 - Alumnos"<<endl;
    cout<<" 9 - Salir"<<endl;
    cout<<"-----------------------"<<endl;
    cin>>op;
    cout<<op<<endl;
    system("pause");
    cin.ignore();
    system("cls");
    switch(val.validarUnNumero(op))
    {
        case 1:
        {
          clsMateriasView matView;
          matView.MenuMaterias();
        }
        break;
        case 2:
        {
          clsAlumnosView aluView;
          aluView.MenuAlumnos();
        }
        case 9:
        {
        salir=true;
        }
        break;
        default:
        {

        }
        break;
    }
}

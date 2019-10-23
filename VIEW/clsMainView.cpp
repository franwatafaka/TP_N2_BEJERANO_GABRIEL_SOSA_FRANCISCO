#include "clsMainView.h"
#include "clsMateriasView.h"

using namespace std;

//agregar menu.h ACÁ ABAJO, (TODOS LOS MENUS Y SUBMENUS A UTILIZAR)

void clsMainView::Menu()
{
    char op;
 bool     salir=false;
    cout<<"----------MENU---------"<<endl;
    cout<<"M - Materias"<<endl;
    cout<<"S - Salir"<<endl;
    cout<<"-----------------------"<<endl;
    cin>>op;
    cin.ignore();
    switch(op)
    {
        case 'm':
        case'M' :
        {
          clsMateriasView matView;
          matView.MenuMaterias();
        }
        break;
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

#include "clsMateriasView.h"
#include "../BL/clsValidacionesBL.h"

//#include "../BL/clsValidacionesBL.h"

using namespace std;

void clsMateriasView::MenuMaterias()
{
    system("cls");
    char op[50];
    clsValidacionesBL validar;
    bool salir=false;
    while(!salir)
    {
    cout<<"----------SUBMENU MATERIAS---------"<<endl;
    cout<<"A - Nueva Materia"<<endl;
    cout<<"B - Listar Materias"<<endl;
    cout<<"S - Salir"<<endl;
    cout<<"-----------------------------------"<<endl;
    cin.getline(op, 50);
    switch(validar.validarUnaLetra(op))
    {
        case 'a':
        case 'A':
        {
            Insertar();
        }
        break;
        case 'b':
        case 'B':
        {
            Listar();
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
        system("cls");
        cout<<"----------------------------------------------"<<endl;
        cout<<"-ERROR: POR FAVOR, INGRESE UNA OPCION VALIDA-"<<endl;
        cout<<"----------------------------------------------"<<endl<<endl;
        }
        break;
    }
    }
}

void clsMateriasView::Insertar()
{
    char nombre[50];
    char profesor[50];
    clsMateriaDTO dto;
    clsMateriaBL bl;
    system("cls");
    cout<<"NUEVA MATERIA:"<<endl;
    cout<<"Ingrese un nombre:"<<endl;
    cin.getline(nombre, 50);
    cout<<"Ingrese un profesor:"<<endl;
    cin.getline(profesor, 50);
    dto.SetNombre(nombre);
    dto.SetProfesor(profesor);
    bl.Insertar(dto);

}

void clsMateriasView::Listar()
    {
    clsMateriaBL bl;
    system("cls");
    cout<<"---------------------------------------------"<<endl;
    cout<<"-               LISTA DE MATERIAS           -"<<endl;
    cout<<"---------------------------------------------"<<endl<<endl;
    int c=bl.Count();
    clsMateriaDTO *lista = (clsMateriaDTO*)malloc(sizeof(clsMateriaDTO)*c);
    bl.Listar(lista);
    char nombre[50];
    char profesor[50];
    cout<<setw(6)<<"NOMBRE:";
    cout<<setw(20)<<"PROFESOR:";
    cout<<setw(20)<<"ID:"<<endl;
    cout<<"----------------------------------------------"<<endl;
    for(int x=0;x<c;x++)
    {
        lista[x].GetNombre(nombre);
        cout<<setw(6)<<nombre;
        lista[x].GetProfesor(profesor);
        cout<<setw(20)<<profesor;
        cout<<setw(20)<<lista[x].GetId()<<endl;
        cout<<"----------------------------------------------"<<endl;
    }
    cout<<endl;
    }



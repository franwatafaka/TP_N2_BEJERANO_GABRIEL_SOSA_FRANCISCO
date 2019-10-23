#include "clsMateriasView.h"

using namespace std;

void clsMateriasView::MenuMaterias()
{
    char op;
    bool salir=false;
    cout<<"----------SUBMENU MATERIAS---------"<<endl;
    cout<<"N - Nueva Materia"<<endl;
    cout<<"L - Listar Materias"<<endl;
    cout<<"S - Salir"<<endl;
    cout<<"-----------------------"<<endl;
    cin>>op;
    cin.ignore();
    switch(op)
    {
        case'n':
        case'N':
        {
            Insertar();
        }
        case'L':
        case'l':
        {
            Listar();
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
    cout<<"-----------LISTA DE MATERIAS----------------"<<endl;
    int c=bl.Count();
    clsMateriaDTO *lista = (clsMateriaDTO*)malloc(sizeof(clsMateriaDTO)*c);
    bl.Listar(lista);
    char nombre[50];
    char profesor[50];
    for(int x=0;x<c;x++)
    {
        lista[x].GetNombre(nombre);
        lista[x].GetProfesor(profesor);
        cout<<setw(30)<<lista[x].GetId();
    }
    }



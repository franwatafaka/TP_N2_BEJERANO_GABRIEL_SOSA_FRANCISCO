#include "clsMateriasView.h"

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
    //ESTA FUNCIO�N EST� ERN CLASES GRABADAS, EN EL VIDEO  DE ORDENAR
    //LAS "TABLAS" � EN EL �LTIMO VIDEO QUE SUBA HOY 24/10
    clsMateriaBL bl;
    system("cls");
    cout<<"---------LISTADO DE MATERIAS-----------"<<endl;
    int c=bl.Count();
    clsMateriaDTO *lista=(clsMateriaDTO*)malloc(sizeof(clsMateriaDTO)*c);
    bl.Listar(lista);
}



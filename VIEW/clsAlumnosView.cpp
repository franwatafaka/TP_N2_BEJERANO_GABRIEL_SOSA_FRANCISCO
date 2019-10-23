#include "clsAlumnosView.h"
#include "../BL/clsValidacionesBL.h"

using namespace std;

void clsAlumnosView::MenuAlumnos()
{
    system("cls");
    char op[50];
    clsValidacionesBL validar;
    bool salir=false;
    while(!salir)
    {
    cout<<"----------SUBMENU ALUMNOS---------"<<endl;
    cout<<"A - Nuevo Alumno"<<endl;
    cout<<"B - Listar Alumnos"<<endl;
    cout<<"S - Salir"<<endl;
    cout<<"-----------------------"<<endl;
    cin.getline(op, 50);
    switch(validar.validarUnaLetra(op))
    {
        case'a':
        case'A':
        {
            Insertar();
        }
        case'b':
        case'B':
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
}

void clsAlumnosView::Insertar()
{
    char nombre[50];
    char apellido[50];
    clsAlumnoDTO dto;
    clsAlumnoBL bl;
    system("cls");
    cout<<"NUEVO ALUMNO:"<<endl;
    cout<<"Ingrese un nombre:"<<endl;
    cin.getline(nombre, 50);
    cout<<"Ingrese un apellido:"<<endl;
    cin.getline(apellido, 50);
    dto.SetNombre(nombre);
    dto.SetApellido(apellido);
    bl.Insertar(dto);

}

void clsAlumnosView::Listar()
    {
    clsAlumnoBL bl;
    system("cls");
    cout<<"-----------LISTA DE ALUMNOS----------------"<<endl;
    int c=bl.Count();
    clsAlumnoDTO *lista = (clsAlumnoDTO*)malloc(sizeof(clsAlumnoDTO)*c);
    bl.Listar(lista);
    char nombre[50];
    char apellido[50];
    for(int x=0;x<c;x++)
    {
        lista[x].GetNombre(nombre);
        lista[x].GetApellido(apellido);
        cout<<setw(30)<<lista[x].GetLegajo();
    }
    }

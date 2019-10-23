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
    cout<<"C - Eliminar Alumnos"<<endl;
    cout<<"D - Modificar Alumnos"<<endl;
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
        break;
        case'b':
        case'B':
        {
            Listar();
        }
        break;
        case'c':
        case'C':
        {
            Eliminar();
        }
        break;
        case'd':
        case'D':
        {
            Modificar();
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

void clsAlumnosView::Eliminar()
{
    int Legajo;
    clsAlumnoDAO dao;
    Listar();
    cout<<"Ingrese el legajo del alumno a eliminar:"<<endl;
    cin>>Legajo;
    dao.Eliminar(Legajo);
}

void clsAlumnosView::Modificar()
{
    char nombre[50];
    char apellido[50];
    int legajo;
    clsAlumnoDTO dto;
    clsAlumnoBL bl;
    system("cls");
    Listar();
    cout<<"Ingrese el legajo del alumno cuyos datos se deseen modificar:"<<endl;
    cin>>legajo;
    dto.SetLegajo(legajo);
    cin.ignore();
    cout<<"MODIFICAR ALUMNO:"<<endl;
    cout<<"Ingrese nuevo nombre:"<<endl;
    cin.getline(nombre, 50);
    cout<<"Ingrese nuevo apellido:"<<endl;
    cin.getline(apellido, 50);
    dto.SetNombre(nombre);
    dto.SetApellido(apellido);
    bl.Modificar(dto);
}

void clsAlumnosView::Listar()
    {
    clsAlumnoBL bl;
    system("cls");
    cout<<"---------------------------------------------"<<endl;
    cout<<"-               LISTA DE ALUMNOS            -"<<endl;
    cout<<"---------------------------------------------"<<endl<<endl;
    int c=bl.Count();
    clsAlumnoDTO *lista = (clsAlumnoDTO*)malloc(sizeof(clsAlumnoDTO)*c);
    bl.Listar(lista);
    char nombre[50];
    char apellido[50];
    cout<<setw(6)<<"NOMBRE:";
    cout<<setw(20)<<"APELLIDO:";
    cout<<setw(20)<<"LEGAJO:"<<endl;
    cout<<"----------------------------------------------"<<endl;
    for(int x=0;x<c;x++)
    {
        lista[x].GetNombre(nombre);
        cout<<setw(6)<<nombre;
        lista[x].GetApellido(apellido);
        cout<<setw(20)<<apellido;
        cout<<setw(20)<<lista[x].GetLegajo()<<endl;
        cout<<"----------------------------------------------"<<endl;
    }
    }

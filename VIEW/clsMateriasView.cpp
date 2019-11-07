/**#############################################################################
 ARCHIVO             : clsMensajesView.cpp
 AUTOR/ES            : Francisco Sosa y Gabriel Bejarano
 VERSION             : 0.01 beta.
 FECHA DE CREACION   : 07/11/2019.
 ULTIMA ACTUALIZACION: dd/mm/aaaa.
*****************************************************************************
                             INCLUSIONES ESTANDAR
=============================================================================**/

#include "clsMateriasView.h"
#include "../BL/clsValidacionesBL.h"
#include "../VIEW/clsMensajesView.h"
//#include "../BL/clsValidacionesBL.h"


using namespace std;
/**=============================================================================
 FUNCION : void subMaterias()
 ACCION : Muestra y permite el acceso a las funciones de gestion de materias
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsMateriasView::MenuMaterias()
{
    clsMensajesView txt;
    system("cls");
    char op[50];
    clsValidacionesBL validar;
    bool salir=false;
    while(!salir)
    {
    txt.vistaMenuMateria();
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
        txt.mensajeError();
        }
        break;
    }
    }
}

/**=============================================================================
 FUNCION : void subMaterias()
 ACCION : Muestra y permite el acceso a las funciones de gestion de materias
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
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
/**=============================================================================
 FUNCION : void subMaterias()
 ACCION : Muestra y permite el acceso a las funciones de gestion de materias
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsMateriasView::Eliminar()
{
    int Id;
    clsMateriaDAO dao;
    Listar();
    cout<<"Ingrese el ID de la materia a eliminar:"<<endl;
    cin>>Id;
    dao.Eliminar(Id);
}
/**=============================================================================
 FUNCION : void subMaterias()
 ACCION : Muestra y permite el acceso a las funciones de gestion de materias
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsMateriasView::Modificar()
{
    char nombre[50];
    char profesor[50];
    int id;
    clsMateriaDTO dto;
    clsMateriaBL bl;
    system("cls");
    Listar();
    cout<<setw(20)<<"Ingrese el ID de la materia cuyos datos se deseen modificar:";
    cin>>id;
    dto.SetId(id);
    cin.ignore();
    cout<<setw(40)<<right<<"MODIFICAR MATERIA:"<<endl;
    cout<<setw(20)<<"Ingrese nuevo nombre:";
    cin.getline(nombre, 50);
    cout<<setw(20)<<"Ingrese nuevo profesor:";
    cin.getline(profesor, 50);
    dto.SetNombre(nombre);
    dto.SetProfesor(profesor);
    bl.Modificar(dto);

}
/**=============================================================================
 FUNCION : void subMaterias()
 ACCION : Muestra y permite el acceso a las funciones de gestion de materias
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsMateriasView::Listar()
    {
    clsMateriaBL bl;
    clsMensajesView txt;
    system("cls");
    txt.txtLinea();
    cout<<"|"<<setw(30)<<right<<"LISTA DE MATERIAS"<<setw(20)<<"|"<<endl;
    txt.txtLinea();
    int c=bl.Count();
    clsMateriaDTO *lista = (clsMateriaDTO*)malloc(sizeof(clsMateriaDTO)*c);
    bl.Listar(lista);
    char nombre[50];
    char profesor[50];
    cout<<setw(6)<<"NOMBRE:";
    cout<<setw(20)<<"PROFESOR:";
    cout<<setw(20)<<"ID:"<<endl;
    for(int x=0;x<c;x++)
    {
        lista[x].GetNombre(nombre);
        cout<<setw(6)<<nombre;
        lista[x].GetProfesor(profesor);
        cout<<setw(20)<<profesor;
        cout<<setw(20)<<lista[x].GetId()<<endl;
        txt.txtLinea();
    }
    cout<<endl;
    }



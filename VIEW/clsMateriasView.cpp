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


using namespace std;
/**=============================================================================
 FUNCION : void MenuMaterias()
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
    txt.txtMenuMateria();
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
        case'e':
        case'E':
        {
            Asignar();
        }
        break;
        case'f':
        case'F':
        {
            MostrarAsignaciones();
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
        txt.txtMensajeError();
        system("cls");
        }
        break;
    }
    }
}

/**=============================================================================
 FUNCION : void Insertar()
 ACCION : Carga en la db el objeto dto
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
 FUNCION : void Eliminar()
 ACCION : Elimina el registro de la db (de manera logica)
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
 FUNCION : void Modificar()
 ACCION : Guarda en la db la modificacion realizada en el registro.
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
 FUNCION : void Listar()
 ACCION : Muestra el listado de materias activas
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsMateriasView::Listar()
    {
    clsMateriaBL bl;
    clsMensajesView txt;
    system("cls");
    txt.txtListaMaterias();
    int c=bl.Count();
    clsMateriaDTO *lista = (clsMateriaDTO*)malloc(sizeof(clsMateriaDTO)*c);
    bl.Listar(lista);
    char nombre[50];
    char profesor[50];
    cout<<setw(6)<<"NOMBRE:";
    cout<<setw(20)<<"PROFESOR:";
    cout<<setw(20)<<"ID:"<<endl;
    txt.txtLinea();
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

    /**=============================================================================
 FUNCION : void MostrarAsignados()
 ACCION : Muestra el listado de alumnos de la db.
 PARAMETROS: clsAlumnoDTO *listalegajos, int cant
 DEVUELVE : nada
============================================================================= **/
void clsMateriasView::MostrarAsignadosM(clsMateriaDTO *listaids, int cant)
{
    clsMensajesView txt;
    txt.txtListaMaterias();
    char nombre[50];
    char profesor[50];
    cout<<setw(6)<<"NOMBRE:";
    cout<<setw(20)<<"PROFESOR:";
    cout<<setw(20)<<"ID:"<<endl;
    txt.txtLinea();
    for(int x=0; x<cant; x++)
    {
        listaids[x].GetNombre(nombre);
        cout<<setw(6)<<nombre;
        listaids[x].GetProfesor(profesor);
        cout<<setw(20)<<profesor;
        cout<<setw(20)<<listaids[x].GetId()<<endl;
        txt.txtLinea();
    }
}
/**=============================================================================
 FUNCION : void MostrarMateria()
 ACCION : Muestra la materia cuyos alumnos asignados seran listados
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsMateriasView::MostrarMateria(clsMateriaDTO dto)
    {
    clsMensajesView txt;
    system("cls");
    txt.txtLinea();
    cout<<"DATOS DE LA MATERIA CUYOS ALUMNOS SE LISTARAN:"<<endl;
    char nombre[50];
    char profesor[50];
    cout<<setw(6)<<"NOMBRE:";
    cout<<setw(20)<<"PROFESOR:";
    cout<<setw(20)<<"ID:"<<endl;
    txt.txtLinea();
        dto.GetNombre(nombre);
        cout<<setw(6)<<nombre;
        dto.GetProfesor(profesor);
        cout<<setw(20)<<profesor;
        cout<<setw(20)<<dto.GetId()<<endl;
        txt.txtLinea();
    cout<<endl;
    }

/**=============================================================================
 FUNCION : void MostrarAlumno()
 ACCION : Muestra el listado de alumnos de la db.
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsMateriasView::Asignar()
{
        clsMateriaXAlumnoVIEW mview;
        mview.AsignarAtoM();
}

/**=============================================================================
 FUNCION : void MostrarAlumno()
 ACCION : Muestra el listado de alumnos de la db.
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsMateriasView::MostrarAsignaciones()
{
        clsMateriaXAlumnoDAO mdao;
        clsMensajesView txt;
        Listar();
        txt.txtLinea();
        txt.txtSeleccionDeMateria();
        int id;
        cin>>id;
        mdao.mostrarAlumnosAsignados(id);
}



/**#############################################################################
 ARCHIVO             : clsAlumnosView.cpp
 AUTOR/ES            : Francisco Sosa y Gabriel Bejarano
 VERSION             : 1.0 beta.
 FECHA DE CREACION   : 23/10/2019.
 ULTIMA ACTUALIZACION: 07/11/2019.
*****************************************************************************
                             INCLUSIONES ESTANDAR
=============================================================================**/

#include "clsAlumnosView.h"

/*****************************************************************************
                             INCLUSIONES PERSONALES
=============================================================================**/
#include "../BL/clsValidacionesBL.h"
#include "../VIEW/clsMensajesView.h"
using namespace std;

/**=============================================================================
 FUNCION : void MenuAlumnos()
 ACCION : Muestra las diferentes opciones del menu
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsAlumnosView::MenuAlumnos()
{
    clsMensajesView txt;
    system("cls");
    char op[50];
    clsValidacionesBL validar;
    bool salir=false;
    while(!salir)
    {
        txt.txtMenuAlumno();
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
        case'e':
            case'E':
                {
                    Asignar();                }
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

        }
    }
}
/**=============================================================================
 FUNCION : void Insertar()
 ACCION : Permite la carga de un nuevo registro a la db de Alumnos
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
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

/**=============================================================================
 FUNCION : void Eliminar()
 ACCION : Pide los datos de que alumno se desea eliminar, y setea el valor
        Eliminado en true(baja logica)
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsAlumnosView::Eliminar()
{
    int Legajo;
    clsAlumnoDAO dao;
    Listar();
    cout<<"Ingrese el legajo del alumno a eliminar:";
    cin>>Legajo;
    dao.Eliminar(Legajo);
}

/**=============================================================================
 FUNCION : void Modificar()
 ACCION : solicita el legajo del alumno a modificar y permite su modificacion
            y grabado en la db
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsAlumnosView::Modificar()
{
    char nombre[50];
    char apellido[50];
    int legajo;
    clsAlumnoDTO dto;
    clsAlumnoBL bl;
    system("cls");
    Listar();
    cout<<"Ingrese el legajo del alumno cuyos datos se deseen modificar:";
    cin>>legajo;
    dto.SetLegajo(legajo);
    cin.ignore();
    cout<<"MODIFICAR ALUMNO:"<<endl;
    cout<<"Ingrese nuevo nombre:";
    cin.getline(nombre, 50);
    cout<<"Ingrese nuevo apellido:";
    cin.getline(apellido, 50);
    dto.SetNombre(nombre);
    dto.SetApellido(apellido);
    bl.Modificar(dto);
}

/**=============================================================================
 FUNCION : void Listar()
 ACCION : Muestra el listado de alumnos de la db.
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsAlumnosView::Listar()
{
    clsAlumnoBL bl;
    clsMensajesView txt;
    txt.txtListaAlumnos();
    int c=bl.Count();
    clsAlumnoDTO *lista = (clsAlumnoDTO*)malloc(sizeof(clsAlumnoDTO)*c);
    bl.Listar(lista);
    char nombre[50];
    char apellido[50];
    cout<<setw(6)<<"NOMBRE:";
    cout<<setw(20)<<"APELLIDO:";
    cout<<setw(20)<<"LEGAJO:"<<endl;
    txt.txtLinea();
    for(int x=0; x<c; x++)
    {
        lista[x].GetNombre(nombre);
        cout<<setw(6)<<nombre;
        lista[x].GetApellido(apellido);
        cout<<setw(20)<<apellido;
        cout<<setw(20)<<lista[x].GetLegajo()<<endl;
        txt.txtLinea();
    }
}

/**=============================================================================
 FUNCION : void MostrarAsignados()
 ACCION : Muestra el listado de alumnos de la db.
 PARAMETROS: clsAlumnoDTO *listalegajos, int cant
 DEVUELVE : nada
============================================================================= **/
void clsAlumnosView::MostrarAsignados(clsAlumnoDTO *listalegajos, int cant)
{
    clsMensajesView txt;
    txt.txtListaAlumnos();
    char nombre[50];
    char apellido[50];
    cout<<setw(6)<<"NOMBRE:";
    cout<<setw(20)<<"APELLIDO:";
    cout<<setw(20)<<"LEGAJO:"<<endl;
    txt.txtLinea();
    for(int x=0; x<cant; x++)
    {
        listalegajos[x].GetNombre(nombre);
        cout<<setw(6)<<nombre;
        listalegajos[x].GetApellido(apellido);
        cout<<setw(20)<<apellido;
        cout<<setw(20)<<listalegajos[x].GetLegajo()<<endl;
        txt.txtLinea();
    }
}

/**=============================================================================
 FUNCION : void MostrarAlumno()
 ACCION : Muestra el listado de alumnos de la db.
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsAlumnosView::MostrarAlumno(clsAlumnoDTO dto)
{
    clsMensajesView txt;
    txt.txtListaAlumnos();
    char nombre[50];
    char apellido[50];
    cout<<setw(6)<<"NOMBRE:";
    cout<<setw(20)<<"APELLIDO:";
    cout<<setw(20)<<"LEGAJO:"<<endl;
    txt.txtLinea();
        dto.GetNombre(nombre);
        cout<<setw(6)<<nombre;
        dto.GetApellido(apellido);
        cout<<setw(20)<<apellido;
        cout<<setw(20)<<dto.GetLegajo()<<endl;
        txt.txtLinea();
}

/**=============================================================================
 FUNCION : void MostrarAlumno()
 ACCION : Muestra el listado de alumnos de la db.
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsAlumnosView::Asignar()
{
        clsMateriaXAlumnoVIEW aview;
        aview.AsignarMtoA();
}

/**=============================================================================
 FUNCION : void MostrarAlumno()
 ACCION : Muestra el listado de alumnos de la db.
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsAlumnosView::MostrarAsignaciones()
{
        clsMateriaXAlumnoDAO adao;
        clsMensajesView txt;
        Listar();
        txt.txtLinea();
        txt.txtSeleccionDeAlumno();
        int legajo;
        cin>>legajo;
        adao.mostrarMateriasAsignadas(legajo);
}

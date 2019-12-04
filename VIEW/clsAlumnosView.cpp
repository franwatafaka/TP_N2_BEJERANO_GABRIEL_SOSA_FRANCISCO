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
#include "iomanip"
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
            system("cls");
        }
        break;
        case'b':
        case'B':
        {
            system("cls");
            Listar();
            system("pause");
            system("cls");
        }
        break;
        case'c':
        case'C':
        {
            system("cls");
            ListarBusqueda();
        }
        break;
        case'd':
        case'D':
        {
            system("cls");
            Eliminar();
        }
        break;
        case'e':
        case'E':
        {
            system("cls");
            Modificar();
        }
        break;
        case'f':
        case'F':
        {
            system("cls");
            Asignar();
        }
        break;
        case'g':
        case'G':
        {
            system("cls");
            MostrarAsignaciones();
        }
        break;
        case 'H':
        case 'h':
        {
            //aca entra la ayuda
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
    tFecha fecha;
    clsAlumnoDTO dto;
    clsAlumnoBL bl;
    clsValidacionesBL validar;
    clsMensajesView txt;
    clsAyudaVIEW ayuda;
    system("cls");
    cout<<"NUEVO ALUMNO:"<<endl;
    cout<<"NOTA: Ingrese la palabra \" ayuda \" para desplegar ejemplos de carga"<<endl;
    cout<<setw(20)<<"Ingrese un nombre:"<<endl;
    cin.getline(nombre, 50);
    cin.ignore();
    if((validar.strAlfa(nombre)!= -1) && (validar.IngresoAyuda(nombre)!=-1))
    {
        cout<<setw(20)<<"Ingrese un apellido:"<<endl;
        cin.getline(apellido, 50);
        if((validar.strAlfa(apellido)!= -1) && (validar.IngresoAyuda(apellido)!=-1))
        {
            cout<<setw(20)<<"Ingrese dia de nacimiento:"<<endl;
            cin>>fecha.dia;
            cout<<setw(20)<<"Ingrese mes de nacimiento:"<<endl;
            cin>>fecha.mes;
            cout<<setw(20)<<"Ingrese anio de nacimiento:"<<endl;
            cin>>fecha.anio;
            if(validar.ValidacionFecha(fecha))
            {
                system("pause");
                dto.SetNombre(nombre);
                dto.SetApellido(apellido);
                dto.SetFecha(fecha);
                bl.Insertar(dto);
            }
            else
            {
                txt.txtErrorIngreso();
            }
        }
        else
        {
            if(validar.IngresoAyuda(apellido)==-1)
            {
                ayuda.AyuInsertarA();
            }
            else
            {
            txt.txtErrorIngreso();
            }
        }
    }
    else
    {
        if(validar.IngresoAyuda(nombre)==-1)
        {
            ayuda.AyuInsertarA();
        }
        else
        {
        txt.txtErrorIngreso();
        }
    }
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
    clsMateriaXAlumnoDAO mxadao;
    Listar();
    cout<<"Ingrese el legajo del alumno a eliminar:";
    cin>>Legajo;
    dao.Eliminar(Legajo);
    mxadao.EliminarXLegajo(Legajo);
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
    clsValidacionesBL validar;
    clsMensajesView txt;
    tFecha fecha;
    system("cls");
    Listar();
    cout<<"Ingrese el legajo del alumno cuyos datos se deseen modificar:";
    cin>>legajo;
    dto.SetLegajo(legajo);
    cin.ignore();
    cout<<"MODIFICAR ALUMNO:"<<endl;
    cout<<"NUEVO ALUMNO:"<<endl;
    cout<<setw(20)<<"Ingrese un nuevo nombre:"<<endl;
    cout << "\t \t " ; cin.getline(nombre, 50);
    if(validar.strAlfa(nombre)!= -1)
    {
        cout<<setw(20)<<"Ingrese un nuevo apellido:"<<endl;
        cout << "\t \t " ; cin.getline(apellido, 50);
        if(validar.strAlfa(apellido)!= -1)
        {
            cout<<setw(20)<<"Ingrese dia de nacimiento:"<<endl;
            cin>>fecha.dia;
            cout<<setw(20)<<"Ingrese mes de nacimiento:"<<endl;
            cin>>fecha.mes;
            cout<<setw(20)<<"Ingrese anio de nacimiento:"<<endl;
            cin>>fecha.anio;
            if(validar.ValidacionFecha(fecha))
            {
                system("pause");
                dto.SetNombre(nombre);
                dto.SetApellido(apellido);
                dto.SetFecha(fecha);
                bl.Modificar(dto);
            }
            else
            {
                txt.txtErrorIngreso();
            }
        }
        else
        {
            txt.txtErrorIngreso();
        }
    }
    else
    {
        txt.txtErrorIngreso();
    }
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
    system("cls");
    int c=bl.Count();
    clsAlumnoDTO *lista = (clsAlumnoDTO*)malloc(sizeof(clsAlumnoDTO)*c);
    bl.Listar(lista);
    char nombre[50];
    char apellido[50];
    for(int x=0; x<c; x++)
    {
        if(!lista[x].GetEliminado())
        {
            if(x==0)
            {
                txt.txtListaAlumnos();
            }
            lista[x].GetNombre(nombre);
            lista[x].GetApellido(apellido);
            cout<<"\t |" <<nombre<<setw(30)<<apellido <<setw(30)<<lista[x].GetLegajo()<<endl;
            txt.txtLineaLarga();
        }
    }
}

/**=============================================================================
 FUNCION : void ListarBusqueda()
 ACCION : Muestra el listado de alumnos de la db de acuerdo a un parametro(nombre)
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsAlumnosView::ListarBusqueda()
{
    clsAlumnoBL bl;
    char cond[50];
    clsMensajesView txt;

    cout<<"Ingrese el alumno:"<<endl;
    cin.getline(cond, 50);
    int c=bl.BuscarSubCountA(cond);
    if(c==0){
        txt.txtNoResults();
    }
    else{
    clsAlumnoDTO *lista = (clsAlumnoDTO*)malloc(sizeof(clsAlumnoDTO)*c);
    bl.BuscarSubA(lista, cond);
    char nombre[50];
    char apellido[50];
    for(int x=0; x<c; x++)
    {
        if(x==0)
        {
            txt.txtListaAlumnos();
        }
        lista[x].GetNombre(nombre);
        lista[x].GetApellido(apellido);
        cout<<setw(40)<<nombre <<setw(17)<<apellido << setw(24)<<lista[x].GetLegajo()<<endl;
        txt.txtLineaLarga();
    }
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
 ACCION : Muestra el dto pasado
 PARAMETROS: clsAlumnoDTO dto
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
 FUNCION : void Asignar()
 ACCION : Accede a la gesti�n de asignaci�n de alumnos
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsAlumnosView::Asignar()
{
        clsMateriaXAlumnoVIEW aview;
        aview.AsignarMtoA();
}

/**=============================================================================
 FUNCION : void MostrarAsignaciones()
 ACCION : Muestra las materias asignadas al alumno
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

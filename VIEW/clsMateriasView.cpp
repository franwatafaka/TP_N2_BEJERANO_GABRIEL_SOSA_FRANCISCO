/**#############################################################################
 ARCHIVO             : clsMensajesView.cpp
 AUTOR/ES            : Francisco Sosa y Gabriel Bejarano
 VERSION             : 1.2 beta.
 FECHA DE CREACION   : 07/11/2019.
 ULTIMA ACTUALIZACION: 24/11/2019.
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
    cout << "\t \t " ; cin.getline(op, 50);
    switch(validar.validarUnaLetra(op))
    {
        case 'a':
        case 'A':
        {
            system("cls");
            Insertar();
        }
        break;
        case 'b':
        case 'B':
        {
            system("cls");
            Listar();
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
    clsValidacionesBL validar;
    clsMensajesView txt;
    system("cls");
    txt.txtLineaLarga();

    cout<<setw(65)<<right<<"NUEVA MATERIA"<<endl;
    txt.txtLineaLarga();
    cout<<setw(60)<<right<<"INGRESE EL NOMBRE DE LA MATERIA : ";
    cin.getline(nombre, 50);
    if(validar.strAlfa(nombre)!= -1)
    {
        cout<<setw(40)<<right<<"INGRESE NOMBRE DEL PROFESOR : ";
        cin.getline(profesor, 50);
        if(validar.strAlfa(profesor)!= -1)
        {
            system("pause");
            dto.SetNombre(nombre);
            dto.SetProfesor(profesor);
            bl.Insertar(dto);
        }
        else
        {
            txt.txtErrorIngreso();
            system("pause");
        }
    }
    else
    {
        txt.txtErrorIngreso();
        system("pause");
    }
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
    clsMateriaXAlumnoDAO mxadao;
    Listar();
    cout<<setw(40)<<right<<"INGRESE EL ID DE MATERIA A ELIMINAR : " ;
    cout << "\t \t "; cin>>Id;
    dao.Eliminar(Id);
    mxadao.EliminarXId(Id);
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
    clsValidacionesBL validar;
    clsMensajesView txt;
    system("cls");
    Listar();
    cout<<setw(40)<<right<<"Ingrese el ID de la materia cuyos datos se deseen modificar:";
    cout << "\t \t" ; cin>>id;
    dto.SetId(id);
    cin.ignore();
    cout<<setw(60)<<right<<"MODIFICAR MATERIA:"<<endl;
    cout<<setw(40)<<right<<"Ingrese un nombre:"<<endl;
    cout << "\t \t " ; cin.getline(nombre, 50);
    if(validar.strAlfa(nombre)!= -1)
    {
        cout<<setw(40)<<right<<"Ingrese un profesor:"<<endl;
        cout << "\t \t " ; cin.getline(profesor, 50);
        if(validar.strAlfa(profesor)!= -1)
        {
            system("pause");
            dto.SetNombre(nombre);
            dto.SetProfesor(profesor);
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
/**=============================================================================
 FUNCION : void ListarBusqueda()
 ACCION : Muestra el listado de materias activas de acuerdo a la cadena ingresada
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsMateriasView::ListarBusqueda()
    {
    clsMateriaBL bl;
    char cond[50];
    clsMensajesView txt;
    system("cls");
    txt.txtListaMaterias();
   cout<<setw(40)<<right<<"INGRESE LA MATERIA : ";
    cout << "\t \t " ;cin.getline(cond, 50);
    int c=bl.BuscarSubCountM(cond);
    clsMateriaDTO *lista = (clsMateriaDTO*)malloc(sizeof(clsMateriaDTO)*c);
    bl.BuscarSubM(lista, cond);
    char nombre[50];
    char profesor[50];
     txt.txtLinea();
    cout<<"|" <<setw(20)<<right<<"NOMBRE" <<setw(20)<<right <<"|" <<setw(20)<<right<<"PROFESOR" << setw(10)<<right<<"ID"<<endl;
    txt.txtLinea();
    for(int x=0;x<c;x++)
    {
        lista[x].GetNombre(nombre);
        cout<<setw(40)<<right<<nombre;
        lista[x].GetProfesor(profesor);
        cout<<setw(40)<<right<<profesor;
        cout<<setw(40)<<right<<lista[x].GetId()<<endl;
        txt.txtLinea();
    }
    cout<<endl;
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
    int c=bl.Count();
    clsMateriaDTO *lista = (clsMateriaDTO*)malloc(sizeof(clsMateriaDTO)*c);
    bl.Listar(lista);
    char nombre[50];
    char profesor[50];
    for(int x=0;x<c;x++)
    {
        if(!lista[x].GetEliminado())
        {
        if(x==0)
        {
            txt.txtListaMaterias();
        }

        lista[x].GetNombre(nombre);
        lista[x].GetProfesor(profesor);
        cout<<setw(40)<<right<<nombre <<setw(17)<<right<<profesor<<setw(24)<<right<<lista[x].GetId()<<endl;
        txt.txtLineaLarga();
        }
    }
    cout<<endl;
}


    /**=============================================================================
 FUNCION : void MostrarAsignadosM()
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
    txt.txtLinea();
    cout<<"|" <<setw(20)<<right<<"NOMBRE" <<setw(20)<<right <<"|" <<setw(20)<<right<<"PROFESOR" << setw(10)<<right<<"ID"<<endl;
    txt.txtLinea();
    for(int x=0; x<cant; x++)
    {
        listaids[x].GetNombre(nombre);
        cout<<setw(40)<<right<<nombre;
        listaids[x].GetProfesor(profesor);
        cout<<setw(40)<<right<<profesor;
        cout<<setw(40)<<right<<listaids[x].GetId()<<endl;
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
    cout<<setw(40)<<right<<"DATOS DE LA MATERIA CUYOS ALUMNOS SE LISTARAN:"<<endl;
    char nombre[50];
    char profesor[50];
    txt.txtLinea();
    cout<<"|" <<setw(20)<<right<<"NOMBRE" <<setw(20)<<right <<"|" <<setw(20)<<right<<"PROFESOR" << setw(10)<<right<<"ID"<<endl;
    txt.txtLinea();
        dto.GetNombre(nombre);
        cout<<setw(40)<<right<<nombre;
        dto.GetProfesor(profesor);
        cout<<setw(40)<<right<<profesor;
        cout<<setw(40)<<right<<dto.GetId()<<endl;
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
 FUNCION : void MostrarAsignaciones()
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
        cin.ignore();
        mdao.mostrarAlumnosAsignados(id);
}



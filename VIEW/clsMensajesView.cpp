/**#############################################################################
 ARCHIVO             : clsMensajesView.cpp
 AUTOR/ES            : Francisco Sosa y Gabriel Bejarano
 VERSION             : 0.01 beta.
 FECHA DE CREACION   : 07/11/2019.
 ULTIMA ACTUALIZACION: 24/11/2019.
*****************************************************************************
                             INCLUSIONES ESTANDAR
=============================================================================**/
#include "clsMensajesView.h"

/*****************************************************************************
                             INCLUSIONES PERSONALES
=============================================================================**/
#include <cstdlib>
#include <iomanip>

using namespace std;

/**=============================================================================
 FUNCION : void txtLinea()
 ACCION : Texto que muestra un separador
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsMensajesView::txtLinea()
{

    cout<<"\t \t |-----------------------------------------------------|"<<endl;
}

/**=============================================================================
 FUNCION : void txtLineaLarga()
 ACCION : Texto que muestra un separador
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsMensajesView::txtLineaLarga()
{
   cout<<"\t |----------------------------------------------------------------------------------------------|"<<endl;
}

/**==============================================================================
 FUNCIÓN : txtPresentacion()
 ACCIÓN : Saludo al inicio del programa
 PARAMETROS: Ninguno.
 DEVUELVE : nada.
============================================================================== */
void clsMensajesView::txtPresentacion()
{
    system("cls");
cout<<"\t \t     .-.__      \\ .-.  ___  __"<<endl;
cout<<"\t \t |_|  '--.-.-(   \\/\\;;\\_\\.-._______.-."<<endl;
cout<<"\t \t (-)___     \\ \\ .-\\ \\;;\\(   \\       \\ \\"<<endl;
cout<<"\t \t Y    '---._\\_((Q)) \\;;\\ .-\\     __(_)"<<endl;
cout<<"\t \t I           __'-' / .--.((Q))---'    \\,"<<endl;
cout<<"\t \t I     ___.-:    \\|  |   \\'-'_          \\"<<endl;
cout<<"\t \t A  .-'      \\ .-.\\   \\   \\ \\ '--.__     '\\"<<endl;
cout<<"\t \t |  |____.----((Q))\\   \\__|--\\_      \\     '"<<endl;
cout<<"\t \t    ( )        '-'  \\_  :  \\-' '--.___\\"<<endl;
cout<<"\t \t     Y                \\  \\  \\       \\(_)"<<endl;
cout<<"\t \t     I                 \\  \\  \\         \\,"<<endl;
cout<<"\t \t     I                  \\  \\  \\          \\"<<endl;
cout<<"\t \t     A                   \\  \\  \\          '\\"<<endl;
cout<<"\t \t     |                    \\  \\__|           '"<<endl;
cout<<"\t \t                           \\_:.  \\"<<endl;
cout<<"\t \t            BIENVENIDO       \\ \\  \\"<<endl;
cout<<"\t \t                              \\ \\  \\"<<endl;
cout<<"\t \t                               \\_\\_|"<<endl;
cout<<"\t \t            ____  _____ ____  _____ _ "<<endl;
cout<<"\t \t           |  _ \\| ____| __ )| ____| |"<<endl;
cout<<"\t \t           | |_) |  _| |  _ \\|  _| | |"<<endl;
cout<<"\t \t           |  _ <| |___| |_) | |___| |___"<<endl;
cout<<"\t \t  ____   __|_|_\\_\\_____|____/|_____|_____|____  _____"<<endl;
cout<<"\t \t / ___| / _ \\|  ___|_   _\\ \\      / / \\  |  _ \\| ____|"<<endl;
cout<<"\t \t \\___ \\| | | | |_    | |  \\ \\ /\\ / / _ \\ | |_) |  _|"<<endl;
cout<<"\t \t  ___) | |_| |  _|   | |   \\ V  V / ___ \\|  _ <| |___"<<endl;
cout<<"\t \t |____/ \\___/|_|     |_|    \\_/\\_/_/   \\_\\_| \\_\\_____|"<<endl;
cout <<"\t \t " ; system("pause");
}

/**==============================================================================
 FUNCIÓN : txtDespedida()
 ACCIÓN : Saludo al final del programa
 PARAMETROS: Ninguno.
 DEVUELVE : nada.
============================================================================== */
void clsMensajesView::txtDespedida()
{
    system("cls");
cout<<"\t \t     .-.__      \\ .-.  ___  __"<<endl;
cout<<"\t \t |_|  '--.-.-(   \\/\\;;\\_\\.-._______.-."<<endl;
cout<<"\t \t (-)___     \\ \\ .-\\ \\;;\\(   \\       \\ \\"<<endl;
cout<<"\t \t Y    '---._\\_((Q)) \\;;\\ .-\\     __(_)"<<endl;
cout<<"\t \t I           __'-' / .--.((Q))---'    \\,"<<endl;
cout<<"\t \t I     ___.-:    \\|  |   \\'-'_          \\"<<endl;
cout<<"\t \t A  .-'      \\ .-.\\   \\   \\ \\ '--.__     '\\"<<endl;
cout<<"\t \t |  |____.----((Q))\\   \\__|--\\_      \\     '"<<endl;
cout<<"\t \t    ( )        '-'  \\_  :  \\-' '--.___\\"<<endl;
cout<<"\t \t     Y                \\  \\  \\       \\(_)"<<endl;
cout<<"\t \t     I                 \\  \\  \\         \\,"<<endl;
cout<<"\t \t     I                  \\  \\  \\          \\"<<endl;
cout<<"\t \t     A                   \\  \\  \\          '\\"<<endl;
cout<<"\t \t     |                    \\  \\__|           '"<<endl;
cout<<"\t \t                           \\_:.  \\"<<endl;
cout<<"\t \t        GRACIAS POR USAR     \\ \\  \\"<<endl;
cout<<"\t \t        NUESTRO PROGRAMA      \\ \\  \\"<<endl;
cout<<"\t \t                               \\_\\_|"<<endl;
cout<<"\t \t            ____  _____ ____  _____ _ "<<endl;
cout<<"\t \t           |  _ \\| ____| __ )| ____| |"<<endl;
cout<<"\t \t           | |_) |  _| |  _ \\|  _| | |"<<endl;
cout<<"\t \t           |  _ <| |___| |_) | |___| |___"<<endl;
cout<<"\t \t  ____   __|_|_\\_\\_____|____/|_____|_____|____  _____"<<endl;
cout<<"\t \t / ___| / _ \\|  ___|_   _\\ \\      / / \\  |  _ \\| ____|"<<endl;
cout<<"\t \t \\___ \\| | | | |_    | |  \\ \\ /\\ / / _ \\ | |_) |  _|"<<endl;
cout<<"\t \t  ___) | |_| |  _|   | |   \\ V  V / ___ \\|  _ <| |___"<<endl;
cout<<"\t \t |____/ \\___/|_|     |_|    \\_/\\_/_/   \\_\\_| \\_\\_____|"<<endl;
cout << "\t \t " ; system("pause");

}

/**=============================================================================
 FUNCION : void txtMensajeError()
 ACCION : Texto que muestra un mensaje de error
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsMensajesView::txtMensajeError()
{
            txtLinea();
            cout<<setw(30)<<right<<"   -   ERROR: POR FAVOR, INGRESE UNA OPCION VALIDA-"<<endl;
            txtLinea();
            cout << "\t \t " ; system("pause");
}

/**=============================================================================
 FUNCION : void txtMenuMateria()
 ACCION : Texto que muestra las opciones del menu de materias
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsMensajesView::txtMenuMateria()
{
    cout<<"\t \t |--------------SUBMENU MATERIAS-----------------------|"<<endl;

    cout<<setw(45)<<right<<"A - Nueva Materia"<<endl;
    cout<<setw(47)<<right<<"B - Listar Materias"<<endl;
    cout<<setw(60)<<right<<"C - Buscar Materias (por nombre)"<<endl;
    cout<<setw(48)<<right<<"D - Eliminar Materias"<<endl;
    cout<<setw(48)<<right<<"E - Modificar Materias"<<endl;
    cout<<setw(48)<<right<<"H - MOSTRAR AYUDAAAAA"<<endl;
    cout<<setw(45)<<right<<"S - Salir"<<endl;
   txtLinea();
    cout<<endl;
}
/**=============================================================================
 FUNCION : void txtMenuAlumno()
 ACCION : Texto que muestra las opciones del menu de alumnos
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsMensajesView::txtMenuAlumno()
{
    cout<<"\t \t |-----------------SUBMENU ALUMNOS---------------------|"<<endl;

    cout<<setw(40)<<right<<"A - Nuevo Alumno"<<endl;
    cout<<setw(40)<<right<<"B - Listar Alumnos"<<endl;
    cout<<setw(55)<<right<<"C - Buscar Alumnos (por nombre)"<<endl;
    cout<<setw(40)<<right<<"D - Eliminar Alumnos"<<endl;
    cout<<setw(40)<<right<<"E - Modificar Alumnos"<<endl;
    cout<<setw(40)<<right<<"S - Salir"<<endl;
    txtLinea();
    cout<<endl;
}
/**=============================================================================
 FUNCION : void txtMenuMatXAl()
 ACCION : Texto que muestra las opciones del menu de materias por alumnos
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsMensajesView::txtMenuMXA()
{
    cout<<"\t \t |------------SUBMENU MATERIAS POR ALUMNO--------------|"<<endl;
    cout<<setw(60)<<right<<"A - Asignar alumnos a materia"<<endl;
    cout<<setw(60)<<right<<"B - Asignar materias a alumno"<<endl;
    cout<<setw(55)<<right<<"C - Mostrar alumnos asignados a materia"<<endl;
    cout<<setw(55)<<right<<"D - Mostrar materias asignados a alumnos"<<endl;
    cout<<setw(60)<<right<<"S - Salir"<<endl;
    txtLinea();
    cout<<endl;
}


/**=============================================================================
 FUNCION : void txtMenuPpal()
 ACCION : Muestra en pantalla el submenu con acceso a los submenus de alumnos,
            materias, relacionales, y ayuda
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsMensajesView::txtMenuPpal(){
        cout<<"\t \t |--------------------------MENU-----------------------|"<<endl;

        cout<<setw(50)<<right<<" A - Materias"<<endl;
        cout<<setw(50)<<right<<" B - Alumnos"<<endl;
        cout<<setw(60)<<right<<" C - Materias por alumno"<<endl;
        cout<<setw(50)<<right<<" S - Salir"<<endl;
        txtLinea();
}


/**=============================================================================
 FUNCION : void txtListaAlumnos()
 ACCION : Encabezado del listado de alumnos
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsMensajesView::txtListaAlumnos(){
system("cls");
    cout<<"\t                                    LISTA DE ALUMNOS" << setw(60)<<right<< "-"<<endl;
    cout<<"\t -                                  LISTA DE MATERIAS" << setw(60)<<right<< "-"<<endl;
    txtLineaLarga();
    cout<<"\t |" <<setw(3)<<right<<"NOMBRE" <<setw(30)<<right <<"|" <<setw(3)<<right<<"APELLIDO" << setw(25)<<right<<"|"<< setw(3)<< right <<"LEGAJO" << setw(23)<<right <<"|"<<endl;
    txtLineaLarga();

}

/**=============================================================================
 FUNCION : void txtListaMaterias()
 ACCION : Encabezado del listado de materias
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/

void clsMensajesView::txtListaMaterias(){
    system("cls");
    txtLineaLarga();

    cout<<"\t -                                  LISTA DE MATERIAS                                        -"<<endl;
    txtLineaLarga();
    cout<<"\t |" <<setw(3)<<right<<"NOMBRE" <<setw(30)<<right <<"|" <<setw(3)<<right<<"PROFESOR" << setw(25)<<right<<"|"<< setw(3)<< right <<"ID" << setw(25)<<right <<"|"<<endl;
    txtLineaLarga();
}

/**=============================================================================
 FUNCION : void txtAlumnoInexistente()
 ACCION : Texto que indica que el alumno no existe
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsMensajesView::txtAlumnoInexistente()
{
    cout<<"\t \t |----------ADVERTENCIA: NO EXISTE EL ALUMNO-----------|"<<endl;
}

/**=============================================================================
 FUNCION : void txtMateriaInexistente()
 ACCION : Texto que indica que la materia no existe
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsMensajesView::txtMateriaInexistente()
{
    cout<<"\t \t |----------ADVERTENCIA: NO EXISTE LA MATERIA----------|"<<endl;
}

/**=============================================================================
 FUNCION : void txtBusquedaSinResultados()
 ACCION : Texto que indica que no existen resultados para el parametro que se ingresó
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsMensajesView::txtBusquedaSinResultados()
{
    cout<<"\t \t-- ERROR: NO SE ENCONTRARON RESULTADOS PARA ESTA BUSQUEDA --"<<endl;
    cout<<setw(40)<<right<<"--  NOTA: Ingrese 0 para regresar, o verifique su ingreso --"<<endl;
    cout<<setw(40)<<right<<"--                  e intentelo nuevamente.               --"<<endl;
    cout<<endl;
    cout<<endl;
}

/**=============================================================================
 FUNCION : void txtAsignacionDeMaterias()
 ACCION : Texto que indica el ingreso de un caracter para finalizar, y el ingreso de un dato
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsMensajesView::txtAsignacionDeMaterias()
{
        cout<<setw(40)<<right<<  "||  NOTA: Ingrese 0 para finalizar la asignacion  ||"<<endl;
        clsMensajesView txt;
        txt.txtLinea();
        cout<<setw(40)<<right<<  "Ingrese el ID de la materia que desea asignar al alumno:"<<endl;
}

/**=============================================================================
 FUNCION : void txtAsignacionDeAlumnos()
  ACCION : Texto que indica el ingreso de un caracter para finalizar, y el ingreso de un dato
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsMensajesView::txtAsignacionDeAlumnos()
{
    cout<<setw(40)<<right<<  "||  NOTA: Ingrese 0 para finalizar la asignacion  ||"<<endl;
        clsMensajesView txt;
        txt.txtLinea();
    cout<<setw(40)<< right<< "Ingrese el legajo del alumno que desea asignar a la materia:"<<endl;
}

/**=============================================================================
 FUNCION : void txtAsignacionExitosa()
 ACCION : Texto que indica la correcta asingación
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsMensajesView::txtAsignacionExitosa()
{
cout<<setw(40)<<right<<"||  ASIGNACION EXITOSA  ||"<<endl;
cout << setw(40)<<right<<""; system("pause");
}

/**=============================================================================
 FUNCION : void txtAsignacionError()
 ACCION : Texto que indica un error de asignacion
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsMensajesView::txtAsignacionError()
{
cout<<setw(40)<<right<<"||  ERROR EN LA ASIGNACION  ||"<<endl;
cout << setw(40)<<right<<""; system("pause");
}

/**=============================================================================
 FUNCION : void txtSeleccionDeMateria()
  ACCION : Texto que indica el ingreso de un caracter para finalizar, y el ingreso de un dato
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsMensajesView::txtSeleccionDeMateria()
{
        cout<<setw(40)<<right<<  "||  NOTA: Ingrese 0 para salir  ||"<<endl;
        clsMensajesView txt;
        txt.txtLinea();
        cout<<setw(40)<<right<<  "Ingrese la materia para mostrar los alumnos asignados:"<<endl;

}

/**=============================================================================
 FUNCION : void txtSeleccionDeAlumno()
  ACCION : Texto que indica el ingreso de un caracter para finalizar, y el ingreso de un dato
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsMensajesView::txtSeleccionDeAlumno()
{
    cout<<setw(40)<<right<<  "||  NOTA: Ingrese 0 para salir  ||"<<endl;
        clsMensajesView txt;
        txt.txtLinea();
    cout<<setw(40)<<right<<  "Ingrese el alumno para mostrar las materias asignadas:"<<endl;
}

/**=============================================================================
 FUNCION : void txtErrorIngreso()
  ACCION : Texto que indica un error en el ingreso de el ingreso de un dato
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsMensajesView::txtErrorIngreso()
{
    cout<<setw(40)<<right<<  "||  NOTA: Por favor, verifique su ingreso  ||"<<endl;
        clsMensajesView txt;
        txt.txtLinea();
}

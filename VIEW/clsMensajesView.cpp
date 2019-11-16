/**#############################################################################
 ARCHIVO             : clsMensajesView.cpp
 AUTOR/ES            : Francisco Sosa y Gabriel Bejarano
 VERSION             : 0.01 beta.
 FECHA DE CREACION   : 07/11/2019.
 ULTIMA ACTUALIZACION: 16/11/2019.
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
    cout<<setw(40)<<right<<"-----------------------------------------------------"<<endl;
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
cout<<setw(35)<<right<<"    .-.__      \\ .-.  ___  __"<<endl;
cout<<setw(35)<<right<<"|_|  '--.-.-(   \\/\\;;\\_\\.-._______.-."<<endl;
cout<<setw(35)<<right<<"(-)___     \\ \\ .-\\ \\;;\\(   \\       \\ \\"<<endl;
cout<<setw(35)<<right<<"Y    '---._\\_((Q)) \\;;\\ .-\\     __(_)"<<endl;
cout<<setw(35)<<right<<"I           __'-' / .--.((Q))---'    \\,"<<endl;
cout<<setw(35)<<right<<"I     ___.-:    \\|  |   \\'-'_          \\"<<endl;
cout<<setw(35)<<right<<"A  .-'      \\ .-.\\   \\   \\ \\ '--.__     '\\"<<endl;
cout<<setw(35)<<right<<"|  |____.----((Q))\\   \\__|--\\_      \\     '"<<endl;
cout<<setw(35)<<right<<"   ( )        '-'  \\_  :  \\-' '--.___\\"<<endl;
cout<<setw(35)<<right<<"    Y                \\  \\  \\       \\(_)"<<endl;
cout<<setw(35)<<right<<"    I                 \\  \\  \\         \\,"<<endl;
cout<<setw(35)<<right<<"    I                  \\  \\  \\          \\"<<endl;
cout<<setw(35)<<right<<"    A                   \\  \\  \\          '\\"<<endl;
cout<<setw(35)<<right<<"    |                    \\  \\__|           '"<<endl;
cout<<setw(35)<<right<<"                          \\_:.  \\"<<endl;
cout<<setw(35)<<right<<"           BIENVENIDO       \\ \\  \\"<<endl;
cout<<setw(35)<<right<<"                             \\ \\  \\"<<endl;
cout<<setw(35)<<right<<"                              \\_\\_|"<<endl;
cout<<setw(35)<<right<<"           ____  _____ ____  _____ _ "<<endl;
cout<<setw(35)<<right<<"          |  _ \\| ____| __ )| ____| |"<<endl;
cout<<setw(35)<<right<<"          | |_) |  _| |  _ \\|  _| | |"<<endl;
cout<<setw(35)<<right<<"          |  _ <| |___| |_) | |___| |___"<<endl;
cout<<setw(35)<<right<<" ____   __|_|_\\_\\_____|____/|_____|_____|____  _____"<<endl;
cout<<setw(35)<<right<<"/ ___| / _ \\|  ___|_   _\\ \\      / / \\  |  _ \\| ____|"<<endl;
cout<<setw(35)<<right<<"\\___ \\| | | | |_    | |  \\ \\ /\\ / / _ \\ | |_) |  _|"<<endl;
cout<<setw(35)<<right<<" ___) | |_| |  _|   | |   \\ V  V / ___ \\|  _ <| |___"<<endl;
cout<<setw(35)<<right<<"|____/ \\___/|_|     |_|    \\_/\\_/_/   \\_\\_| \\_\\_____|"<<endl;
cout << setw(40)<<right<< system("pause");
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
cout<<setw(40)<<right<<"    .-.__      \\ .-.  ___  __"<<endl;
cout<<setw(40)<<right<<"|_|  '--.-.-(   \\/\\;;\\_\\.-._______.-."<<endl;
cout<<setw(40)<<right<<"(-)___     \\ \\ .-\\ \\;;\\(   \\       \\ \\"<<endl;
cout<<setw(40)<<right<<"Y    '---._\\_((Q)) \\;;\\ .-\\     __(_)"<<endl;
cout<<setw(40)<<right<<"I           __'-' / .--.((Q))---'    \\,"<<endl;
cout<<setw(40)<<right<<"I     ___.-:    \\|  |   \\'-'_          \\"<<endl;
cout<<setw(40)<<right<<"A  .-'      \\ .-.\\   \\   \\ \\ '--.__     '\\"<<endl;
cout<<setw(40)<<right<<"|  |____.----((Q))\\   \\__|--\\_      \\     '"<<endl;
cout<<setw(40)<<right<<"   ( )        '-'  \\_  :  \\-' '--.___\\"<<endl;
cout<<setw(40)<<right<<"    Y                \\  \\  \\       \\(_)"<<endl;
cout<<setw(40)<<right<<"    I                 \\  \\  \\         \\,"<<endl;
cout<<setw(40)<<right<<"    I                  \\  \\  \\          \\"<<endl;
cout<<setw(40)<<right<<"    A                   \\  \\  \\          '\\"<<endl;
cout<<setw(40)<<right<<"    |                    \\  \\__|           '"<<endl;
cout<<setw(40)<<right<<"                          \\_:.  \\"<<endl;
cout<<setw(40)<<right<<"       GRACIAS POR USAR     \\ \\  \\"<<endl;
cout<<setw(40)<<right<<"       NUESTRO PROGRAMA      \\ \\  \\"<<endl;
cout<<setw(40)<<right<<"                              \\_\\_|"<<endl;
cout<<setw(40)<<right<<"           ____  _____ ____  _____ _ "<<endl;
cout<<setw(40)<<right<<"          |  _ \\| ____| __ )| ____| |"<<endl;
cout<<setw(40)<<right<<"          | |_) |  _| |  _ \\|  _| | |"<<endl;
cout<<setw(40)<<right<<"          |  _ <| |___| |_) | |___| |___"<<endl;
cout<<setw(40)<<right<<" ____   __|_|_\\_\\_____|____/|_____|_____|____  _____"<<endl;
cout<<setw(40)<<right<<"/ ___| / _ \\|  ___|_   _\\ \\      / / \\  |  _ \\| ____|"<<endl;
cout<<setw(40)<<right<<"\\___ \\| | | | |_    | |  \\ \\ /\\ / / _ \\ | |_) |  _|"<<endl;
cout<<setw(40)<<right<<" ___) | |_| |  _|   | |   \\ V  V / ___ \\|  _ <| |___"<<endl;
cout<<setw(40)<<right<<"|____/ \\___/|_|     |_|    \\_/\\_/_/   \\_\\_| \\_\\_____|"<<endl;
cout << setw(40)<<right<<"" ; system("pause");

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
            cout << setw(40)<<right<<"" ; system("pause");
}

/**=============================================================================
 FUNCION : void txtMenuMateria()
 ACCION : Texto que muestra las opciones del menu de materias
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsMensajesView::txtMenuMateria()
{
    cout<<setw(40)<<right<<"----------SUBMENU MATERIAS---------"<<endl;
    cout<<setw(20)<<right<< "A - Nueva Materia"<<endl;
    cout<<setw(20)<<right<<"B - Listar Materias"<<endl;
    cout<<setw(20)<<right<<"C - Buscar Materias (por nombre)"<<endl;
    cout<<setw(20)<<right<<"D - Eliminar Materias"<<endl;
    cout<<setw(20)<<right<<"E - Modificar Materias"<<endl;
    cout<<setw(20)<<right<<"S - Salir"<<endl;
    cout<<setw(40)<<right<<"-----------------------------------"<<endl;
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
    cout<<setw(40)<<right<<"----------SUBMENU ALUMNOS---------"<<endl;
    cout<<setw(40)<<right<<"A - Nuevo Alumno"<<endl;
    cout<<setw(40)<<right<<"B - Listar Alumnos"<<endl;
    cout<<setw(40)<<right<<"C - Buscar Alumnos (por nombre)"<<endl;
    cout<<setw(40)<<right<<"D - Eliminar Alumnos"<<endl;
    cout<<setw(40)<<right<<"E - Modificar Alumnos"<<endl;
    cout<<setw(40)<<right<<"S - Salir"<<endl;
    cout<<setw(40)<<right<<"-----------------------"<<endl;
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
    cout<<setw(40)<<right<<"----------SUBMENU MATERIAS POR ALUMNO---------"<<endl;
    cout<<setw(20)<<right<<"A - Asignar alumnos a materia"<<endl;
    cout<<setw(20)<<right<<"B - Asignar materias a alumno"<<endl;
    cout<<setw(20)<<right<<"C - Mostrar alumnos asignados a materia"<<endl;
    cout<<setw(20)<<right<<"D - Mostrar materias asignados a alumnos"<<endl;
    cout<<setw(20)<<right<<"S - Salir"<<endl;
    cout<<setw(40)<<right<<"-----------------------"<<endl;
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
        cout<<setw(40)<<right<<"|----------------------------MENU----------------------------|"<<endl;
        cout<<setw(40)<<right<<" A - Materias"<<endl;
        cout<<setw(39)<<right<<" B - Alumnos"<<endl;
        cout<<setw(51)<<right<<" C - Materias por alumno"<<endl;
        cout<<setw(37)<<right<<" S - Salir"<<endl;
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
    txtLinea();
    cout<<setw(20)<<right<<"-               LISTA DE ALUMNOS            -"<<endl;
    txtLinea();
}

/**=============================================================================
 FUNCION : void txtListaMaterias()
 ACCION : Encabezado del listado de materias
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/

void clsMensajesView::txtListaMaterias(){
    system("cls");
    txtLinea();
    cout<<setw(20)<<right<<"-               LISTA DE MATERIAS            -"<<endl;
    txtLinea();
}

/**=============================================================================
 FUNCION : void txtAlumnoInexistente()
 ACCION : Texto que indica que el alumno no existe
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsMensajesView::txtAlumnoInexistente()
{
    cout<<setw(20)<<right<<"----------ADVERTENCIA: NO EXISTE EL ALUMNO---------"<<endl;
}

/**=============================================================================
 FUNCION : void txtMateriaInexistente()
 ACCION : Texto que indica que la materia no existe
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsMensajesView::txtMateriaInexistente()
{
    cout<<setw(20)<<right<<"----------ADVERTENCIA: NO EXISTE LA MATERIA--------"<<endl;
}

/**=============================================================================
 FUNCION : void txtBusquedaSinResultados()
 ACCION : Texto que indica que no existen resultados para el parametro que se ingresó
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsMensajesView::txtBusquedaSinResultados()
{
    cout<<setw(20)<<right<<"-- ERROR: NO SE ENCONTRARON RESULTADOS PARA ESTA BUSQUEDA --"<<endl;
    cout<<setw(20)<<right<<"--  NOTA: Ingrese 0 para regresar, o verifique su ingreso --"<<endl;
    cout<<setw(20)<<right<<"--                  e intentelo nuevamente.               --"<<endl;
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
        cout<<setw(20)<<right<<  "||  NOTA: Ingrese 0 para finalizar la asignacion  ||"<<endl;
        clsMensajesView txt;
        txt.txtLinea();
        cout<<setw(20)<<right<<  "Ingrese el ID de la materia que desea asignar al alumno:"<<endl;
}

/**=============================================================================
 FUNCION : void txtAsignacionDeAlumnos()
  ACCION : Texto que indica el ingreso de un caracter para finalizar, y el ingreso de un dato
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsMensajesView::txtAsignacionDeAlumnos()
{
    cout<<setw(20)<<right<<  "||  NOTA: Ingrese 0 para finalizar la asignacion  ||"<<endl;
        clsMensajesView txt;
        txt.txtLinea();
    cout<<setw(20)<< right<< "Ingrese el legajo del alumno que desea asignar a la materia:"<<endl;
}

/**=============================================================================
 FUNCION : void txtAsignacionExitosa()
 ACCION : Texto que indica la correcta asingación
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsMensajesView::txtAsignacionExitosa()
{
cout<<setw(20)<<right<<"||  ASIGNACION EXITOSA  ||"<<endl;
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
cout<<setw(20)<<right<<"||  ERROR EN LA ASIGNACION  ||"<<endl;
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
        cout<<setw(20)<<right<<  "||  NOTA: Ingrese 0 para salir  ||"<<endl;
        clsMensajesView txt;
        txt.txtLinea();
        cout<<setw(20)<<right<<  "Ingrese la materia para mostrar los alumnos asignados:"<<endl;

}

/**=============================================================================
 FUNCION : void txtSeleccionDeAlumno()
  ACCION : Texto que indica el ingreso de un caracter para finalizar, y el ingreso de un dato
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsMensajesView::txtSeleccionDeAlumno()
{
    cout<<setw(20)<<right<<  "||  NOTA: Ingrese 0 para salir  ||"<<endl;
        clsMensajesView txt;
        txt.txtLinea();
    cout<<setw(20)<<right<<  "Ingrese el alumno para mostrar las materias asignadas:"<<endl;
}

/**=============================================================================
 FUNCION : void txtErrorIngreso()
  ACCION : Texto que indica un error en el ingreso de el ingreso de un dato
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsMensajesView::txtErrorIngreso()
{
    cout<<setw(20)<<right<<  "||  NOTA: Por favor, verifique su ingreso  ||"<<endl;
        clsMensajesView txt;
        txt.txtLinea();
}

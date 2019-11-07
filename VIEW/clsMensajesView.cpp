/**#############################################################################
 ARCHIVO             : clsMensajesView.cpp
 AUTOR/ES            : Francisco Sosa y Gabriel Bejarano
 VERSION             : 0.01 beta.
 FECHA DE CREACION   : 07/11/2019.
 ULTIMA ACTUALIZACION: dd/mm/aaaa.
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

/**==============================================================================
 FUNCIÓN : txtPresentacion()
 ACCIÓN : Saludo al inicio del programa
 PARAMETROS: Ninguno.
 DEVUELVE : nada.
============================================================================== */
void clsMensajesView::txtPresentacion()
{
    system("cls");
cout<<"     .-.__      \\ .-.  ___  __"<<endl;
cout<<"|_|  '--.-.-(   \\/\\;;\\_\\.-._______.-."<<endl;
cout<<"(-)___     \\ \\ .-\\ \\;;\\(   \\       \\ \\"<<endl;
cout<<" Y    '---._\\_((Q)) \\;;\\ .-\\     __(_)"<<endl;
cout<<" I           __'-' / .--.((Q))---'    \\,"<<endl;
cout<<" I     ___.-:    \\|  |   \\'-'_          \\"<<endl;
cout<<" A  .-'      \\ .-.\\   \\   \\ \\ '--.__     '\\"<<endl;
cout<<" |  |____.----((Q))\\   \\__|--\\_      \\     '"<<endl;
cout<<"    ( )        '-'  \\_  :  \\-' '--.___\\"<<endl;
cout<<"     Y                \\  \\  \\       \\(_)"<<endl;
cout<<"     I                 \\  \\  \\         \,"<<endl;
cout<<"     I                  \\  \\  \\          \\"<<endl;
cout<<"     A                   \\  \\  \\          '\\"<<endl;
cout<<"     |                    \\  \\__|           '"<<endl;
cout<<"                           \\_:.  \\"<<endl;
cout<<"            BIENVENIDO       \\ \\  \\"<<endl;
cout<<"                              \\ \\  \\"<<endl;
cout<<"                               \\_\\_|"<<endl;
cout<<"            ____  _____ ____  _____ _ "<<endl;
cout<<"           |  _ \\| ____| __ )| ____| |"<<endl;
cout<<"           | |_) |  _| |  _ \\|  _| | |"<<endl;
cout<<"           |  _ <| |___| |_) | |___| |___"<<endl;
cout<<"  ____   __|_|_\\_\\_____|____/|_____|_____|____  _____"<<endl;
cout<<" / ___| / _ \\|  ___|_   _\\ \\      / / \\  |  _ \\| ____|"<<endl;
cout<<" \\___ \\| | | | |_    | |  \\ \\ /\\ / / _ \\ | |_) |  _|"<<endl;
cout<<"  ___) | |_| |  _|   | |   \\ V  V / ___ \\|  _ <| |___"<<endl;
cout<<" |____/ \\___/|_|     |_|    \\_/\\_/_/   \\_\\_| \\_\\_____|"<<endl;
system("pause");
}

/**==============================================================================
 FUNCIÓN : txtDespedida()
 ACCIÓN : Saludo al inicio del programa
 PARAMETROS: Ninguno.
 DEVUELVE : nada.
============================================================================== */
void clsMensajesView::txtDespedida()
{
    system("cls");
cout<<"     .-.__      \\ .-.  ___  __"<<endl;
cout<<"|_|  '--.-.-(   \\/\\;;\\_\\.-._______.-."<<endl;
cout<<"(-)___     \\ \\ .-\\ \\;;\\(   \\       \\ \\"<<endl;
cout<<" Y    '---._\\_((Q)) \\;;\\ .-\\     __(_)"<<endl;
cout<<" I           __'-' / .--.((Q))---'    \\,"<<endl;
cout<<" I     ___.-:    \\|  |   \\'-'_          \\"<<endl;
cout<<" A  .-'      \\ .-.\\   \\   \\ \\ '--.__     '\\"<<endl;
cout<<" |  |____.----((Q))\\   \\__|--\\_      \\     '"<<endl;
cout<<"    ( )        '-'  \\_  :  \\-' '--.___\\"<<endl;
cout<<"     Y                \\  \\  \\       \\(_)"<<endl;
cout<<"     I                 \\  \\  \\         \,"<<endl;
cout<<"     I                  \\  \\  \\          \\"<<endl;
cout<<"     A                   \\  \\  \\          '\\"<<endl;
cout<<"     |                    \\  \\__|           '"<<endl;
cout<<"                           \\_:.  \\"<<endl;
cout<<"        GRACIAS POR USAR     \\ \\  \\"<<endl;
cout<<"        NUESTRO PROGRAMA      \\ \\  \\"<<endl;
cout<<"                               \\_\\_|"<<endl;
cout<<"            ____  _____ ____  _____ _ "<<endl;
cout<<"           |  _ \\| ____| __ )| ____| |"<<endl;
cout<<"           | |_) |  _| |  _ \\|  _| | |"<<endl;
cout<<"           |  _ <| |___| |_) | |___| |___"<<endl;
cout<<"  ____   __|_|_\\_\\_____|____/|_____|_____|____  _____"<<endl;
cout<<" / ___| / _ \\|  ___|_   _\\ \\      / / \\  |  _ \\| ____|"<<endl;
cout<<" \\___ \\| | | | |_    | |  \\ \\ /\\ / / _ \\ | |_) |  _|"<<endl;
cout<<"  ___) | |_| |  _|   | |   \\ V  V / ___ \\|  _ <| |___"<<endl;
cout<<" |____/ \\___/|_|     |_|    \\_/\\_/_/   \\_\\_| \\_\\_____|"<<endl;
system("pause");
}

/**=============================================================================
 FUNCION : void txtLinea()
 ACCION : Texto que muestra un separador
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsMensajesView::txtLinea()
{
    cout<<"----------------------------------------------"<<endl;
}

/**=============================================================================
 FUNCION : void txtMensajeError()
 ACCION : Texto que muestra un mensaje de error
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsMensajesView::txtMensajeError()
{
            cout<<"|------------------------------------------------------------|"<<endl;
            cout<<setw(30)<<"   -   ERROR: POR FAVOR, INGRESE UNA OPCION VALIDA-"<<endl;
            cout<<"|------------------------------------------------------------|"<<endl;
            system("pause");
}

/**=============================================================================
 FUNCION : void txtMenuMateria()
 ACCION : Texto que muestra las opciones del menu de materias
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsMensajesView::txtMenuMateria()
{
 cout<<"----------SUBMENU MATERIAS---------"<<endl;
    cout<<"A - Nueva Materia"<<endl;
    cout<<"B - Listar Materias"<<endl;
    cout<<"C - Eliminar Materias"<<endl;
    cout<<"D - Modificar Materias"<<endl;
    cout<<"S - Salir"<<endl;
    cout<<"-----------------------------------"<<endl;
}
/**=============================================================================
 FUNCION : void txtMenuAlumno()
 ACCION : Texto que muestra las opciones del menu de alumnos
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsMensajesView::txtMenuAlumno()
{
    cout<<"----------SUBMENU ALUMNOS---------"<<endl;
    cout<<"A - Nuevo Alumno"<<endl;
    cout<<"B - Listar Alumnos"<<endl;
    cout<<"C - Eliminar Alumnos"<<endl;
    cout<<"D - Modificar Alumnos"<<endl;
    cout<<"S - Salir"<<endl;
    cout<<"-----------------------"<<endl;
}
/**=============================================================================
 FUNCION : void txtMenuMatXAl()
 ACCION : Texto que muestra las opciones del menu de materias por alumnos
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsMensajesView::txtMenuMatXAl()
{

}


/**=============================================================================
 FUNCION : void txtMenuPpal()
 ACCION : Muestra en pantalla el submenu con acceso a los submenus de alumnos,
            materias, relacionales, y ayuda
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsMensajesView::txtMenuPpal(){
cout<<"|----------------------------MENU----------------------------|"<<endl;
        cout<<setw(40)<<" A - Materias"<<endl;
        cout<<setw(39)<<" B - Alumnos"<<endl;
        cout<<setw(37)<<" S - Salir"<<endl;
        cout<<"|------------------------------------------------------------|"<<endl;
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
    cout<<"-               LISTA DE ALUMNOS            -"<<endl;
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
    cout<<"-               LISTA DE MATERIAS            -"<<endl;
    txtLinea();
}

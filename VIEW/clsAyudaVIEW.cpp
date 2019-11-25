/**#############################################################################
 ARCHIVO             : clsAyudaVIEW.cpp
 AUTOR/ES            : Francisco Sosa y Gabriel Bejarano
 VERSION             : 1.2 beta.
 FECHA DE CREACION   : 24/11/2019.
 ULTIMA ACTUALIZACION: 24/11/2019.
*****************************************************************************
                             INCLUSIONES ESTANDAR
=============================================================================**/
#include "clsAyudaVIEW.h"

using namespace std;
/**=============================================================================
 FUNCION : void MenuMaterias()
 ACCION : Muestra y permite el acceso a las funciones de gestion de materias
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsAyudaVIEW::AyuLineas()
{
  cout<<"\t \t |-----------------------------------------------------------------------------------|"<<endl;
}

/**=============================================================================
 FUNCION : void MenuMaterias()
 ACCION : Muestra y permite el acceso a las funciones de gestion de materias
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsAyudaVIEW::AyuTitulo()
{
      cout<<"\t \t |-------------------------********MENU AYUDA**********------------------------------|"<<endl;
}

/**=============================================================================
 FUNCION : void AyuMenuMaterias()
 ACCION : Muestra la accion de cada opcion del menu una por vez
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsAyudaVIEW::AyuMenuMaterias()
{
    AyuTitulo();

    cout<<"\t \t |------------------------------SUBMENU MATERIAS-------------------------------------|"<<endl;
    cout<<setw(45)<<right<< "A - Nueva Materia"<<endl;
    cout<< "\t\t\t ACCION: Carga en la db el objeto dto"<<endl;
    cout << "\t\t\t" ;system("pause");

    cout<<setw(47)<<right<<"B - Listar Materias"<<endl;
    cout<< "\t\t\t ACCION: Muestra el listado de materias activas" << endl;
    cout << "\t\t\t" ;system("pause");

    cout<<setw(60)<<right<<"C - Buscar Materias (por nombre)"<<endl;
    cout<< "\t\t\t ACCION: Muestra el listado de materias activas de acuerdo a la cadena ingresada " << endl;
    cout << "\t\t\t" ;system("pause");

    cout<<setw(48)<<right<<"D - Eliminar Materias"<<endl;

    cout<< "\t\t\t ACCION: Elimina el registro de la db (de manera logica) " << endl;
    cout << "\t\t\t" ;system("pause");

    cout<<setw(48)<<right<<"E - Modificar Materias"<<endl;
    cout<< "\t\t\t ACCION: Guarda en la db la modificacion realizada en el registro." << endl;
    cout << "\t\t\t" ;system("pause");

    cout<<setw(45)<<right<<"S - Salir"<<endl;
    AyuLineas();
    cout<<endl;
    cout<<"\t\t\t" ;system("pause");
}

/**=============================================================================
FUNCION : void AyuInsertar()
ACCION : Muestra y permite el acceso a las funciones de gestion de materias
PARAMETROS: nada
DEVUELVE : nada
============================================================================= **/
void clsAyudaVIEW::AyuInsertar()
{
    AyuLineas();
    AyuTitulo();
    cout<<setw(65)<<right<<"NUEVA MATERIA"<<endl;
    cout << "\t\t\t" ;system("pause");
    cout<<setw(60)<<right<<"INGRESE EL NOMBRE DE LA MATERIA : "<< endl;
    cout<<setw(65)<<right<<"DEBERA INGRESAR EL NOMBRE DE LA MATERIA"<<endl;
    cout << "\t\t\t" ;system("pause");
    cout<<setw(60)<<right<<"MATERIA SARASA 123 "<< endl;
    cout << "\t\t\t" ;system("pause");
    cout<<setw(60)<<right<<"INGRESE NOMBRE DEL PROFESOR : "<< endl;
    cout<<setw(65)<<right<<"EL SIGUIENTE PASO SERA INGRESAR EL NOMBRE DEL PROFESOR"<<endl;
    cout << "\t\t\t" ;system("pause");
    cout<<setw(60)<<right<<"RICARDO FORT "<< endl;
    cout << "\t\t\t" ;system("pause");
    AyuLineas();
}

/**=============================================================================
FUNCION : void MenuMaterias()
ACCION : Muestra y permite el acceso a las funciones de gestion de materias
PARAMETROS: nada
DEVUELVE : nada
============================================================================= **/
void clsAyudaVIEW::AyuListar()
{

}
/**=============================================================================
FUNCION : void MenuMaterias()
ACCION : Muestra y permite el acceso a las funciones de gestion de materias
PARAMETROS: nada
DEVUELVE : nada
============================================================================= **/
void clsAyudaVIEW::AyuEliminar()
{

}
/**=============================================================================
 FUNCION : void MenuMaterias()
 ACCION : Muestra y permite el acceso a las funciones de gestion de materias
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsAyudaVIEW::AyuModificar()
{

}
/**=============================================================================
 FUNCION : void MenuMaterias()
 ACCION : Muestra y permite el acceso a las funciones de gestion de materias
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsAyudaVIEW::AyuListarBusqueda()
{

}
/**=============================================================================
 FUNCION : void MenuMaterias()
 ACCION : Muestra y permite el acceso a las funciones de gestion de materias
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsAyudaVIEW::AyuAsignar()
{

}
/**=============================================================================
 FUNCION : void MenuMaterias()
 ACCION : Muestra y permite el acceso a las funciones de gestion de materias
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsAyudaVIEW::AyuMostrarMateria()
{
    cout << ""<< endl;
}
/**=============================================================================
 FUNCION : void MenuMaterias()
 ACCION : Muestra y permite el acceso a las funciones de gestion de materias
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsAyudaVIEW::AyuMostrarAsignadosM()
{

}
/**=============================================================================
 FUNCION : void MenuMaterias()
 ACCION : Muestra y permite el acceso a las funciones de gestion de materias
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsAyudaVIEW::AyuMostrarAsignaciones()
{

}
/**=============================================================================
 FUNCION : void MenuMaterias()
 ACCION : Muestra y permite el acceso a las funciones de gestion de materias
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsAyudaVIEW::AyuMenuAlumnos()
{

}
/**=============================================================================
 FUNCION : void MenuMaterias()
 ACCION : Muestra y permite el acceso a las funciones de gestion de materias
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsAyudaVIEW::AyuListarBusqueda2()
{

}
/**=============================================================================
 FUNCION : void MenuMaterias()
 ACCION : Muestra y permite el acceso a las funciones de gestion de materias
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsAyudaVIEW::AyuAsignar2()
{

}
/**=============================================================================
 FUNCION : void MenuMaterias()
 ACCION : Muestra y permite el acceso a las funciones de gestion de materias
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsAyudaVIEW::AyuMostrarAlumno()
{

}
/**=============================================================================
 FUNCION : void MenuMaterias()
 ACCION : Muestra y permite el acceso a las funciones de gestion de materias
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsAyudaVIEW::AyuMostrarAsignados()
{

}
/**=============================================================================
 FUNCION : void MenuMaterias()
 ACCION : Muestra y permite el acceso a las funciones de gestion de materias
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsAyudaVIEW::AyuAyuMostrarAsignaciones()
{

}
/**=============================================================================
 FUNCION : void MenuMaterias()
 ACCION : Muestra y permite el acceso a las funciones de gestion de materias
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsAyudaVIEW::AyuAsignarMtoA()
{

}
/**=============================================================================
 FUNCION : void MenuMaterias()
 ACCION : Muestra y permite el acceso a las funciones de gestion de materias
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsAyudaVIEW::AyuAsignarAtoM()
{


}
/**=============================================================================
 FUNCION : void MenuMaterias()
 ACCION : Muestra y permite el acceso a las funciones de gestion de materias
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsAyudaVIEW::AyuMenuMXA()
{

}
/**=============================================================================
 FUNCION : void MenuMaterias()
 ACCION : Muestra y permite el acceso a las funciones de gestion de materias
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsAyudaVIEW::AyuMostrarAsignaciones2()
{

}
/**=============================================================================
 FUNCION : void MenuMaterias()
 ACCION : Muestra y permite el acceso a las funciones de gestion de materias
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsAyudaVIEW::AyuMostrarAsignacionesM()
{

}

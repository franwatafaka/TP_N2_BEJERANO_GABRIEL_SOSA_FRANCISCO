/**#############################################################################
 ARCHIVO             : clsMensajesView.cpp
 AUTOR/ES            : Francisco Sosa y Gabriel Bejarano
 VERSION             : 0.01 beta.
 FECHA DE CREACION   : 07/11/2019.
 ULTIMA ACTUALIZACION: dd/mm/aaaa.
*****************************************************************************
                             INCLUSIONES ESTANDAR
=============================================================================**/
#include "clsMateriaXAlumnoDAO.h"

/**=============================================================================
 FUNCION : bool Insertar(struct tMaterias_x_Alumno reg)
 ACCION : Graba el registro con los datos de alumno asignado a materia en el archivo relacional
 PARAMETROS:struct tMaterias_x_Alumno reg.
 DEVUELVE : true si pudo grabar correctamente, false si no fue asi
============================================================================= **/
bool clsMateriaXAlumnoDAO::Insertar(clsMateriaXAlumnoDTO dto)
{
    FILE *p;
    p=fopen(ARCHIVO_MXA, "ab");
    if(p==NULL)
        return false;
    bool escribio=fwrite(&dto, sizeof(clsMateriaXAlumnoDTO), 1, p);
    fclose(p);
    return escribio;
}

/**=============================================================================
 FUNCION : void Listar()
 ACCION : Muestra y permite el acceso a las funciones de gestion de materias
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsMateriaXAlumnoDAO::Listar(clsMateriaXAlumnoDTO *dto )
{
    FILE *p;
    int pos=0;
    clsMateriaXAlumnoDTO dto_arch;
    p = fopen(ARCHIVO_MXA,"rb");
    if(p!=NULL)
    {
        while(fread(&dto_arch,sizeof(clsMateriaXAlumnoDTO),1,p))
        {
            if(!dto_arch.GetEliminado())
            {
                /** en caso de que encuentre registros que no esten eliminados, los agregara al listado */
                dto[pos].Copy(dto_arch);
                pos++;
            }
        }
        fclose(p);
    }

}

/**=============================================================================
 FUNCION : void ListaLegajos()
 ACCION : copia en un array el listado de registros de alumnos
 PARAMETROS: clsAlumnoDTO *dto
 DEVUELVE : nada
============================================================================= **/
void clsMateriaXAlumnoDAO::ListaLegajos(int id, int *legajos)
{
    FILE *p;
    int pos=0;
    clsMateriaXAlumnoDTO dto;
    p = fopen(ARCHIVO_MXA,"rb");
    if(p!=NULL)
    {
        while(fread(&dto,sizeof(clsMateriaXAlumnoDTO),1,p))
        {
            if(dto.GetId()==id)
            {
                legajos[pos]=dto.GetLegajo();
                pos++;
            }
        }
        fclose(p);
    }
}

/**=============================================================================
 FUNCION : void ListaIds()
 ACCION : copia en un array el listado de ids que tengan el parametro legajo en el atibuto legajo
 PARAMETROS: clsAlumnoDTO *dto
 DEVUELVE : nada
============================================================================= **/
void clsMateriaXAlumnoDAO::ListaIds(int legajo, int *ids)
{
    FILE *p;
    int pos=0;
    clsMateriaXAlumnoDTO dto;
    p = fopen(ARCHIVO_MXA,"rb");
    if(p!=NULL)
    {
        while(fread(&dto,sizeof(clsMateriaXAlumnoDTO),1,p))
        {
            if(dto.GetLegajo()==legajo)
            {
                ids[pos]=dto.GetId();
                pos++;
            }
        }
        fclose(p);
    }
}

/**=============================================================================
 FUNCION : int Count()
 ACCION : cuenta la cantidad de registros activos en la db
 PARAMETROS: nada
 DEVUELVE : cantidad de registros
============================================================================= **/
int clsMateriaXAlumnoDAO::Count()
{
    FILE *p;
    int cant=0;
    clsMateriaXAlumnoDTO dto;
    p = fopen(ARCHIVO_MXA,"rb");
    if(p!=NULL)
    {
        while(fread(&dto,sizeof(clsMateriaXAlumnoDTO),1,p))
        {
                cant++;
        }
        fclose(p);
    }
    return cant;
}

/**=============================================================================
 FUNCION : int CountAsignados()
 ACCION : cuenta la cantidad de registros activos en la db que correspondan al id dado
 PARAMETROS: nada
 DEVUELVE : cantidad de registros
============================================================================= **/
int clsMateriaXAlumnoDAO::CountAsignados(int id)
{
    FILE *p;
    int cant=0;
    clsMateriaXAlumnoDTO dto;
    p = fopen(ARCHIVO_MXA,"rb");
    if(p!=NULL)
    {
        while(fread(&dto,sizeof(clsMateriaXAlumnoDTO),1,p))
        {
            if(dto.GetId()==id)
            {
                cant++;
            }
        }
        fclose(p);
    }
    return cant;
}
/**=============================================================================
 FUNCION : int CountAsignadosM()
 ACCION : cuenta la cantidad de registros activos en la db que correspondan al legajo dado
 PARAMETROS: int legajo
 DEVUELVE : cantidad de registros
============================================================================= **/
int clsMateriaXAlumnoDAO::CountAsignadosM(int legajo)
{
    FILE *p;
    int cant=0;
    clsMateriaXAlumnoDTO dto;
    p = fopen(ARCHIVO_MXA,"rb");
    if(p!=NULL)
    {
        while(fread(&dto,sizeof(clsMateriaXAlumnoDTO),1,p))
        {
            if(dto.GetLegajo()==legajo)
            {
                cant++;
            }
        }
        fclose(p);
    }
    return cant;
}

/**=============================================================================
 FUNCION : bool verificarEstadoMateria(int id)
 ACCION : Verifica si la materia se encuentra activa o dada de baja
 PARAMETROS: int id.
 DEVUELVE : true si se ingresó un cero, false si pudo encontrar la materia y está activa
============================================================================= **/
bool clsMateriaXAlumnoDAO::verificarEstadoMateria(int id)
{
    bool exit=false;
    if(id==0)
    {
        exit=true;
        return exit;
    }
    clsMateriaDAO mdao; clsMateriaDTO mdto;
    int mpos=-1;
    mpos=mdao.buscarMateria(id);
    if(mpos==-1)
    {
        clsMensajesView txt;
        txt.txtMateriaInexistente();
        exit=true;
        return exit;
    }
    return exit;
}

/**=============================================================================
 FUNCION : bool verificarEstadoAlumno(int legajo)
 ACCION : Verifica si el alumno está activo
 PARAMETROS: int legajo
 DEVUELVE : true si se ingresó un cero, false si pudo encontrar el alumno y está activo
============================================================================= **/
bool clsMateriaXAlumnoDAO::verificarEstadoAlumno(int legajo)
{
    bool exit=false;
    if(legajo==0)
    {
        exit=true;
        return exit;
    }
    clsAlumnoDAO adao; clsAlumnoDTO adto;
    int apos=-1;
    apos=adao.buscarAlumno(legajo);
    if(apos==-1)
    {
        clsMensajesView txt;
        txt.txtAlumnoInexistente();
        exit=true;
        return exit;
    }
    return exit;
}


/**=============================================================================
 FUNCION : void mostrarAlumnosaAsignados(int id_materia)
 ACCION : Funcion para mostrar los alumnos cuyo id_materia coincida con el indicado,
 dentro del archivo relacional. Si coincide, los busca y muestra sus datos
 PARAMETROS: id a buscar
 DEVUELVE : nada
============================================================================= **/
void clsMateriaXAlumnoDAO::mostrarAlumnosAsignados(int id)
{
    clsMateriaXAlumnoDAO dao; clsMateriaXAlumnoDTO dto;
    clsAlumnoDAO adao; clsAlumnoDTO adto;
    clsMateriaDAO mdao; clsMateriaDTO mdto;
    clsMateriasView mview;
    clsAlumnosView aview;
    FILE *p;
    int pos=-1;
    int apos=-1;
    int mpos=-1;
    p=fopen(ARCHIVO_MXA, "rb");
    if(p!=NULL)
    {
        mpos=mdao.buscarMateria(id);
        if(mpos==-1)
        {
            std::cout<<"Error"<<std::endl;
        }
        else
        {
        mdao.leerMateria(mpos, mdto);
        mview.MostrarMateria(mdto);
        system("pause");
        while(fread(&dto, sizeof(clsMateriaXAlumnoDTO), 1, p))
        {
            if(dto.GetId()==id)
            {
                //mostrar el alumno mediante el LEGAJO
                int legajo = dto.GetLegajo();
                apos=adao.buscarAlumno(legajo);
                adao.leerAlumno(apos, adto);
                aview.MostrarAlumno(adto);
                fclose(p);
            }
            pos++;
        }
    }
    }
}

/**=============================================================================
 FUNCION : void mostrarMateriasAsignadas(int id_materia)
 ACCION : Funcion para mostrar los alumnos cuyo id_materia coincida con el indicado,
 dentro del archivo relacional. Si coincide, los busca y muestra sus datos
 PARAMETROS: id a buscar
 DEVUELVE : nada
============================================================================= **/
void clsMateriaXAlumnoDAO::mostrarMateriasAsignadas(int legajo)
{
    clsMateriaXAlumnoDAO dao; clsMateriaXAlumnoDTO dto;
    clsAlumnoDAO adao; clsAlumnoDTO adto;
    clsMateriaDAO mdao; clsMateriaDTO mdto;
    clsMateriasView mview;
    clsAlumnosView aview;
    FILE *p;
    int pos=-1;
    int apos=-1;
    int mpos=-1;
    p=fopen(ARCHIVO_MXA, "rb");
    if(p!=NULL)
    {
        apos=adao.buscarAlumno(legajo);
        //ACÁ SE DEBERÍA COPIAR LO QUE HAY DESDE apos DE adao hasta apos*sizeof(clsMateriaDTO)
        //Y SE TENDRIA QUE PEGAR EN adto:
        adao.leerAlumno(apos, adto);
        aview.MostrarAlumno(adto);
        while(fread(&dto, sizeof(clsMateriaXAlumnoDTO), 1, p))
        {
            if(dto.GetLegajo()==legajo)
            {
                //mostrar la materia mediante el ID
                int id = dto.GetId();
                mpos=mdao.buscarMateria(id);
                mdao.leerMateria(mpos, mdto);
                mview.MostrarMateria(mdto);
                fclose(p);
            }
            pos++;
        }
    }
}

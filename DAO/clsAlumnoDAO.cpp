/**#############################################################################
 ARCHIVO             : clsAlumnoDAO.cpp
 AUTOR/ES            : Francisco Sosa y Gabriel Bejarano
 VERSION             : 1.0 beta.
 FECHA DE CREACION   : 22/10/2019.
 ULTIMA ACTUALIZACION: 07/11/2019.
*****************************************************************************
                             INCLUSIONES ESTANDAR
=============================================================================**/
#include "clsAlumnoDAO.h"
#include "../VIEW/clsMensajesView.h"


/**=============================================================================
 FUNCION : void Insertar()
 ACCION : Carga en la db el objeto dto
 PARAMETROS: clsAlumnoDTO dto
 DEVUELVE : nada
============================================================================= **/
void clsAlumnoDAO::Insertar(clsAlumnoDTO dto)
{
    FILE *p;
    p = fopen(ARCHIVO_ALUMNOS,"ab");
    if(p!=NULL)
    {
        fwrite(&dto,sizeof(clsAlumnoDTO),1,p);
        fclose(p);
    }
}
/**=============================================================================
 FUNCION : void Eliminar()
 ACCION : Elimina el registro de la db (de manera logica)
 PARAMETROS: int legajo
 DEVUELVE : nada
============================================================================= **/
void clsAlumnoDAO::Eliminar(int legajo)
{
    FILE *p;
    clsAlumnoDTO dto;
    int pos = 0;
    p = fopen(ARCHIVO_ALUMNOS,"rb+");
    if(p!=NULL)
    {
        while(fread(&dto,sizeof(clsAlumnoDTO),1,p))
        {
            if(dto.GetLegajo()==legajo && !dto.GetEliminado())
            {
                dto.SetEliminado(true);
                fseek(p,sizeof(clsAlumnoDTO)*pos,SEEK_SET);
                fwrite(&dto,sizeof(clsAlumnoDTO),1,p);
                break;
            }
            pos++;
        }

        fclose(p);
    }
}
/**=============================================================================
 FUNCION : void Modificar()
 ACCION : Guarda en la db la modificacion realizada en el registro.
 PARAMETROS: clsAlumnoDTO dto
 DEVUELVE : nada
============================================================================= **/
void clsAlumnoDAO::Modificar(clsAlumnoDTO dto)
{
    FILE *p;
    clsAlumnoDTO dto_arch;
    int pos = 0;
    p = fopen(ARCHIVO_ALUMNOS,"rb+");
    if(p!=NULL)
    {
        while(fread(&dto_arch,sizeof(clsAlumnoDTO),1,p))
        {
            if(dto_arch.GetLegajo()==dto.GetLegajo() && !dto_arch.GetEliminado())
            {

                fseek(p,sizeof(clsAlumnoDTO)*pos,SEEK_SET);
                fwrite(&dto,sizeof(clsAlumnoDTO),1,p);
                break;
            }
            pos++;
        }

        fclose(p);
    }
}
/**=============================================================================
 FUNCION : void Listar()
 ACCION : copia en un array el listado de registros de alumnos
 PARAMETROS: clsAlumnoDTO *dto
 DEVUELVE : nada
============================================================================= **/
void clsAlumnoDAO::Listar(clsAlumnoDTO *dto )
{
    FILE *p;
    int pos=0;
    clsAlumnoDTO dto_arch;
    p = fopen(ARCHIVO_ALUMNOS,"rb");
    if(p!=NULL)
    {
        while(fread(&dto_arch,sizeof(clsAlumnoDTO),1,p))
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
 FUNCION : int Count()
 ACCION : cuenta la cantidad de registros activos en la db
 PARAMETROS: nada
 DEVUELVE : cantidad de registros
============================================================================= **/
int clsAlumnoDAO::Count()
{
    FILE *p;
    int cant=0;
    clsAlumnoDTO dto;
    p = fopen(ARCHIVO_ALUMNOS,"rb");
    if(p!=NULL)
    {
        while(fread(&dto,sizeof(clsAlumnoDTO),1,p))
        {
            if(!dto.GetEliminado())
            {
                cant++;
            }
        }
        fclose(p);
    }
    return cant;
}

/**=============================================================================
 FUNCION : void leerAlumno()
 ACCION : Lee el registro de la db
 PARAMETROS: int legajo
 DEVUELVE : nada
============================================================================= **/
void clsAlumnoDAO::leerAlumno(int pos, clsAlumnoDTO adto)
{
    FILE *p;
    clsAlumnoDTO dto;
    p = fopen(ARCHIVO_ALUMNOS,"rb");
    if(p!=NULL)
    {
        while(fread(&dto,sizeof(clsAlumnoDTO),1,p))
        {
            if(!dto.GetEliminado())
            {
                fseek(p,sizeof(clsAlumnoDTO)*pos,SEEK_SET);
                adto.Copy(dto);
                break;
            }

        }
        fclose(p);
    }
}

/**=============================================================================
 FUNCION : void buscarAlumno()
 ACCION : devuelve posicion del registro en el archivo de la db
 PARAMETROS: int legajo
 DEVUELVE : nada
============================================================================= **/
int clsAlumnoDAO::buscarAlumno(int legajo)
{
    FILE *p;
    clsAlumnoDTO dto_arch;
    int pos = 0;
    p = fopen(ARCHIVO_ALUMNOS,"rb+");
    if(p!=NULL)
    {
        while(fread(&dto_arch,sizeof(clsAlumnoDTO),1,p))
        {
            if(dto_arch.GetLegajo()==legajo && !dto_arch.GetEliminado())
            {
                return pos;
                break;
            }
            pos++;
        }

        fclose(p);
    }
}

/**=============================================================================
 FUNCION : void Buscarsub()
 ACCION : Compara dos cadenas, char *cond
 PARAMETROS: clsMateriaDTO *lista
 DEVUELVE : nada
============================================================================= **/
void clsAlumnoDAO::BuscarSubA(clsAlumnoDTO *dto, char *cond)
{
    FILE *p;
    int pos=0;
    clsAlumnoDTO dto_arch;
	clsCadenas cadenas;
	char nombre[50];
    p = fopen(ARCHIVO_ALUMNOS,"rb");
    if(p!=NULL)
    {
        while(fread(&dto_arch,sizeof(clsAlumnoDTO),1,p))
        {
		dto_arch.GetNombre(nombre);
            if(!dto_arch.GetEliminado()&& cadenas.strSub(nombre, cond)>=0)
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
 FUNCION : void BuscarSubCountA(char *)
 ACCION : copia en un array el listado de registros de materias
 PARAMETROS: clsMateriaDTO *dto
 DEVUELVE : nada
============================================================================= **/
int clsAlumnoDAO::BuscarSubCountA(char *cond)
{
    FILE *p;
    int cant=0;
    clsAlumnoDTO dto;
		clsCadenas cadenas;
	char nombre[50];

    p = fopen(ARCHIVO_ALUMNOS,"rb");
    if(p!=NULL)
    {
        while(fread(&dto,sizeof(clsAlumnoDTO),1,p))
        {
				dto.GetNombre(nombre);
            if(!dto.GetEliminado()&& cadenas.strSub(nombre, cond)>=0)
            {
                cant++;
            }
        }
        fclose(p);
    }
    return cant;
}



/**=============================================================================
 FUNCION : void ListarAsignados()
 ACCION : copia en un array el listado de registros de alumnos
 PARAMETROS: clsAlumnoDTO *dto, int *legajos
 DEVUELVE : nada
============================================================================= **/
void clsAlumnoDAO::ListarAsignados(clsAlumnoDTO *listalegajos, int *legajos)
{
    FILE *p;
    int pos=0;
    clsAlumnoDTO dto_arch;
    p = fopen(ARCHIVO_ALUMNOS,"rb");
    if(p!=NULL)
    {
        while(fread(&dto_arch,sizeof(clsAlumnoDTO),1,p))
        {
            if(dto_arch.GetLegajo()==legajos[pos])
            {
                listalegajos[pos].Copy(dto_arch);
                pos++;
            }
        }
        fclose(p);
    }
}

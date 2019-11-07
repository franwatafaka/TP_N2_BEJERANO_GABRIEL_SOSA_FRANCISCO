/**#############################################################################
 ARCHIVO             : clsMateriaDAO.cpp
 AUTOR/ES            : Francisco Sosa y Gabriel Bejarano
 VERSION             : 1.0 beta.
 FECHA DE CREACION   : 22/10/2019.
 ULTIMA ACTUALIZACION: 07/11/2019.
*****************************************************************************
                             INCLUSIONES ESTANDAR
=============================================================================**/
#include "clsMateriaDAO.h"
/** en DAO NO VAN NI COUT NI CIN JAAMAS */
/**=============================================================================
 FUNCION : void Insertar()
 ACCION : Carga en la db el objeto dto
 PARAMETROS: clsMateriaDTO dto
 DEVUELVE : nada
============================================================================= **/
void clsMateriaDAO::Insertar(clsMateriaDTO dto)
{
    FILE *p;
    p = fopen(ARCHIVO_MATERIAS,"ab");
    if(p!=NULL)
    {
        fwrite(&dto,sizeof(clsMateriaDTO),1,p);
        fclose(p);
    }
}
/**=============================================================================
 FUNCION : void Eliminar()
 ACCION : Elimina el registro de la db (de manera logica)
 PARAMETROS: int id
 DEVUELVE : nada
============================================================================= **/
void clsMateriaDAO::Eliminar(int id)
{
    FILE *p;
    clsMateriaDTO dto;
    int pos = 0;
    p = fopen(ARCHIVO_MATERIAS,"rb+");
    if(p!=NULL)
    {
        while(fread(&dto,sizeof(clsMateriaDTO),1,p))
        {
            if(dto.GetId()==id && !dto.GetEliminado())
            {
                dto.SetEliminado(true);
                fseek(p,sizeof(clsMateriaDTO)*pos,SEEK_SET);
                fwrite(&dto,sizeof(clsMateriaDTO),1,p);
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
 PARAMETROS: clsMateriaDTO dto
 DEVUELVE : nada
============================================================================= **/
void clsMateriaDAO::Modificar(clsMateriaDTO dto)
{
    FILE *p;
    clsMateriaDTO dto_arch;
    int pos = 0;
    p = fopen(ARCHIVO_MATERIAS,"rb+");
    if(p!=NULL)
    {
        while(fread(&dto_arch,sizeof(clsMateriaDTO),1,p))
        {
            if(dto_arch.GetId()==dto.GetId() && !dto_arch.GetEliminado())
            {

                fseek(p,sizeof(clsMateriaDTO)*pos,SEEK_SET);
                fwrite(&dto,sizeof(clsMateriaDTO),1,p);
                break;
            }
            pos++;
        }

        fclose(p);
    }
}
/**=============================================================================
 FUNCION : void subMaterias()
 ACCION : Muestra y permite el acceso a las funciones de gestion de materias
 PARAMETROS: nada
 DEVUELVE : nada
============================================================================= **/
void clsMateriaDAO::Listar(clsMateriaDTO *dto )
{
    FILE *p;
    int pos=0;
    clsMateriaDTO dto_arch;
    p = fopen(ARCHIVO_MATERIAS,"rb");
    if(p!=NULL)
    {
        while(fread(&dto_arch,sizeof(clsMateriaDTO),1,p))
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
 FUNCION : void Listar()
 ACCION : copia en un array el listado de registros de materias
 PARAMETROS: clsMateriaDTO *dto
 DEVUELVE : nada
============================================================================= **/
int clsMateriaDAO::Count()
{
    FILE *p;
    int cant=0;
    clsMateriaDTO dto;
    p = fopen(ARCHIVO_MATERIAS,"rb");
    if(p!=NULL)
    {
        while(fread(&dto,sizeof(clsMateriaDTO),1,p))
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

#include "clsMateriaDAO.h"
/** en DAO NO VAN NI COUT NI CIN JAAMAS */
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

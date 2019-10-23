#include "clsAlumnoDAO.h"

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

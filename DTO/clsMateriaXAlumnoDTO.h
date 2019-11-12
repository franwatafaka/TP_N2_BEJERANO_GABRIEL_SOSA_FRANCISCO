#ifndef CLSMATERIAXALUMNODTO_H
#define CLSMATERIAXALUMNODTO_H


class clsMateriaXAlumnoDTO
{
    public:
        clsMateriaXAlumnoDTO();
        int GetLegajo() { return Legajo; }
        void SetLegajo(int val) { Legajo = val; }
        int GetLegajoMateria() { return LegajoMateria; }
        void SetLegajoMateria(int val) { LegajoMateria = val; }
        int GetId() { return Id; }
        void SetId(int val) { Id = val; }
        bool GetEliminado() { return Eliminado; }
        void SetEliminado(bool val) { Eliminado = val; }

        void Copy(clsMateriaXAlumnoDTO);

    private:
        int Legajo;
        int LegajoMateria;
        int Id;
        bool Eliminado;
};

#endif // CLSMATERIAXALUMNODTO_H

#include "Constancia.h"

Constancia::Constancia()
{

}

std::istream &operator>>(std::istream &O, Constancia &X)
{
    std::cout<<"\nNombre del alumno: ";
    O>>X.NombreAlm;
    std::cout<<"Nombre de la Carrera: ";
    O>>X.NombreCarr;
    std::cout<<"Total de materias aprobadas: ";
    O>>X.MatAprob;
    std::cout<<"Promedio general: ";
    O>>X.Prom;

    return O;
}

std::ostream &operator<<(std::ostream &O, Constancia &X)
{
    O<<"\nNombre del alumno: "<<X.NombreAlm<<std::endl;
    O<<"Nombre de la Carrera: "<<X.NombreCarr<<std::endl;
    O<<"Total de materias aprobadas: "<<X.MatAprob<<std::endl;
    O<<"Promedio general: "<<X.Prom<<std::endl;

    return O;
}

bool Constancia::operator==(Constancia& c)
{
    if(c.NombreAlm==NombreAlm && c.NombreCarr==NombreCarr && c.MatAprob==MatAprob && c.Prom==Prom){
        return true;
    }
    return false;
}

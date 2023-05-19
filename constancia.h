#include<iostream>
#ifndef CONSTANCIA_H
#define CONSTANCIA_H

class Constancia
{
    private:
        std::string NombreAlm,NombreCarr;
        int MatAprob;
        float Prom;

    public:
        Constancia();
        friend std::istream & operator>>(std::istream &O,Constancia &X);
        friend std::ostream & operator<<(std::ostream &O,Constancia &X);
        bool operator==(Constancia&);
};

#endif // CONSTANCIA_H

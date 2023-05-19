#include<iostream>
#ifndef COLA_H
#define COLA_H
#include "Constancia.h"
#define TAM 50
template<class T>

class Cola
{
    private:
        T dato[TAM];
        int Frente,ult;
        bool elimina(int);

    public:
        Cola():ult(0),Frente(0){}
        bool Vacia()const;
        bool Llena()const;
        bool Enqueue(T& );
        bool Dequeue();
        T Front()const;
        int Buscar(Constancia&);
};

template<class T>
bool Cola<T>::Vacia()const
{
   return Frente==ult;
}

template<class T>
bool Cola<T>::Llena()const
{
    return ult==TAM-1;
}

template<class T>
bool Cola<T>::Enqueue(T& Dato)
{
    if(!Llena()){
        dato[ult]=Dato;
        ult++;
        return true;
    }else{
        return false;
    }
}

template<class T>
bool Cola<T>::Dequeue()
{
    if(!Vacia()){
        elimina(Frente);
        return true;
    }else{
        return false;
    }
}

template<class T>
bool Cola<T>::elimina(int pos){
    if(Vacia() || pos<0 || pos>ult){
        std::cout<<"\n No se pudo eliminar";
        return false;
    }
    int i=pos;
    while(i<ult){
        dato[i]=dato[i+1];
        i++;
    }
    ult--;
    return true;
}

template<class T>
T Cola<T>::Front()const
{
    if(!Vacia())
        return dato[Frente];
}

template<class T>
int Cola<T>::Buscar(Constancia& Dato)
{
    for(int i=0;i<=ult;i++){
        if(dato[i]==Dato)
            return i;
    }
    return -1;
}

#endif // COLA_H

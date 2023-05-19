#include <iostream>
#include "Cola.h"
#include "Constancia.h"

using namespace std;

int main()
{
    int opc,cont;
    Cola<Constancia> micola;
    Constancia X;
    do{
        system("cls");
        cout<<"\n\tCONSTANCIAS DE ESTUDIO"<<endl<<endl;
        cout<<"Generar solicitud para constancia."<<endl;
        cout<<"Recibir constancia."<<endl;
        cout<<"Buscar solicitud."<<endl;
        cout<<"Salir."<<endl<<endl;
        cout<<"Ingrese una opcion:-> ";
        cin>>opc;

        switch(opc){

            case 1: system("cls");
                    cont++;
                    cout<<"\n\tTurno #"<<cont<<" Ingrese sus datos: "<<endl;
                    cin>>X;
                    if(micola.Enqueue(X)){
                        cout<<"\n"<<endl;
                    }else{
                        cout<<"\nError!, La Cola esta llena."<<endl;
                    }
                    system("pause");
                    break;

            case 2: system("cls");
                    if(micola.Vacia()){
                        cout<<"La cola esta vacia."<<endl;
                    }else{
                        cout<<"\n\tElaborando constancia: "<<endl;
                        X=micola.Front();
                        cout<<X<<endl;
                    }
                    micola.Dequeue();
                    system("pause");
                    break;

            case 3: system("cls");
                    if(micola.Vacia()){
                        cout<<"La cola esta vacia."<<endl;
                    }else{
                        cout<<"Ingresa los datos de la solicitud que deseas buscar: "<<endl;
                        cin>>X;
                            if(micola.Buscar(X)== 0){
                                 cout<<"\n\tsolicitud encontrada! No hay constancias antes de ti."<<endl<<endl;
                            }else if(micola.Buscar(X)>=0){
                                cout<<"\n\tsolicitud encontrada!\nContancias restantes: #"<<micola.Buscar(X)<<endl<<endl;
                            }else{
                                cout<<"\nConstancia no encontrada, favor de solicitar una."<<endl<<endl;
                            }
                    }
                    system("pause");
                    break;
        }
    }while(opc!=4);
}

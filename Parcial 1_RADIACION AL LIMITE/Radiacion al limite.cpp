#include <iostream>
using namespace std;

int main()
{
    //Definimos las variables que utilizaremos 
    double T,T2;
    //Se le pide al usuario el tiempo medio de la vida del isotopo
    cout << ("Ingrese los nanosegundos: ");
    cin >> T;
    //El valor T se dividira en 1e9 (1.000.000.000)
    T2 = (T) / 1e9;
    //Concluimos las condiciones para imprimir el nivel de radiacion
    if(T2<=1){
        cout<<("Radiacion alta");
    }
    else{

        if(1<T2 && T2 < 84600){
            cout<<("Radiacion moderada");}
        else{
            if(T2>84600){
                cout<<("Radiacion baja");
            }
        }
        
    }
    
}
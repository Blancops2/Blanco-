/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void parimpar(){
     int num;
     cout<<"a continuacion haremos un programa que muestre si un numero es par o impar\n";
     cout<<"ingrese un numero porfavor\n";
     cin>> num;
     int resultado;
    //resultado=(num%2);
    if(num%2==0){
        cout<<"su numero es par\n";
    }else{
        cout<<"su numero es impar\n\n";
    }
}

void horasminutos(){
    float horas;
    float minutos;
    int segundos;
    cout<<"dame una cantida de segundos para convertirlo a horas y minutos\n";
    cin>>segundos;
    
    minutos = segundos / 60;
    horas = minutos / 60;
    cout<<"la cantidad de minutos es: "<< minutos<<"\n";
    cout<<"la cantidad de horas es: "<<horas<<"\n\n";
}

void array(){
    int numarray = 0;
    cout<<"de cuandos numoros deseas hacer el array?\n";
    cin>>numarray;
    
    int arraylinea[numarray];
    
    //pedir los numeros al usuario
    for(int i=0;i<numarray;i++){
        cout<<"dame un numero para valor de array : "<< i+1<< "\n";
        cin>>arraylinea[i];
    }
    cout<<"el array en el orden que lo escribiste\n";
    for(int i=0;i<numarray;i++){
        cout<<arraylinea[i]<<" ";
    }
    cout<<"\n";
}



int main(){
    int opcion;
    
    
    do{
        cout<<"menu de opciones\n";
        cout<<"1. programa que verifica si un numero es par o impar\n";
        cout<<"2. programa que le das segundos y te devuelve horas y minutos\n";
        cout<<"3. programa que crea un array\n";
        cout<<"0. para salir\n";
        cin>>opcion;
        
        
        
        
        switch(opcion){
            case 1:
            parimpar();
            break;
            case 2:
            horasminutos();
            break;
            case 3:
            array();
            break;
            default:
            if(opcion!=0){
                cout<<"comando invalido\n\n";
                
            }
            
        }
        
    }while(opcion!=0);
    
    
    
    
}
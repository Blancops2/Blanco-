/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//VECTOR ORDENADO
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int m,i,j;
    int mayor=0;
    int vector[10];
    int tamaño=10;
    int temp;
    
    cout<<" dame numeros para rellenar un vector de 10\n";
    for(i=0;i<10;i++){
        cout<<"posicion "<<i+1<<": ";
        cin>>m;
        vector[i]=m;
        
        if(vector[i]<mayor){
            mayor=vector[i];
        }
    }
   
    for(i=0;i<tamaño-1;i++){
        
        for(int j=0;j<tamaño-i;j++){
            
            if(vector[j]>vector[j+1]){
                temp=vector[j];
                vector[j]=vector[j+1];
                vector[j+1]=temp;
            }
        }
    }
    
    
    cout<<" vector ordenado\n";
    
    for(int k=0;k<tamaño;k++){
        cout<<vector[k]<<" ";
    }
    
    return 0;
}

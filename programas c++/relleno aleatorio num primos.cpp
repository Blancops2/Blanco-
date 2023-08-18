/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int m;
    int num;
    int acum=0;
    int divisiones=1;
    int primos;
    
    srand(time(NULL));
    cout<<"¿de que tamaño quieres el areglo?\n";
    cin>>m;
    int vector[m];
    for(int i=0;i<m;i++){
        num = rand()%100;
        vector[i]=num;
        cout<<num<<" ";
    }
    
    for(int j=0;j<m;j++){
        do{
            if(vector[j]%divisiones==0){
                acum++;
                //cout<<acum<<" acum";
            }
            divisiones++;
            
            
        }while(divisiones<=vector[j]);
        if(acum==2){
            primos++;
        }
        divisiones=1;
        acum=0;
    }
    
    cout<<"\n en total salieron: "<<primos<<" numeros primos ";
    
    

    return 0;
}

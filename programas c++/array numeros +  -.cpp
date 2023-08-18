/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int array[10];
    int negativos=0;
    int positivos=0;
    int nulos=0;
    
    cout<<"dame 10 numeros\n";
    for(int i=0;i<10;i++){
        cout<<"numero "<<i+1<<"\n";
        cin>>array[i];
        
        if(array[i]<0){
            negativos=negativos+1;
            
        }
        if(array[i]>0){
            positivos=positivos+1;
            
        }
        if(array[i]==0){
            nulos=nulos+1;
        }
        
    }
    
    cout <<"numeros positivos son: "<<positivos<<"\n";
    cout <<"numeros negativos son: "<<negativos<<"\n";
    cout <<"numeros nulos son: "<<nulos<<"\n";

    return 0;
}

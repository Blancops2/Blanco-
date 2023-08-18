/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int areglo[]={20, 30, 5, 15, 40, 2, 100, 1000};
    int numero;
    cout<<"escribe un numero para saber cuales son los numeros mayores\n";
    cin>>numero;
    
    for(int i=0;i<8;i++){
        if(numero<areglo[i]){
            cout<<areglo[i]<<" ";
        }
    }

    return 0;
}

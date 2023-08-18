/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
int variable;
int verificador;
    cout<<"dame un numero para saber si es par o impar\n";
    cin>>variable;
    
    verificador= variable/2;
    if(verificador=0){
        cout << variable<<" es un numero par "  ;
    }else{
        cout <<variable<<" es un numero impar ";
    }
    
    
    
    return 0;
}

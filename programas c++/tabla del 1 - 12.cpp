/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int num;
    cout<<"dame un numero que no sea mayor que 12 y te dare su tabla de multiplicar\n";
    cin>>num;
    
    if(num<=0 || num>12 ){
        cout<<"comando invalido";
        return 0;
    }
    
    for(int i=0;i<10;i++){
        cout<<num<<" * "<<i+1<<"  = "<<num*(i+1)<<"\n";
        
    }
    
    
    
    
    
    return 0;
}

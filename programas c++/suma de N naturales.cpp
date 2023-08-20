/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;


//suma de N naturales
int main()
{
    int resultado;
    int resultado2;
    int num;
    cout<<"dame un numero para sumar los primeros numeros naturales: ";
    cin>>num;
    resultado=num;
    
    if(num<=0){
        cout<<"tu numero es menor o igual que 0. debes escribir un numero natural";
        return 0;
    }
    

    while(num!=0){
        resultado=num;
        resultado2+=resultado;
        //cout<<resultado<<" = "<< num<<" + "<<num-1<<"\n";
        num=num-1;
      
        //cout<<" "<<num<<" \n";
    }
    
    cout<<"\nla suma de los numeros naturales es: "<<resultado2;
    
    return 0;
}

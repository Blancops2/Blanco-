/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
//programa con diferentes operadores

//+__-__/__*__mod
int main()
{
    int resultado;
    int a,b;
    char letra,c;
    cout<<"dame 2 numeros para operar\n";
    cin>>a>>b;
    cout<<"elje una operacion\n";
    cout<<"- \n"<<"+ \n"<<"* \n"<<"/ \n"<<"%--(mod(residuo))\n";
    cin>>letra;

    
    switch(letra){
        case '-':
        resultado=a-b;
        cout<<a<<" - "<<b<<" es igual a: "<<resultado;
        break;
        case '+':
         resultado=a+b;
        cout<<a<<" + "<<b<<" es igual a: "<<resultado;
        
        break;
        case '*':
         resultado=a*b;
        cout<<a<<" * "<<b<<" es igual a: "<<resultado;
        
        break;
        case '/':
         resultado=a/b;
        cout<<a<<" / "<<b<<" es igual a: "<<resultado;
        
        break;
        case '%':
         resultado=a%b;
        cout<<a<<" % "<<b<<" es igual a: "<<resultado;
        break;
        
        
    }
    
    
    
    return 0;
}
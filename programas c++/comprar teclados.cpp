/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int cantidad=0;
    int resultado=0;
    
    cout<<"en una tienda donde se venden teclados, si se commpra mas de 8 el costo por cada\n";
    cout<<"cada uno es de 85 lempiras; entre 4 y 8 es de 90 lempiras cada uno, si la compra\n";
    cout<<"es menor de 4 el costo es de 100 Lempiras por cada uno. Escriba el algoritmo para\n";
    cout<<"saber cuanto pagara un cliente segun el numero de teclados que compra. mostrar el\n";
    cout<<"numero de teclados a comprar y el total a pagar\n\n";
    
    cout<<"/// ¿cuantos teclados deseas comprar?///\n";
    cin>>cantidad;
    
    if(cantidad>8){
        cout<<"si quieres comprar "<<cantidad<<" de teclados\n";
        cout<<"cada uno te costara 85 Lempiras\n"<<"por lo que gastarias: \n";
        resultado=cantidad*85;
        cout<<cantidad<<" * 85\n";
        cout<<"el total a pagar es: "<<resultado;
        
    }
    if(cantidad>4 && cantidad<8){
        cout<<"si quieres comprar "<<cantidad<<" de teclados\n";
        cout<<"cada uno te costara 90 Lempiras\n"<<"por lo que gastarias: \n";
        resultado=cantidad*90;
        cout<<cantidad<<" *  90\n";
        cout<<"el total a pagar es: "<<resultado;
        
    }
    if(cantidad<4){
        cout<<"si quieres comprar "<<cantidad<<" de teclados\n";
        cout<<"cada uno te costara 100 Lempiras\n"<<"por lo que gastarias: \n";
        resultado=cantidad*100;
        cout<<cantidad<<" *  100\n";
        cout<<"el total a pagar es: "<<resultado;
        
    }
    
    

    return 0;
    
}

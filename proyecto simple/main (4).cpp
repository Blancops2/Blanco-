/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int opcion;
    cout<<"no tengo ganas de programar xd ";
    
    cout<<"que quieres hacer?\n";
    cout<<"1. programar un rato\n";
    cout<<"2. ir a descansar\n";
    cin>> opcion;
    
    
    do{
        switch(opcion){
            case 1:
            cout<<"tu no te quieres hijo pero el exito asi es como se alcanza\n";
            cout<<"sigue asi, seras alguien grande.\n";
            return 0;
            break;
            
            case 2:
            cout<<"te mereces un descanso has dado mucho de ti\n";
            cout<<"ve a descansar hijo mio, mañana sera un dia mejor\n";
            cout<<"terminando secuencia\n";
            return 0;
            break;
            
            default:
            return 0;
            break;
        }
        
        
    }while(opcion!=0);
    
    return 0;
}

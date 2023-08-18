/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int array[5];
    
    cout<<"dame 5 numeros que sean mayores que 0\n";
    for(int i=0;i<5;i++){
        cin>>array[i];
        if(array[i]<=0){
            cout<<"el numero no corresponde a las instrucciones\n";
            return 0;
        }
    }
    for(int j=0;j<5;j++){
        cout<<array[j]<<" ";
    }
    

    return 0;
}

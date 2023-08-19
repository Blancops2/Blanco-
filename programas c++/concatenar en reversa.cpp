/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int i;
    int j;
    int m=9;
    int vector[9];
    cout<<"este programa concatena los numeros de 9 hasta 1\n";

    for(i=0;i<9;i++){
        vector[i]=i+1;
        
    }
    
    for(j=0;j<=9;j++){
        
        for(i=m;i>=0;i--){
            cout<<vector[i];
        }
        cout<<"\n";
        m=m-1;
    }
    
    
    return 0;
}
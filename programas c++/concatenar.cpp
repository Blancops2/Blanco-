/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    cout<<"concatenaremos el *\n";
    char letra='*';
    
    
    for(int i =1;i<=10;i++){
        
        for(int j=1;j<=i;j++){
            cout<<letra;
        }
        cout<<"\n";
    }
    return 0;
 
}
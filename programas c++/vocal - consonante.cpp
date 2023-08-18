/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main() {
    char letra;
    cout <<"dame una letra\n";
    cin>>letra;
    letra=tolower(letra);
    
	   if(letra=='a'|| letra=='e'|| letra=='i'|| letra=='o'|| letra=='u'){
          cout<<letra<<" es una vocal";
        } else{
         cout<<letra<<" es una consonante";
	    } 

	 
    return 0;
}
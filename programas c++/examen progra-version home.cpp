/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;



void proglanzarmoneda(){
  //funcion de lanzar moneda
    cout<<"a continuacion haremos un programa que lanzara monedas y contaremos\n";
    std::cout << "cuantas veces sale cara y escudo\n" << std::endl;
    std::cout << "lanzando moneda\n" << std::endl;
    int cara;
    int escudo;
    
    
    
    int variablemoneda;
    int tiponose;
    variablemoneda=0;
    for(int i=0 ;i<10; i++){
        variablemoneda=rand()%2;
        cout << variablemoneda<<"\n";
        if(variablemoneda==0){
            cara=(cara+1);
        }
        else{
            escudo=(escudo+1);
            
        }
        
    }
cout << "cara a salido " << cara <<" veces\n";
cout << "escudo a salido "<< escudo <<" veces";
}

//funcion de lanzar dados
void proglanzardado(){
    cout<<"iniciando programa de lanzar dados";
    std::cout << "se lanzaran muchos dados hasta que\n" << std::endl;
    std::cout << "el numero 6  salga 6 veces" << std::endl;
    int contadordado;
    
    int lanzardado;
    int dadodiez;
    while(dadodiez<10){
        lanzardado=rand()%7;
        cout << lanzardado <<"\n";
        contadordado=(contadordado+1);
        if(lanzardado==6){
            dadodiez++;
        }
    }
    std::cout << "se han lanzado " <<contadordado <<" veces\n" <<std::endl;
    std::cout << "hasta que el **10** a salido 6 veces" << std::endl;

}



int main()
{
    int opcion;
    cout<<"bienvenido al menu de opciones\n";
    do{
        std::cout << "elije una de las siguiente opciones" << std::endl;
        std::cout << "1. lanzar monedas" << std::endl;
        std::cout << "2. lanzar dados"<< std::endl;
        std::cout << "3.salir" << std::endl;
        std::cin >> opcion;
        switch(opcion){
            case 1:
            std::cout << "inicializando programa de lanzar monedas\n" << std::endl;
            proglanzarmoneda();
            std::cout << "\n" << std::endl;
            break;
            case 2:
            std::cout << "inicializando programa de lanzar dados\n" << std::endl;
            proglanzardado();
            std::cout << "\n" << std::endl;
            break;
            case 3:
            std::cout << "saliendo del programa\n" << std::endl;
            return 0;
            default:
            if(opcion!=3){
                cout << "comando invalido\n";
            }
        }
        
        
        
        
        
    }while (opcion != 3);

    return 0;
}








/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{   
    int lista [4]={}; // o valor do array que não tem voce coloca {} vazio para atribuir o valor de 0;
        lista[0]=2;
        lista[1]=4;
        lista[2]=6;
            
            cout<< lista[3] << endl; 
        cout << "o Resultado do primeiro array é "<<lista[0] *lista[2]<< endl;
            cout << endl;
        
        int numeros[] = {1,3,5,7};
            
         /* int num= -1;
         
           while(num<3){                                                //metodo while com array impressão em tela;
              num++;
                cout<<numeros[num]<< endl;
            }
            
        */
        
            for(int num = 0;num <=3;num++){
                
                cout <<numeros[num];            // metodo for com array impressão em tela;
            }

    return 0;
}

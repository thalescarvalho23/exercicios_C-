/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
#include<stdlib.h>
using namespace std;

    struct pessoa{
        string nome;
            int idade;
                int telefone;
                
                
            
    };
   
   
    int main()
    
{       pessoa eu ;
    
    eu.nome="Thales";
    eu.idade=24;
    eu.telefone=943231235;
    
        cout << eu.nome<<" "<< eu.idade<<" "<< eu.telefone<< endl;
    
    return 0;
}

/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{   
    cout << "Digite o Número do mês que deseja aparecer! " << endl;
    
    int num ;
    cin >> num;
    
    switch(num){
        case 1:
            cout << "Janeiro";
            break;
            
        case 2:
            cout <<"Fevereiro";
                break;
            
        case 3 :
            cout << "Março";
                break;
                
        case 4 :
            cout << "Abril";
                break;
                
        case 5 :
            cout << "Maio";
                break;
                
        case 6 :
            cout << "Junho";
                break;
        
        case 7 :
            cout << "Julho";
                break;
        
        case 8 :
            cout << "Agosto";
                break;
                
        case 9 :
            cout << "Setembro";
                break;
                
        case 10 :
            cout << "Outubro";
                break;
                
        case 11:
            cout << "Novembro";
                break;
                
        case 12 :
            cout << "Dezembro";
                break;

                default :
                cout << "O valor Digitado está errado, tente Novamente" << endl;
        
    }
        
    return 0;
}

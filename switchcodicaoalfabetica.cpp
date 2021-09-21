/******************************************************************************

                           taboada 07/07/21

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{   cout << "Digite uma letra do alfabeto entre 'A' e 'D' " << endl;
        char c; 
            cin >> c;
        
        switch(c){
            case 'a':
            case 'A':
                cout << "você Digitou a Letra 'A' ou 'a' ";
                 break;
                 
            case 'b':
            case 'B':
                cout << "você Digitou a Letra 'B' ou 'b' ";
                 break;
                 
            case 'c':
            case 'C':
                cout << "você Digitou a Letra 'C' ou 'c' ";
                 break;
                 
            case 'D':
            case 'd':
                cout << "você Digitou a Letra 'D' ou 'd' ";
                 break;
                 
                 default:
                 
                 cout<< "Você digitou algum letra ou número que não faz parte da condição , por favor tente novamente"<< endl;
            
        }
        
    return 0;
}

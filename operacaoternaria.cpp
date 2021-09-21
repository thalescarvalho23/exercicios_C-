/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main()
{
   cout << "Digite o número do mês desejado " << endl;
    int num;
        cin >> num;
        string texto = (num ==1)?"Janeiro" :
                        (num==2)? "Fevereiro":
                        (num==3)? "Março":
                        (num==4)? "Abril":
                        (num==5)? "Maio":
                        (num==6)? "Junho":
                        (num==7)? "Julho":
                        (num==8)? "Agosto":
                        (num==9)? "Setembro":
                        (num==10)? "Outubro":
                        (num==11)? "Novembro":
                        (num==12)? "Dezembro":
                            "o Valor digitado não corresponde a nem um mês, tente novamente. " ;
                         cout << texto<< endl;
            

    return 0;
}

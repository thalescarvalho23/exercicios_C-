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
  cout << "Digite o número do dia da semana desejado "<< endl;
    int num_semana;
        cin>> num_semana;
            string dia = (num_semana==1)? "Domingo":
                            (num_semana==2)? "Segunda":
                            (num_semana==3)? "Terça":
                            (num_semana==4)? "Quarta":
                            (num_semana==5)? "Quinta":
                            (num_semana==6)? "Sexta":
                            (num_semana==7)? "Sabado":
                                " o número Digitado não corresponde a nem um dia da semana, tente novamente. ";
                                cout << "Você digitou "<< dia << endl;
                        

    return 0;
}

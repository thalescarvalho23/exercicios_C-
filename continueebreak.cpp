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
    int num = 0;
        while(true){
            num++;
             
            if(num>=10)
                    break; // break parar o código.
            else
                if (num==4 or num ==6)
                    continue; // metodo continue é para parar pular a execução do looping.
                    
            cout<<num<< endl;
            
        }

    
       
    return 0;
}

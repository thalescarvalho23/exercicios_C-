/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
     
    int n= 0;
        cout << " Por favor informe o valor da taboada desejada"<< endl;
        cin >> n;
        
        
        
        for (int i = 1;i <= 10;i++){
            
            
            cout << i<<" x "<<n<<" = " << i*n << endl ;
            
        }

    return 0;
}

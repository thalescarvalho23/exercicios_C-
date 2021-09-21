/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{   float array[5];
        for(int i=0;i <=4;i++){
            
            cout << "Informe o "<<i+1<< " valor "<< endl;
                cin >>array[i];
        }
            
           double total =0;
            for(int i2=0;i2<=4;i2++){
                total = total +array[i2];           //media array 
                
            }
                cout<< fixed;
                cout<< " A media é " <<(total/5) << endl; 
                
                
                int planilha [10][10]={{},{}};
                
                for(int x = 0;x<=10;x++){
                    for(int y= 0;y<=10;y++){            // array com 2 for
                         planilha[x][y];
                            cout << planilha[x][y] << endl;
                    }
                        
                    }
                    
                
                     return 0;
}

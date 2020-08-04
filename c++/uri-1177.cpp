#include <iostream>
    
using namespace std;
    
    int main (){
        int N;
        
        cin >> N;
        
        for(int i=0; i <= 999; ){
                for(int j=0; j < N; j++){
                      cout << "N[" << i << "]" << " = " << j << endl;  
                        i++;
                        
                        if(i>999){
                                  break;
                                  
                                  }                              
                        }          
                
                }
        
        system("pause");
        return 0;
              
        
}
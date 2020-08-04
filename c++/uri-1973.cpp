#include<iostream>
#include<string>
#include<stdlib.h>
    
using namespace std;
    
int main(){
    int teste, i=0;
    cin >> teste;
    long long ovelinha[teste];
    long long ovelinhas=0, ov=0, esta=0;
    
        for (int i=0; i < teste; i++){
            cin >> ovelinha[i];
            ov += ovelinha[i];
        }
              
        while (i >= 0 && i < teste){
              
            if (ovelinha[i] % 2 == 1){
                ovelinha[i] -= 1;
                i++;
                ovelinhas++;
                if (i == teste)
                    esta = ovelinhas;
                    
            }else if (ovelinha[i] ==0 ){
                if (esta == 0)
                    esta=ovelinhas;
                i--;
            }else {
                ovelinha[i] -= 1;
                i--;
                ovelinhas ++;
                if (esta == 0)
                    esta=ovelinhas;
            }
        }
        
         ov-=ovelinhas;
         cout << esta << " " << ov <<endl;
         
         system("pause");
    
    return 0;
    
}
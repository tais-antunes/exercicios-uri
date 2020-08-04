#include <iostream>
#include <string>
#define Tam 12

using namespace std;

int main (){
    char O;
    float soma, M[Tam][Tam] ;
    
    cin >> O;
    for (int i=0; i < Tam; i++){
        for (int j=0; j < Tam; j++){
            cin >> M[i][j];
                     
        }
    } if(O == 'S'){
              soma =  M[1][0] + M[2][0] + M[2][1] + M[3][0] + M[3][1] + M[3][2] + M[4][0] + M[4][1] + M[4][2] + M[4][3] +
                      M[5][0] + M[5][1] + M[5][2] + M[5][3] + M[5][4] + M[6][0] + M[6][1] + M[6][2] + M[6][3] + M[6][4] +
                      M[7][0] + M[7][1] + M[7][2] + M[7][3] + M[8][0] + M[8][1] + M[8][2] + M[9][0] + M[9][1] + M[10][0];
                
                 cout << soma << endl;
                }else if (O == 'M'){
                       soma =  (M[1][0] + M[2][0] + M[2][1] + M[3][0] + M[3][1] + M[3][2] + M[4][0] + M[4][1] + M[4][2] + M[4][3] +
                      M[5][0] + M[5][1] + M[5][2] + M[5][3] + M[5][4] + M[6][0] + M[6][1] + M[6][2] + M[6][3] + M[6][4] +
                      M[7][0] + M[7][1] + M[7][2] + M[7][3] + M[8][0] + M[8][1] + M[8][2] + M[9][0] + M[9][1] + M[10][0]) / 30;
                    
                    cout << soma << endl;
                      }
  
}
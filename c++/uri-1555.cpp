#include <iostream>

using namespace std;

int main (){
    int N, x,y;
    int r, c, b;
    
    
    cin >> N;
    
    for(int i=1; i <= N; i++){
            cin >> x >> y;
            r = ((3*x)*(3*x))+y*y;
            b = (2*(x*x))+((5*y)*(5*y));
            c = (-100 * x)+(y*y*y);
            
            if((r > b) && (r > c)){
                 cout << "Rafael ganhou" << endl;
                 }
            if ((b > r) && (b > c)){
                   cout << "Beto ganhou" << endl;
                   }
            if ((c > r) && ( c > b)) {
                        cout << "Carlos ganhou" << endl;
                    }
                         
            }
            return 0;
    
}
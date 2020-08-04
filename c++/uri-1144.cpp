#include <iostream>

using namespace std;

int main (){
    int b=0, c=0, d=0, e=0, N;
    
    cin >> N;
    
    for (int i=1; i <= N; i++){
        b = i*i;
        c = i*b;
    cout << i << " " << b << " "<< c << endl;
         d = b+1;
         e = c+1;
    cout << i << " " << d << " "<< e << endl;
            
        }   
    
    
    system ("pause");
    return 0;
   
}

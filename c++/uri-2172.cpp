#include <iostream>
 
using namespace std;
 
int main() {
 
    int x;
    int m;
    int exp;



 // X é o valor de aumento na experiencia dos monstros e M é o valor de xp dos monstrooos
    do{
        cin >> x;
        cin >> m;

        exp = x*m;
        
        if(m*x>0){
        cout << exp << endl;
        }

    }

    while (x>0 && m>0);

    return 0;
}
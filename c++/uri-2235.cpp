#include <iostream>
 
using namespace std;
 
int main() {
 
    int A;
    int B;
    int C;

    cin >> A;
    cin >> B;
    cin >> C;


        if(A == B || A == C || B == C || A+B==C || A+C==B || B+C==A)
            {
                    cout << "S" << endl;
            }

            else{
                    cout << "N" << endl;

            }
 
    return 0;
}
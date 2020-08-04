#include <iostream>
 
using namespace std;
 
int main() {
	int L, R, soma;

    cin >> L >> R;

	while( (L !=0) && (R != 0))
		{
        cout << L + R << endl;
        cin >> L >> R; 
        }

    return 0;
}
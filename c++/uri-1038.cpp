#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n, p;
    float total;
    
    cin >> n >> p;
    switch (n){
        case 1:
                total = 4.00;
                break;
        case 2:
                total = 4.50;
                break;
        case 3:
                total = 5.00;
                break;
        case 4:
                total = 2.00;
                break;
        case 5:
                total = 1.50;
                break;
        default:
                return 0;
    }

    total = total * p;
    
    cout << setprecision(2) << fixed << "Total: R$ " << total << endl;
    
    system ("pause");
    return 0;
}

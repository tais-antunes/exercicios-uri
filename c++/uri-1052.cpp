#include <iostream>

using namespace std;

string mes(int n);

int main()
{
    int n=0;
    cin >> n;
    
    cout <<""<< mes(n) << endl;
    
    
    return 0;
}

string mes(int n){


    switch(n)
    {
        case 1:
                return "January";
 
        case 2:
                return "February";
                
        case 3:
                return "March";
                
        case 4:
                return "April";
                
        case 5:
                return "May";

        case 6:
                return "June";
                
        case 7:
                return "July";

        case 8:
                return "August";

        case 9:
                return "September";
  
        case 10:
                return "October";

        case 11:
                return "November";

        case 12:
                return "December";
        default:
                return 0;

    }


}
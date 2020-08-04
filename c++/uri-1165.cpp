	#include <iostream>
	
	using namespace std;
	
	int main (){
	int x, cases = 0, count = 0; 
	
	cin >> cases;
	
	for(int i = 0; i < cases; i++){
	    count = 0;
	    cin >> x;
	
	for(int j = 1; j <= x; j++){
	    if(x % j == 0){
	      count ++;
	   }
	
	 } if (count == 2) {
	        cout << x << " eh primo" << endl;
	                 
	    } else {
	        cout << x << " nao eh primo" << endl;
	
	            }     
	    
	    }
		
		    return 0;
}
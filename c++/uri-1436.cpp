#include <iostream>

using namespace std;

int main (){
	int N, T, idade,x;
	
	cin >> T;
	
	for (int i = 1; i <= T; i++){
		cin >> N;
		for(int j=1; j <= N; j++){
				cin >> idade;
				if(j==(N/2)+1){
					x= idade;
				}
		
		}
	cout << "Case " << i <<	": " << x << endl;	
	} 
	
	
	
}
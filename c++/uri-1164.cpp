#include <iostream>

using namespace std;

int main(){
	int casos = 0, n, soma = 0;
	
	cin >> casos;
	
	for(int i=0; i<casos; i++){
		soma = 0;
		cin>>n;
		
		for(int j=1;j<n;j++){
				
			if(n % j == 0 ){
				soma = soma+j;
			}
		}
		if(soma == n){
			cout << n << " eh perfeito" << endl;
		}else {
			cout << n << " nao eh perfeito" << endl;
		}
			
	}
	return 0;
}
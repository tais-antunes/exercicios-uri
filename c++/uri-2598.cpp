#include <iostream>

using namespace std;

int main (){
	int teste, km, tam_avenida, x;
	
	cin >> teste;
	
	for(int i = 1; i <= teste; i++){
		cin >> tam_avenida >> km;
		x = tam_avenida/km;
		
		if(tam_avenida % km == 0 ){
		cout << x << endl; 
		
		}else{
			x++;
			cout << x << endl;		
		}
			
	}

}
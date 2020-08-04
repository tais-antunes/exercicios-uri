#include <iostream>
#include <cstring>

using namespace std;

int main (){
	 char L[500];
	 
	 gets (L);
	 
	 if(strlen(L)<= 80){
	 
	 	cout << "YES" << endl;
	 	
	 
	 }else{
	 
	 	cout << "NO" << endl;
	}
	 
	 return 0;
}
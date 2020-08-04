#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	
	int jogos = 0, inter=0, gremio=0, empate=0;
	int golI=0, golG=0, escolha = 1;
	
	while(escolha==1){	
		cin >> golI >> golG;
		jogos++;
		cout << "Novo grenal (1-sim 2-nao)" << endl;
		cin >> escolha;
	
		if(golI > golG){
			inter++;
		}
		if(golG > golI){
			gremio++;
		}
		if(golG == golI){
			empate++;
		}
		if(escolha == 2)
			break;
		
 }
	if(inter > gremio){
		cout << jogos << " grenais\n" << "Inter:" << inter << "\nGremio:" << gremio << "\nEmpates:" << empate <<"\nInter venceu mais" << endl;	
	}else{
		cout << jogos << " grenais\n" << "Inter:" << inter << "\nGremio:" << gremio << "\nEmpates:" << empate <<"\nGremio venceu mais" << endl;	
	}
	
	system ("pause");
	return 0;
}
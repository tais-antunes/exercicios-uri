#include <iostream>
#include <stdio.h>

using namespace std;

int main (){
string animal1, animal2, animal3;

    cin >> animal1 >> animal2 >> animal3;

    if(animal1 == "vertebrado" && animal2 == "ave" && animal3 == "carnivoro"){
              cout << "aguia\n";
                  
              }
    if(animal1 == "vertebrado" && animal2 == "ave" && animal3 == "onivoro"){
              cout << "pomba\n";
                  
              } 
              
    if(animal1 == "vertebrado" && animal2 == "mamifero" && animal3 == "onivoro"){
              cout << "homem\n";
                  
              }
              
    if(animal1 == "vertebrado" && animal2 == "mamifero" && animal3 == "herbivoro"){
              cout << "vaca\n";
                  
              }
    
    if(animal1 == "invertebrado" && animal2 == "inseto" && animal3 == "hematofago"){
              cout << "pulga\n";
                  
              }
              
    if(animal1 == "invertebrado" && animal2 == "inseto" && animal3 == "herbivoro"){
              cout << "lagarta\n";
                  
              }
    
    if(animal1 == "invertebrado" && animal2 == "anelideo" && animal3 == "hematofago"){
              cout << "sanguessuga\n";
                  
              }
              
      if(animal1 == "invertebrado" && animal2 == "anelideo" && animal3 == "onivoro"){
              cout << "minhoca\n";
                  
              }
              
      system ("pause");
      return 0;

}
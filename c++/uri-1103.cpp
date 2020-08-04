#include <iostream>

using namespace std;

int main (){

    int h1,h2,m1,m2,minutos;

    while(true){
    cin>>h1>>m1>>h2>>m2;

    if (h1==0&&h2==0&&m1==0&&m2==0){
              break;

    }if (h1<h2 && (m1==m2)){
              minutos = (h2-h1)*60;

    }if (h1<h2 && (m1>m2)){
              minutos = (h2-h1)*60 - m1 + m2;

    }if (h1<h2 && (m1<m2)){
              minutos =  (h2 - h1) *60 + (m2-m1);

    }if (h1>h2){
               minutos = ((23 - h1)* 60 +(60 - m1))+(h2 * 60)+ m2;

    }if(h1==h2 && (m1<=m2)){
    minutos = m2-m1;

    }else if ((h1==h2) && (m1>m2)){
     minutos = ((23-h1)* 60 +(60-m1))+(h2*60)+ m2;
     
     }
     
    cout << minutos << endl;


    }
    system ("pause");
    return 0;

}
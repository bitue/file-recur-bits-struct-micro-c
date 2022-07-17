#include<bits/stdc++.h>
using namespace std ;


int main (){

  int a , b ;

  scanf("%d %d", &a, &b);


  if(a==1 ) {
    a =15 ;
  }
  if(b ==1 ) {
    b =15 ;
  }

  if(a ==b) {
    cout<<"Draw"<<endl;
  }
  else if (a >b ) {
     cout<<"Alice"<<endl;

  }
  else {
    cout<<"Bob"<<endl;
  }


}

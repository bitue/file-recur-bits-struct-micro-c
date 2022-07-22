#include<bits/stdc++.h>
using namespace std ;


int main (){

   long long int  x , y , k ;

    cin>>x>>y >>k ;


    if(x% k ==0) {
      long long  int res = y/k -x/k +1 ;
        cout<<res ;
    }
    else {
      long long  int res = y/k -x/k ;
        cout<<res;
    }


}

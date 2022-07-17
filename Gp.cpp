#include<bits/stdc++.h>
using namespace std ;


int main (){

  long long  int x , y , k ;

    cin>>x>>y >>k ;

   long long int co =0 ;

    for(int i=x ; i<=y ; i++){
        //int temp = i ;
        if(i % k ==0) {
           co++;
        }
    }

    cout<<co;

}

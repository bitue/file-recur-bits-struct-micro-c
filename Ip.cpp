#include<bits/stdc++.h>

using namespace std ;


int main (){


    int n ;
    int co ;
    cin>>n;
    for(int i=0 ; i<n ; i++){
        int x1 , x2 ;
        cin>>x1 >>x2 ;
        if((x2 - x1 ) > 0){
            co= co + (x2 -x1) + 1 ;
        }


    }

    cout<<co;
}

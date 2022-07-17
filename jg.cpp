#include<bits/stdc++.h>

using namespace std ;

int main (){

    string s ;
    cin >>s ;
    bool flag =false ;
    int idx_a =0 ;
    int idx_z =0;

    for(int i=0 ; i<s.length(); i++){
        if(s[i]=='A'){
            if(!flag){
                idx_a = i;
                flag = true ;
            }
        }

        if(s[i]=='Z'){
            idx_z =i ;
        }

    }

    int res = idx_z - idx_a;
    res++;
    cout<<res;


}

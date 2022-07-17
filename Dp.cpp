#include<bits/stdc++.h>
using namespace std ;

int main (){

    string s ;
    cin>>s ;
    int l = s.length();

    int co =0 ;
    bool flag = false ;

    for(int i=0 ; i<l ; i++){
        if(s[i] =='A'){
            flag =true;

        }
        if(flag && s[i] !='Z'){
            co++;

        }

        if(s[i]=='Z'){
            flag = false ;
            if(s[i+1]=='Z'){
                co++;

            }
            break;
        }
    }

    cout<<co+1<<endl;




}

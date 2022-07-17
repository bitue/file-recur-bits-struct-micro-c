#include<bits/stdc++.h>

using namespace std ;

int main (){

    string s ;
    int l ;
    cin>>l;
    cin >>s ;

    int i =0 ;
    int co =0 ;
    int m =0;

    while(s[i] !='\0'){
        if(s[i]=='I'){
            co++;
            m = max(co, m);
        }
        if(s[i]=='D'){
            co--;
            m = max(co, m);
        }
        i++;
    }

    cout<<m<<endl;


}

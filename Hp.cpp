#include<bits/stdc++.h>

using namespace std ;

int main (){

    string s ;
    cin>>s ;
    int arr [26]={0};

    int i =0 ;

    while(s[i] !='\0') {

         int ch = s[i] - 'a';
        arr[ch] ++ ;

        i++;

    }

    for(int i=0 ; i<26 ; i++){
        if(arr[i] % 2 !=0) {
            cout<<"No";
            return 0;
        }
    }
    cout<<"Yes" ;





}

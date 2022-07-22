#include<bits/stdc++.h>
using namespace std ;


int main (){

   long long int arr[3];
    for(int i =0 ; i<3 ; i++){

        cin>>arr[i];
    }

    sort(arr, arr+3);

    if(arr[2]-arr[1] > arr[0]) {
        cout<<-1;
        return 0;
    }
    else {
        cout<<arr[2] ;
        return 0;
    }



}

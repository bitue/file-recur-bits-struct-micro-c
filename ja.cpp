#include<bits/stdc++.h>
using namespace std ;

/*
int swap_fun(char * a, char *b, int n) {

    for(int i=0 ; i<n ; i++){
        if(a[i] > b[i]) {
            return 1;
        }
        else if(a[i] < b[i]){
            return -1

        }

    }



}

*/

int main (){

    int n , l ;
    cin>>n>>l;
    string arr[n];
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }

    for(int i=0 ; i<l-1 ; i++){
        for(int j=i+1 ; j<l ; j++){

            if(arr[i].compare(arr[j]) >0){
                // swap fun needs to be implemented

                swap(arr[i], arr[j]);


            }
        }
    }

    for(int i=0 ; i<n ; i++){
        cout<<arr[i];
    }



}

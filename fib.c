#include<stdio.h>

int sum (int n) {

    int w = 0 ;

    if (n==1) return n ;

    w = n + sum(n-1);
    return w ;


}

int main (){

    int x = sum(5);
    printf("%d", x);


}

#include<stdio.h>


int fun (int n ) {
    static int s =0 ;
    if (n==1) {
        return  n;
    }

   s =   fun(n-1) +n ;

  return s;


}

int main (){


    int x ;
    scanf("%d", &x);

    printf(" sum is %d", fun(x));




}

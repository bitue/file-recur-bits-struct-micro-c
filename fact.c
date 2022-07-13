#include<stdio.h>

int co =0 ;

int fact (int n){



    if(n==0 ) {
        return 1;
    }

  //fact(n-1);

  int a = fact(n-1);

  co ++ ;

  return n * a;

}

int main (){

    int n ;
    scanf("%d", &n);

    printf("%d of factorial is %d \n", n , fact(n));
    printf("%d calls \n", co);




}

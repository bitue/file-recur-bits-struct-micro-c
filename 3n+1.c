#include<stdio.h>


void fun (int n ) {
    static int co=0 ;

    if(n==1) {
        co++;
        printf("\n total recursive %d\n", co);

        return ;
    }

    if(n%2 ==1) {
        co++;
        n = 3*n +1 ;
        printf("odd so 3n+1 then =>%d \n",n);
        fun(n);
        return ;
    }
    else if(n% 2 ==0) {
        co++;
        n =n/2;
        printf(" even so n/2 then =>%d \n", n);
        fun(n);

        return ;
    }




}

int main (){

    int n ;

    scanf("%d", &n);
    for(int i=1 ; i<=n ; i++) {
        printf("%d th num of contigious is : \n \n ", i);
        fun(i);
        printf("\n.........................................\n");

    }




}

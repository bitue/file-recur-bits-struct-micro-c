#include<stdio.h>


void recurr() {

    static int co =1 ;

    if(co >5 ) return ;


    printf("Count %d \n", co);
    co++;
    recurr();


}

int main (){

    recurr();
    return 0;


}

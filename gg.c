#include<stdio.h>


int x ;
static int y ;

void fun (){


    x++;
    y++;


}
int main (){

    fun();
    fun();

    printf("x = %d\n", x);
    printf("y = %d\n", y);

}

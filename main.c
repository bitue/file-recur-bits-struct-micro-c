#include<stdio.h>

void recurr (int co){
     static int c =0 ;
    if(co==5) {
        return ;
    }

    char *s = "hurrey , i am learning recursion !!";
    c++;
    printf("%s %d\n", s, c);

   recurr(co);
   co++;



   c++;
   printf("%d after return from \n", co);
   printf("fun call %d\n", c);
   return ;



}


int main (){

    recurr(0);
    return 0;






}

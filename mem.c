#include<stdio.h>

int main (){
    char c = 'A';
    char *ptr_c ;
    char **ptr_cp ;

    ptr_c = &c;
    ptr_cp = &ptr_c;
    **ptr_cp ='B';

    printf("%c\n", c);
    printf("%c\n", *ptr_c);
    printf("%c\n", **ptr_cp);


}

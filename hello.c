#include<stdio.h>
#include<String.h>

int main()
{
    char str[] = "There are many variations of passages of Lorem Ipsum available, but the majority have suffered alteration in some form, by injected humour, or randomised words which don't look even slightly believable.";
    int n = 20;

    int co = 0;
    int len = sizeof(str)/sizeof(char);

    while(co<len){
        co = co+n-1;
        if(str[co]!=" "){

            while(str[co]!=" "){
                co--;
            }
            printf("%d\n",co);

        }
    }



    return 0;
}

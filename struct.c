#include<stdio.h>

struct Student {

    char name [100];
    int roll ;


};

int main (){

    struct Student bitue ;
    bitue.name ={'b', 'i'};
    bitue.roll =9 ;

    printf("%s", bitue.name);

}

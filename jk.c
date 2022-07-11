#include<stdio.h>

int main (){

    FILE *fp_r ;

    int return_value = remove("inn.txt");

    if(return_value !=0){
        printf("ERROR");
        return 0;
    }

    printf("success");


    return_value = remove("inn.txt");

    if(return_value !=0){
        printf("ERROR");
        return 0;
    }

    printf("success");




}



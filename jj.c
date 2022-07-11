#include<stdio.h>
#include<stdlib.h>

int main (){

    FILE *fp_in ;

  //  fp_in = fopen("baba.jpg", "rb");
   fp_in =  fopen("baba.jpg", "rb");
    if(fp_in ==NULL){
        printf("ERROR");
        return 0;
    }

    char ch ;

    fseek(fp_in, 0, SEEK_END);
    printf("file size in bytes %ld \n", ftell(fp_in));
    printf("file sixe in kbs %ld\n", ftell(fp_in)/ 1024);

    fclose(fp_in);

    return 0;


}


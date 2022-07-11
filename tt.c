#include<stdio.h>

#include<stdlib.h>

int main (){

    FILE *fp_in , *fp_out ;


    fp_in =  fopen("inn.txt", "r");

    if(fp_in == NULL){
        perror("went wrong");
        return EXIT_FAILURE;
    }

    char ch ;




    fseek(fp_in, 3, SEEK_CUR); //
    ch = fgetc(fp_in);
    printf("%c",  ch);

    fseek(fp_in, 3, SEEK_CUR);
    ch =fgetc(fp_in);
    printf("%c", ch);

     fseek(fp_in, 4, SEEK_SET);
    ch =fgetc(fp_in);
    printf("%c", ch);



    fclose(fp_in);
    return 0;




}

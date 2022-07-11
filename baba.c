#include<stdio.h>

#include<stdlib.h>

int main (){

    FILE *fp_in , *fp_out ;

    char input_img []="baba.jpg";
    char output_img []="babababa.jpg" ;

    fp_in = fopen(input_img, "rb");


    if(fp_in == NULL){
       perror("Something went wrong");
       return EXIT_FAILURE ;

    }

    int ch ;
    fp_out = fopen(output_img, "wb");


    while(1){
        ch = fgetc(fp_in);
        if(ch == EOF){
            break;
        }

        fputc(ch, fp_out);

    }

    fclose(fp_in);
    fclose(fp_out);


}

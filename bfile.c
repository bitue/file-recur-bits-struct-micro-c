#include<stdio.h>
#include<stdlib.h>

int main (){

    FILE *fp_in , *fp_out ;

    char input_file_name []= "fb.jpg";
    char output_file_name[]= "fbb.jpg";

    int ch ;

   fp_in =  fopen(input_file_name, "rb");
   if(fp_in ==NULL){
        perror("FILE OPENING FAILED");
        return EXIT_FAILURE ;

   }
   fp_out= fopen(output_file_name, "wb");

   while(1){
        ch = fgetc(fp_in);
        printf("%c ", ch);
        if(ch == EOF) {
            break;
        }
        fputc(ch , fp_out);
   }

   fclose(fp_in);
   fclose(fp_out);

   return 0;




}

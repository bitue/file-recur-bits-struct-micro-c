#include<stdio.h>

int main (){

    FILE *fp ;
    char filename []= "my_file.txt";
    fp= fopen(filename, "w"); // return a file  pointer
    fprintf(fp, "this is the file created by programme by c \n"); // operation fprintf
    //fprintf(fp, 121);

    fclose(fp);

    // again try  to write
    fopen(filename, "a");
    fprintf(fp , "secondLine here \n");
    fclose(fp);
    return 0;

}

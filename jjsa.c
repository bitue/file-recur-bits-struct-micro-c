#include<stdio.h>

int main (){

    FILE *fin , *fout ;

    char in_file_name [100] ="input2.txt";
    char out_file_name [100]= "output2.txt";

    fin = fopen(in_file_name, "r");

    char Line [100];

    //fgets(Line, 80 , fin);

    printf("Line %s \n", Line);
    int n2 , sum1;
    char n1[100];
    //fscanf(fin, "%d %d", &n1, &n2);
    char ch;
    while(1){
        //sscanf(Line , "%s %d", &n1, &n2);
        //printf("n1 is %s and n2 is %d\n", n1 , n2 );
        if(fin == EOF){
            fclose(fout);
            break;
        }

        ch = fgetc(fin);
        printf("%c",ch);


    }









}

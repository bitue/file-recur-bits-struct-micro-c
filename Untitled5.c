#include<stdio.h>

int main (){

    FILE *fin , *fout ;

    char in_file_name [100] ="input.txt";
    char out_file_name [100]= "output.txt";

    fin = fopen(in_file_name, "r");

    char Line [100];

    fgets(Line, 80 , fin);

    printf("Line %s \n", Line);
    int n1 , n2 , sum1;
    //fscanf(fin, "%d %d", &n1, &n2);





    sscanf(Line , "%d %d", &n1, &n2);

    sum1 =n1 + n2 ;

    printf("%d", sum1);

    fclose(fin);

    fout=fopen(out_file_name, "w");

    fprintf(fout, "n1 is %d and n2 is %d \n sum is %d", n1 , n2 , sum1);
    fclose(fout);






}

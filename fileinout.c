#include<stdio.h>

int main (){

    FILE *fp_in , *fp_out ;

    char input_file []="in.txt";
    char output_file[]="out.txt";

    int n1 , n2 , sum ;
    // write two nums in.txt ;
    fp_in = fopen(input_file, "w");
    scanf("%d %d", &n1 , &n2);
    fprintf(fp_in, "%d ", n1);
    fprintf(fp_in, "%d", n2);
    fclose(fp_in);

    // read file by fp_in

    fp_in = fopen(input_file, "r");
    fscanf(fp_in,"%d", &n1);
    fscanf(fp_in, "%d", &n2);
    fclose(fp_in);

    //sum operation here
    sum = n1 +n2 ;
    printf("%d", sum);

    // write the sum to the out.txt

    fp_out = fopen(output_file, "w");
    fprintf(fp_out, "%d", sum);
    fclose(fp_out);







}

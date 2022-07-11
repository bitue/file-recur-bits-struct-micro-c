#include<stdio.h>


 struct Student {

        int roll ;
        int math ;
        int bangla ;


    };



int main (){

    FILE *fp_b , *fp_m , *fp_r ;



    if(fp_m ==NULL){
        printf("Something went wrong !!");
        return 0;
    }

    // make a structure of student



    struct Student arr[10];

    // read the math.txt file read

    fp_m=fopen("math.txt", "r");
    for(int i=0 ; i<10 ; i++){
        fscanf(fp_m,"%d", &arr[i].roll);
        fscanf(fp_m,"%d", &arr[i].math);


    }

    fclose(fp_m);

    // read the bangla file

    fp_b = fopen("bangla.txt", "r");

    for(int i=0 ; i<10 ; i++){
        fscanf(fp_b,"%d", &arr[i].roll);
        fscanf(fp_b,"%d", &arr[i].bangla);

    }
    fclose(fp_b);


    //for(int i=0 ; i<10 ; i++){
     //   printf("roll :%d math %d bangle %d \n", arr[i].roll, arr[i].math, arr[i].bangla);
    // }

    fp_r =fopen("result.txt", "w");
    for(int i=0 ; i<10 ; i++){
        fprintf(fp_r," roll : %d avarage marks %d \n", arr[i].roll , (arr[i].math + arr[i].bangla) /2) ;

    }
    fclose(fp_r);

    return 0;









}

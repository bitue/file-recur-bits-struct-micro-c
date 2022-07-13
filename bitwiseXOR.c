#include<stdio.h>
#include<string.h>


void int_to_bin (unsigned int x , char sx[], int l ) {

    // make the string 0 all the limit ;
    for(int i=0 ; i<l ; i++){

        sx[i]='0';
    }

    printf("// check \n ");
    int i =0 ;
    while(x >0){
        int bit = x%2 ;
        char bit_c = bit + '0';
        sx[l-1-i]= bit_c;

        //printf("%c\n", bit_c);
        x = x/2 ;
        i++;

    }
    printf("\n .....................\n ");

    for(int i=0 ; i<l ; i++){
        if(i %8 ==0) {
            printf(" ");
        }
        printf("%c", sx[i]);
    }



}

int main (){

    unsigned int x ;
    unsigned int y ;
    scanf("%d", &x);
    scanf("%d", &y);
    int bit_limit ;
    scanf("%d", &bit_limit);
    char sx [bit_limit];
    char sy [bit_limit];
    char ands[bit_limit];

    int_to_bin(x, sx, bit_limit);
    int_to_bin(y, sy, bit_limit);

    int sand = x^y ;
    int_to_bin(sand, ands, bit_limit);
    printf(" and value : %d\n", sand);





}



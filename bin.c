
#include<math.h>
#include<stdio.h>
#include<string.h>

void bin_to_int( char s [], int len ) {
    int co =0;
    for(int i=0 ; i<len ; i++){
        int bit = s[i]- '0';
        co += bit*pow(2, len-i-1);

    }

    printf("%d", co);




}

int main (){


    char in[100];
    scanf("%s", in);
    int len = strlen(in);

    bin_to_int(in, len);





}

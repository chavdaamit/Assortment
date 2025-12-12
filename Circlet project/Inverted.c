#include <stdio.h>


int main(){


    for(int  i=5; i>=1; i-- ){

        for(int j=5; j>i;j--){

            printf(" ");
        }

        int value=1;

        for(int k=1; k<=i;k++){
            printf("%d",value);
            value=1-value;
        }

        printf("\n");



    }


    return 0;
}
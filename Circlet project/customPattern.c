#include <stdio.h>


int main(){


    int n=5;


    for(int i=1;i<=n;i++){

        for(int  j=1;j<=i;j++){

            printf("%d ",j);
        }


        int spaces=(n-i)*4;
        for(int s=1;s<=spaces;s++){
            printf(" ");
        }

        for(int j=i; j>=1;j--){

            printf("%d ",j);
        }



        printf("\n");

    }

    return 0;
}
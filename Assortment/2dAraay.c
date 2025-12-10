


#include <stdio.h>

int main() {

    int a[3][3];


    printf("Enter 9 values:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int largest = a[0][0];


    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(a[i][j] > largest) {
                largest = a[i][j];
            }
        }
    }

    printf("Largest = %d", largest);

    return 0;
}

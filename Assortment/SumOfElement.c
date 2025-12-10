#include <stdio.h>

int main() {

    int a[3][3];

   
    printf("Enter 9 values:\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &a[i][j]);
        }
    }

  
    int r;
    printf("Enter row number: ");
    scanf("%d", &r);

    int rowSum = 0;
    printf("values of row %d: ", r);
    for(int j = 0; j < 3; j++){
        printf("%d ", a[r][j]);
        rowSum += a[r][j];
    }
    printf("\nThe sum of row %d: %d\n", r, rowSum);

   
    int c;
    printf("Enter column number: ");
    scanf("%d", &c);

    int colSum = 0;
    printf("values of column %d: ", c);
    for(int i = 0; i < 3; i++){
        printf("%d ", a[i][c]);
        colSum += a[i][c];
    }
    printf("\nThe sum of column %d: %d\n", c, colSum);

    return 0;
}

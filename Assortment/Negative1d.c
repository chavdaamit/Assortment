

#include <stdio.h>

int main() {

    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d values:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Negative numbers: ");

    for(int i = 0; i < n; i++) {
        if(a[i] < 0) {
            printf("%d ", a[i]);
        }
    }

    return 0;
}

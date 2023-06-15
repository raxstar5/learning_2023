#include<stdio.h>

int main() {
    int x, y;
    printf("Enter the number 1: \n");
    scanf("%d", &x);
    printf("Enter the number 2: \n");
    scanf("%d", &y);

    if (x > y) {
        printf("%d is greater than %d", x, y);
    } else if (x < y) {
        printf("%d is greater than %d", y, x);
    } else {
        printf("%d and %d are equal", x, y);
    }

    return 0;
}
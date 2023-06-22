#include<stdio.h>

void swapper(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a = 25, b = 35;
    printf("a = %d and b = %d\n", a, b);
    swapper(&a,&b);
    printf("a = %d and b = %d", a, b);
}
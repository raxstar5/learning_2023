#include<stdio.h>

int main(){
    int arr[] = {10,20,30,40,50};
    int sum = 0;

    for(int i = 0; i < 5; i+=2){
        sum += arr[i];
    }
    printf("The sum of alternate numbers are: %d", sum);
}
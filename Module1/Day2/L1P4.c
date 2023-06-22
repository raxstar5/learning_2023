#include<stdio.h>

int helper(int val){

    int count = 0;
    int temp = val;
    while(temp){
        count += temp & 1;
        temp >>= 1;
    }
    return count;
}

int countBits(int arr[], int size){
    int count = 0;

    for(int i = 0; i < size; i++){
        count += helper(arr[i]);
    }
    return count;
}
int main(){
    int arr[] = {0x1, 0xF4, 0x10001};
    int size = sizeof(arr)/sizeof(arr[0]);
    int val = countBits(arr, size);

    printf("TOtal set bits = %d", val);
}
#include<stdio.h>
#include<stdint.h>

void printBits(uint32_t num){
    uint32_t mask = 1U << 31;

    for(int i = 0; i < 32; i++){
        if(num & mask){
            printf("1");
        }
        else{
            printf("0");
        }
        num <<= 1;
    }
    printf("\n");
}

int main(){
    uint32_t num;

    printf("Enter 32 bit integer number: ");
    scanf("%u", &num);

    printf("Bits : ");
    printBits(num);
    return 0;
}
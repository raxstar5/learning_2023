#include<stdio.h>

int bit_operations(int num, int oper_type){

    int val = num;
    switch(oper_type){
        case 1:
             val |= (1 << 0);
             break;

        case 2:
            val &= ~(1 << 31);
            break;
        
        case 3:
            val ^= (1 << 15);
            break;
        default:
            printf("Invalid operation type");
            break;
    }
    return val;
}

int main(){
    int num, oper_type;
    printf("Enter the number: ");
    scanf("%d", &num);

    printf("Enter the operator type of either 1, 2 or 3: ");
    scanf("%d", &oper_type);

    int result = bit_operations(num, oper_type);
    printf("Result : %d",result);

    return 0;
}
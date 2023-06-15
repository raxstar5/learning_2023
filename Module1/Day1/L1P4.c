#include<stdio.h>

int main(){
    int operand1, operand2;
    char operator;

    printf("Enter Number1: ");
    scanf("%d",&operand1);
    getchar();

    printf("Enter the operator: ");
    operator = getchar();

    printf("Enter Number2: ");
    scanf("%d",&operand2);

    if(operator == '+'){
        printf("The sum of %d and %d is %d",operand1, operand2, operand1+operand2);
    }
    else if(operator == '-'){
        printf("The difference of %d and %d is %d",operand1, operand2, operand1-operand2);
    }
    else if(operator == '*'){
        printf("The multiplication of %d and %d is %d",operand1, operand2, operand1*operand2);
    }
    else if(operator == '/'){
        printf("the quotient on dividing %d from %d is %d",operand1, operand2, operand1/operand2);
    }
    else if(operator == '%'){
        printf("the remainder on dividing %d from %d is %d",operand1, operand2, operand1%operand2);
    }   
    else{
        printf("Invalid operator");
    }
}
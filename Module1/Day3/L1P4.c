#include <stdio.h>

int removeDigit(int num, int pos) {
    int power= 1;
    for (int i = 0; i < pos; i++) {
        power *= 10;
    }
    
    int left = num / (power * 10);
    int right = num % power;
    
    return left * power + right;
}

int findLargestNumber(int num) {
    int largestNum = -1;
    
    for (int i = 0; i < 4; i++) {
        int removedNum = removeDigit(num, i);
        if (removedNum > largestNum) {
            largestNum = removedNum;
        }
    }
    
    return largestNum;
}

int main() {
    int num;
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);
    
    int largestNumber = findLargestNumber(num);
    printf("Largest number after deleting a single digit: %d\n", largestNumber);
    
    return 0;
}

#include<stdio.h>

int func1(int num){
    int count = 0, great = -1;
    while(num){
        int x = num % 10;
        if(x > great){
            great = x;
        }
        num = num/10;
        count++;
    }
    if(count == 1){
        return -1;
    }
    else{
        return great;
    }
}

int func2(int num){
    int count = 0, small = num % 10;
    while(num){
        int x = num % 10;
        if(x < small){
            small = x;
        }
        num = num / 10;
        count++;
    }
    return small;
}

int main(){
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        int temp;
        scanf("%d", &temp);
        int largedig = func1(temp);
        if(largedig == -1){
            printf("Not Valid");
            continue;
        }
        int smalldig = func2(temp);
        printf("The largest digit is %d and smallest digit is %d \n",largedig, smalldig);
    }
}
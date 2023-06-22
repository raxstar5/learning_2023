#include<stdio.h>

int func1(int n, int i){
    for(int j = 0; j < (n-i); j++){
            printf("%d",j+1);
        }
}

int func2(int n, int i){
    for(int j = 0; j < i*2; j++){
        printf(" ");
    }
}

int func3(int n, int i){
    for(int j = 0; j < (n-i); j++){
        printf("%d", (n-i-j));
    }
}

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        func1(n,i);
        func2(n,i);
        func3(n,i);     
        printf("\n");
    }
}
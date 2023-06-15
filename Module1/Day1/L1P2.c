#include<stdio.h>

int main(){
    int marks;
    printf("Enter the marks: \n");
    scanf("%d",&marks);

    if(marks >= 90 && marks <= 100){
        printf("Grade A");
    }
    else if(marks >= 75 && marks <= 89){
        printf("Grade B");
    }
    else if(marks >= 60 && marks <= 74){
        printf("Grade C");
    }
    else if(marks >= 50 && marks <= 59){
        printf("Grade D");
    }
    else if(marks > 100 || marks < 0){
        printf("Invalid marks");
    }
    else{
        printf("Grade F");
    }
}

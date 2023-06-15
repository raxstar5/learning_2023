#include<stdio.h>
int main(){
    int roll_no, physics,maths,chemistry, total;
    float percentage;
    char name[100];

    printf("Enter the name of the student: \n");
    gets(name);
    printf("Enter the roll number: \n");
    scanf("%d",&roll_no);
    printf("Enter the physics marks:\n");
    scanf("%d",&physics);
    printf("Enter the chemistry marks:\n");
    scanf("%d",&chemistry);
    printf("Enter the maths marks:\n");
    scanf("%d",&maths);

    total = physics + maths+ chemistry;
    percentage = (total/300.0)*100;

    printf("The total marks is : %d", total);
    printf("The student %s with roll number %d has secured %d marks in physics and %d marks in chemistry while %d marks in maths. The total marks is %d with the percentage as %f", name,roll_no,physics,chemistry,maths,total,percentage);
}
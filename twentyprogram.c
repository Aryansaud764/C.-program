// grading output program out of 100

#include <stdio.h>
int main(){

    int num;

    printf(" entre your marks out of \n");
    scanf("%d",&num);

    if ( num>90 && num<=100){
        printf(" your grade is A+\n");
    }
    else if (num>80){
        printf("your grade is A\n");
    }
    else if (num>70){
        printf("your grade is B\n");
    }
    else if (num>60){
        printf("your grade is C\n");
    }
    else if (num>50){
        printf("your grade is D\n");
    }
    else if (num>40){
        printf("your grade is E\n");
    }
    else if (num>=0 && num<=40){
        printf(" your grade is F\n");
    }
    else {
        printf(" please enter the valid number\n");
    }
        return 0;
}
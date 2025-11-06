
// using if and else statements
#include <stdio.h>
int main(){

    int age ;

    printf("tell me your age \n");
    scanf("%d",&age);

    if(age==18){
        printf(" you are recentaly eligible to drive\n");

    }
    else if(age>1819 && age<60){
        printf(" you can drive\n");
    }
    else if (age<18 || age>=60){
        printf("you are not eligible to drive\n");
    }
    else{
        printf(" invalid age\n");
    }
    return 0;
}
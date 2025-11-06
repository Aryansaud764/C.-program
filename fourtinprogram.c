// in this program we goonna find enter number by user is positive or negative 

#include <stdio.h>
int main(){
    int num;

    printf("ehter the number\n");
    scanf("%d",&num);

    if (num<0){
        printf(" the enter number is negative\n");
    }
    else if (num>0){
        printf(" the enter number by user is positive\n");
    }
    else if (num==0){
        printf(" the enter number is zero\n");
    }
    else {
        printf(" you entered an invalid number\n");
    }
    return 0;
}
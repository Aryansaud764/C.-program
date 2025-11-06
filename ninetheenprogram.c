
// in this program we gonna find enter number or value by user is odd or even 
#include <stdio.h>
int main (){
    int num;

    printf("fill the value\n");
    scanf("%d",&num);

    if (num % 2 == 0){
        printf("the number which enter by you is even\n");
    }
    else if (num == 0){
        printf(" the enter number is zero\n");
    }
    else {
        printf(" the number is odd\n");
    }
    return 0;
}
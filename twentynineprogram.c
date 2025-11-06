
//in this program we gonna find the greatest among 3 number which enter by the user
#include <stdio.h>
int main(){
    int num1,num2,num3;

    printf("enter the number \n");
    scanf("%d %d %d",&num1,&num2,&num3);

    if (num1>num2 && num1>num3){
        printf("%d is the greatest value among them\n",num1);
    }
    else if (num2>num1 && num2>num3){
        printf("the greatest value among them is %d\n",num2);
    }
    else if( num3>num1 && num3>num2){
        printf("%d is the greatest value among them\n",num3);
    }

    else if(num1==num2 && num1==num3 && num2==num3){
        printf("%d == %d == %d all the numbers are equal\n",num1,num2,num3);
    }
    else {
        printf("please enter the valid number\n");
    }
    return 0;
}
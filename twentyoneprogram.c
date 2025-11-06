//in this program we are going to find greatest number out of three values which given by the user


#include <stdio.h>
int main (){
    int num1,num2,num3;

    printf("enter the value of number 1 and number 2 and last number 3\n");
    scanf("%d %d %d",&num1,&num2,&num3);

    if ( num1>num2 && num1>num3){
        printf("the grteast value is %d\n",num1);
    }
    else if(num2>num1 && num2>num3){
        printf("the greatest value is %d\n",num2);
    }
    else{
        printf("the greatest value is %d\n",num3);
    }
    return 0;
}
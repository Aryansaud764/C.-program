
#include <stdio.h>
int main(){
    int num1,num2;
    char operator;
    float result;

    printf("enter the first number\n");
    scanf("%d",&num1);

    printf("enter the operators\n");
    scanf(" %c",&operator);

    printf("enter the second number\n");
    scanf("%d",&num2);


    switch(operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = (float)num1 / num2;
            break;
        case '%':
            result = num1 % num2;
            break;
        default:
            printf("Invalid operator\n");
            return 1;
    }

    printf("the result is %f\n",result);

    return 0;
    


}
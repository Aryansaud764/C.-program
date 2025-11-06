
//in this program
#include <stdio.h>
int main(){
    int simple;
    float decimal,sum;

    char operator;
    
    printf("enter integer or simple value\n ");
    scanf("%d",&simple);

    // for adding subtraccting multiplication and division 
    printf("enter the operators\n");
    scanf(" %c",&operator);

    printf("enter the decimal value\n");
    scanf("%f",&decimal);

    if(operator=='+'){ 
        sum = simple + decimal;
    }
    else if (operator == '-'){
        sum = simple - decimal;

    }
    else if (operator == '*'){
        sum = simple * decimal;
    }
    else if (operator == '/'){
        sum = simple / decimal;
    }

    printf(" your value is = %d %c %.2f = %f ", simple, operator, decimal, sum);

    printf("\n");

    return 0;
}

#include<stdio.h>
void sum(float a,int b);

int main(){

    int b;
    float a;
    printf("enter the value of floting value of a\n");
    scanf("%f",&a);
    
    printf("enter the value of integer value of b\n");
    scanf("%d",&b);

    sum(a,b);

    return 0;
    
}

void sum(float a,int b){

    float sum;
    sum = a + b;
    
    printf("the sum of those two value is %f\n",sum);
    
}
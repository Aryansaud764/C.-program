#include <stdio.h>
int main(){
    int i,num,fact =1;

    printf("enter a number: ");
    scanf("%d",&num); 

    for(i=num; i>=1; i--){
        fact = fact*i;
    }
    printf("factorial of %d is %d\n",num,fact); 
}
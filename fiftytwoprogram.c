#include <stdio.h>
int main(){
    int i,num,sum = 0;

    printf("enter teh number \n");
    scanf("%d",&num);

    for(i=1 ; i<=num ; i++){
        sum = i + sum;
    }
    
    printf("The sum is: %d\n", sum);
    
    return 0;
}
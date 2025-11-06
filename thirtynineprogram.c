#include <stdio.h>
int main(){
    int i,num,fact = 1;

    printf("enter the which you want to print the table\n");
    scanf("%d",&num);

    for(i=num;i>0;i--){
        fact = fact * i;

        printf("%d\n", fact);
       
    }
    return 0;
}
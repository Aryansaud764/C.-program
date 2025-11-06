#include <stdio.h>
int main(){
    int i ,num;

    printf("enter the value of number\n");
    scanf("%d",&num);

    i = num;


    do{
        printf("%d\n",i);
        i--;
    }

    while(i >= 0);


    return 0;
}
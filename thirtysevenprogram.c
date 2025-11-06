#include <stdio.h>
int main(){
    int i,num;

    printf("enter the which you want to print the table\n");
    scanf("%d",&num);

    for(i=1;i<=10;i++){
        printf("%d * %d = %d\n",num,i,num*i);
    }
    return 0;
}
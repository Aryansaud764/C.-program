
#include <stdio.h>
int main(){
    int i,num;

    printf("enter teh number you want to print in reverse order\n");
    scanf("%d",&num);

    for( i=num;i>=1;i--){
        printf("%d\n",i);
    }
    return 0;
}
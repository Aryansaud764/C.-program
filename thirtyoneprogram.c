
//finding odd and even with the help of loop
#include <stdio.h>
int main(){
    int i,num;

    printf("enter the number or point you want to find odd and even\n");
    scanf("%d",&num);

    for (i=1;i<=num;i++){
        if(i%2==0){
            printf("%d is even\n",i);
        }
        else{
            printf("%d is odd\n",i);
        }
        }
        return 0;
    }

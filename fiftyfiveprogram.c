#include <stdio.h>
int main(){
    int i = 1,n,sum=0;
     printf("enter a number: ");
        scanf("%d",&n);

        while(i<=n){
            sum = sum + i;
            i++;

        }
        printf("the sum is %d\n",sum);
        return 0;
    }
        


//finding odd with the help continue

#include <stdio.h>
int main(){
    int i,num;
    printf("enter the value after you want to print the odd value\n");
    scanf("%d",&num);
    printf("all the odd number from 1 to %d\n",num);

    for(i=1; i<=num; i++){
        if(i%2==0){
            continue;
            
            
        }

        printf("%d\n", i);
           
        }

    
    return 0;
}

#include<stdio.h>
int main(){
    int i;

    printf("all the odd value from one to 20\n");

    for(i=1; i<=20; i+=2){
        printf("the odd value is %d\n",i);
    }
    return 0;
}
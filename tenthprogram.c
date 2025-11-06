
// in this progam we  used conditional statement if and else 

#include <stdio.h>
int main(){
    int code;

    printf("tell me the code for passing the gate\n");
    scanf("%d",&code);
    
    if(code == 6237){
        printf(" your code is right you can now pass the gate\n");
    }

    else{
        printf("your code is not right you cannot pass the gate\n ");

    }
    return 0;
}
#include <stdio.h>
int main(){
    int i =5;

    do{
        printf("hello\n");
        i--;
        if(i == 2){
            break; // Exit the loop when i is 2
        }
    }
    while(i >= 1);
    
   
    return 0;

}

#include <stdio.h>
int main(){
int number;

printf("enter the number from 1 - 5 \n");
scanf("%d",&number);

switch (number){
    case 1:
     printf("you enter one\n");
     break;

    case 2:
    printf("you enter two\n");
    break;
    
    case 3:
    printf("you enter three\n");
    break;

    case 4:
    printf("you enter four\n");
    break;

    case 5:
    printf("you enter five\n");
    break;

    default:
    printf("you enter invalid value\n");
    break;
    // default case is used when the user enter invalid value
     }

   return 0;
}
#include <stdio.h>
int main(){
    int day;

    printf("enter the day from 1-7\n");
    scanf("%d",&day);

    switch(day){
        case 1:
        printf("you are in sunday\n");
        break;

        case 2:
        printf("today is monday\n");
        break;

        case 3:
        printf("today is tuesday\n");
        break;

        case 4:
        printf("today is wednesday\n");
        break;

        case 5:
        printf("today is thursday\n");
        break;

        case 6 :
        printf("today is friday\n");
        break;

        case 7:
        printf("today is saturday\n");
        break;
        
        default:
         printf("you enter invalid number\n");
         break;

    }
    return 0;
}
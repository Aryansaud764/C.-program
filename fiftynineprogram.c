//taking input until input == 1
#include <stdio.h>
int main(){
   int input;

   do{
    printf("enter the value\n");
    scanf("%d",&input);
   }
   
   while(input!=1);

   printf("You exited the loop.\n");

   return 0;

}

#include <stdio.h>
int main(){
   int temp;
     
   printf("enter the temperature in celsius\n");
   scanf("%d",&temp);

   if(temp < 0 ){
    printf(" the outer temperature is cold\n");
   }
   else if (temp>0 && temp<=20){
    printf(" the outer weather is not so cold and not so hot\n");
   }
   else if (temp>20){
    printf(" the outer weather is hot\n");
   }
   else {
    printf("the weather is normal\n");
   }

   return 0;
}
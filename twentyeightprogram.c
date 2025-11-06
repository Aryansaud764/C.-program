// this probram is base on units bill calculatioon

#include <stdio.h>
int main (){
    int units;
    float bill;

    printf("enter the units you consumed\n");
    scanf("%d",&units);

        if (units <=100){
            bill = units * 7.5;
        }

        else if (units <=200){
            bill = units*14.5;
        }

        else if (units <=300){
            bill = units*20.5;
        }
        else if (units <=400){
            bill = units*27.5;
        }
        else {
            bill = units*30.5;
        }
        

        printf("your bill is %.2f\n",bill);
        printf("your bill is %f\n",bill);
        printf("your bill is %e\n",bill);
        printf("your bill is %g\n",bill);

        return 0;
        
        
   

}
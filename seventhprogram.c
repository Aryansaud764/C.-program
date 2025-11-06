
// in this program we gonna finding the simple interest 

#include <stdio.h>
int main (){
    int p,t,r,simpleinterest;

    printf("enter the value of principal amount\n");
    scanf("%d",&p);

    printf("enter the value of time \n");
    scanf("%d",&t);

    printf("enter the value of rate\n");
    scanf("%d",&r);

    // formula for simple interest =p*t*r/100

    simpleinterest = p*t*r/100;

    printf("the value of simple interest is %d\n",simpleinterest);

    return 0;
}
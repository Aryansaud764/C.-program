
#include <stdio.h>
int main(){
    float pie = 3.14 ,radius,area;

    printf("enter the value of radius\n");
    scanf("%f",&radius);

    area = radius * radius * pie ;
    printf("the value of area ofcirclue is %.2f\n",area);
    printf("the value of area ofcirclue is %f\n",area);
    printf("the value of area ofcirclue is %e\n",area);
    printf("the value of area ofcirclue is %g\n",area);
 
    return 0;
}
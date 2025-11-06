//in this program we will calculate the area of square using the formula area = side * side
#include <stdio.h>
int main(){
     float side,area;

     printf("enter the value of one side of square\n");
     scanf("%f",&side);
     
     area = side * side;

     printf("the area of square is %f\n",area);
        printf("the area of square is %.2f\n",area);

        return 0;


}
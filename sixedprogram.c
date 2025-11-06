// in this program we find the area of rectangle 

#include <stdio.h>
int main (){
    int leanth;  
    int breath;
    int area;
    
    printf("enter the value of leangth\n");
    scanf("%d",&leanth);

    printf("enter the value of breath\n");
    scanf("%d",&breath);

    // for findind area the formula is area = leanth * breath

    area = leanth * breath;

    printf(" the area or value of rectangle is %d\n", area);

    return 0;

}
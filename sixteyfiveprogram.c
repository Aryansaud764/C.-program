#include <stdio.h>
void square(int first_side,int second_side );
void rectangle(int length, float breath);
void circle(float radius);

int main()
{
    int first_side;
    int second_side;
    square(first_side,second_side); 
    
    
    int length;
    float breath;
    rectangle(length,breath);
     
    float radius;
    circle(radius);

    return 0;
}

void square(int first_side,int second_side )
{
    
    int area;


    printf("enter the value of a\n");
    scanf("%d", &first_side);

    printf("enter the value of b\n");
    scanf("%d", &second_side);

    area = first_side * second_side;

    printf("the area os square is %d\n", area);
}
void rectangle(int length, float breath)
{

    
    float area;

    printf("enter the value of length\n");
    scanf("%d", &length);

    printf("enter the value of breath\n");
    scanf("%f", &breath);

    area = length * breath;

    printf("the area of rectangle is %f\n", area);
}

void circle(float radius)
{

   
    float pie = 3.14159;
    float area;

    printf("enter teh value of radius\n");
    scanf("%f", &radius);

    area = pie * radius * radius;

    printf("the area of circle is %f\n", area);
}

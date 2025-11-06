#include <stdio.h>
void all(void);

int main()
{

    all();
    

    return 0;
}

void all(void)
{

    int a,b,sum;

    printf("enter the value of a\n");
    scanf("%d", &a);

    printf("enetr teh value of b\n");
    scanf("%d", &b);

    sum = a + b;

    printf("the sum of two integer is %d\n", sum);
}
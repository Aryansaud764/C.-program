#include <stdio.h>
void table();

int main()
{

    table();

    return 0;
}

void table()
{

    int n;
    printf("enter teh number for that number table\n");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", n, i, n * i);
    }
}

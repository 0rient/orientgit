#include <stdio.h>

int min(int x, int y);
int main()
{
    /* code */
    int a1, a2, min_int;
    printf("Input first number:");
    scanf("%d", &a1);
    printf("Input second number:");
    scanf("%d", &a2);
    min_int = min(a1, a2);
    printf("The minimal number is: %d \n", min_int);
    return 0;
}
int min(int x, int y)
{
    if (x < y)
        return x;
    else
        return y;
}
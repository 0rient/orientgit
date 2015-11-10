#include <stdio.h>
#include "main.h"
#include "compute.h"
#include "input.h"

int main()
{
    double x, y;
    printf("This program get value of x and y, then show them power.\n");
    x = input(PROMPT1);
    y = input(PROMPT2);
    printf("x power y is: %6.3f\n", compute(x, y));
    return 0;
}
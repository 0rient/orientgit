#include <stdlib.h>
#include "stdio.h"

int main(int argc, char const *argv[])
{
    int i, j;
    srand( (int)time(0) );
    for(i = 0; i<10; i++)
    {
        j = rand();
        printf("%d ", j);
    }
    printf("\n");
    return 0;
}
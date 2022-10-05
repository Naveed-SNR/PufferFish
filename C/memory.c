#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *x = malloc(3 * sizeof(int));

    x[1] = 74;
    x[2] = 92;
    x[3] = 83;
}
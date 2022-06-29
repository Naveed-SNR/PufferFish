#include <stdio.h>

int main(void)
{
    // r = no. of rows, c = no. of columns, and s = no. of spaces before a '#' block
    int n, r, c, s;

    do
    {
        printf("Size: ");
        scanf("%d", &n);
    }
    while (n < 1 || n > 8);

    //for moving to the next line after a row is printed
    for (r = 0; r < n; r++)
    {
        //for printing spaces
        for (s = n; s > r; s--)
        {
            printf(" ");
        }

        //for printing '#' blocks
        for (c = 0; c <= r; c++)
        {
            printf("#");
        }

        printf("\n");
    }

    return 0;
}
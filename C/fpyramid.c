#include <stdio.h>
#include <conio.h>

int main(void)
{
    // r = no. of rows, c = no. of columns, and s = no. of spaces before a '#' block
    int n, r, c, s;

    //for prompting user to input a size until entered value is within the given range
        printf("Size: ");
        scanf("%d", &n);

    //for moving to the next line after a row is printed
    for (r = 0; r < n; r++)
    {   
        
        //for printing spaces
        for (s = n; s > c; s--)
        {  
            printf(" ");
        }
        //for printing '#' blocks
        for (c = 0; c < r; c++)
        {
            printf("#");
        }
        //for printing '#' blocks
        for (c = 0; c <= r; c++)
        {
            printf("#");
        }
        
        printf("\n");
    }
    _getch();
    return 0;
}

                                
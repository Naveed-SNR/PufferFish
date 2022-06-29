#include <stdio.h>
#include <conio.h>

int main (void)
{
    int n, r, c, s;

    do
    {
        printf("Size: ");
        scanf("%d", &n);
    }
    while (n<1);
      
    for (r = 0; r < n; r++)
    {
        for (c = 0; c < r; c++)
        {   
            for (s = 0; s < n; s--)
            {
                printf ("\0");
            }
            printf ("#");
        }
    printf ("\n");
    }
}
  

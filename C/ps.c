#include <stdio.h>

int main (void)
{
    int n, a = 2, i, c, x;
    
    printf("Enter number of prime numbers to be printed: ");
    scanf("%d", &n);

    for (x = 0; x <= n; x++)
    {
        for (i = 2; i <= a / 2; i++)
        {
            if (a % i == 0)
            {
                c++;
            }
            if (c == 0)
            {
                printf("%d\n", a);
            }
            a++;
        }
    }
}
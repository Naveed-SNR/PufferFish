#include <stdio.h>

int main(void)
{
    int num, i, n, c = 0;

    printf ("No. of prime numbers to be printed: ");
    scanf ("%d ", &num);

    for (n = 2; n < num; n++)
    {
        for (i = 2; i < n / 2; i++)
        {
            if (n % i == 0)
            {
                c++;
            }
            if(c == 0)
            {  
                    printf("%d", n);
                    n++;
            }
            c = 0;
        }
    }
}
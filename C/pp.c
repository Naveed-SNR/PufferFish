#include <stdio.h>
#include <conio.h>

int main(void)
{
    int num, i, n, c = 0;

    printf ("No. of prime numbers to be printed: ");
    scanf ("%d ", &num);

    for (n = 0, n < num; n++)
    {
        for (i = 2; i < num / 2; i++)
        {
            if (num % i == 0)
            {
                if (c == 0)
                {
                    printf("%d", num);
                    c = 0;
                }
                c++; 
            }
        }
    }
}
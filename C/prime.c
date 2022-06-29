#include <stdio.h>
#include <conio.h>

int main(void)
{
    int num, i, flag=0;
    
    printf ("Enter the number to check prime: ");
    scanf ("%d", &num); 

    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            flag++;
            break;
        }
    }

    if (num == 1)
    printf ("1 is neither prime nor composite \n");

    else if (flag == 0) 
    printf ("%d is prime \n", num); 
    
    else
    printf ("%d is not prime \n", num);

    _getch();
    return 0;
}
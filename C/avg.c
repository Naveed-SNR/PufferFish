#include <stdio.h>
#include <conio.h>

int main(void)
{   
    int n, i, x;    //n = no. of elements, i = element counter and x = element//
    float sum, avg;

    printf ("Enter the no. of elements: ");
    scanf ("%d", &n);
    
    for (i = 1; i <= n; i++)
    {      
        printf ("Number %d: ", i);
        scanf ( "%d", &x);
        sum += x;
    }

    avg = sum / n;

    printf ("Average: %f\n", avg);

    _getch();
    return 0;
}
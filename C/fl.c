#include <stdio.h>
#include <conio.h>

float fun1(int a, int b);
int main(void)
{   
    int x, y, r;

    for (int n = 0; ;n++)
    {
        r = fun1 (x, y);
        printf ("%f", r);
    }

    _getch();
    return 0;
}

float fun1(int a, int b)
{   
    //Perform four different operations on two numbers simultaneously
    float sum, dif, mul, div, rem;

    printf (" Enter first number:  ");
    scanf ("%d", &a);
    
    printf (" Enter second number: ");
    scanf ("%d", &b);

    sum = a + b;
    dif = a - b;
    mul = a * b;
    div = a / b;
    rem = a % b;

    printf(" Sum = %.2f \n Difference = %.2f \n Product = %.2f \n Quotient = %.2f, Remainder = %.2f \n", sum, dif, mul, div, rem);
    return 0;
}
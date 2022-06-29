#include <stdio.h>

int evaluate(int a, int b)
{   
    int sum, dif, mul, div;
    sum = a + b;
    dif = a - b;
    mul = a * b;
    div = a / b;

    printf(" Sum = %d \n Difference = %d \n Product = %d \n Quotient = %d \n", sum, dif, mul, div);
}
    
int main(void)
{
    int x, y, r;

    printf (" Enter first number:  ");
    scanf ("%d", &x);
    
    printf (" Enter second number:");
    scanf ("%d", &y);

    r = evaluate (x, y);
    printf ("%d", r);

    return 0;

}

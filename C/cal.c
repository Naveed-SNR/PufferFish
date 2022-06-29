#include <stdio.h>
#include <conio.h>

int main(void)
{   
    int a, b, r;        
    char o;

    printf ("Enter an expression: ");
    scanf ("%d %c %d", &a, &o, &b);

    r = a + b || r = a - b || r = a * b || r = a / b;
    
    printf("Result: %d%c%d", r);
}


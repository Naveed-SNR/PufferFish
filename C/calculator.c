#include <stdio.h>
#include <conio.h>

int main(void)
{
    float x, y, r;
    char o; //Stores the operator//

    printf("Enter an expression: ");
    scanf("%f %c %f", &x, &o, &y);

    switch (o)
    {
        case '+':
            r = x + y;
            break;
        case '-':
            r = x - y;
            break;
        case '*':
            r = x * y;
            break;
        case '/':
            r = x / y;
            break;              
    }
    
    printf("Result = %f \n", r);

    _getch();
    return 0;
} 
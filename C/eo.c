#include <stdio.h>
#include <conio.h>

int main ()
{
    int x;

    printf("Enter a number \n");
    scanf("%d", &x);

    if (x % 2 == 0)
    {
        printf("Number is even");
        }
    else
    {
        printf("Number is odd");
    }

    _getch();
    return 0;
}
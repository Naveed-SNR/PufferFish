#include <stdio.h>
#include <conio.h>

int main(void)
{
    int x, d; //x is the no. of  additional tasks completed, d is the regular salary//
    
    d = 30000;
    
    printf("Enter no. of  additional tasks completed: ");
    scanf("%d", &x);

    if (x < 1)
    {  
        printf("Salary = %d", d);
    }
    else if (x <= 2)
    {   
         d = d + 1000;
        printf("Salary = %d ", d);
    }
    else
    {
        d = d + 3000;
        printf("Salary = %d ", d);
    }
    
    _getch();
    return 0;
}
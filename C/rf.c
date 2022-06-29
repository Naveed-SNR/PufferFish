#include<stdio.h>

int fact(int x);

int main(void)
{
    int num ,r;
    
    printf("Enter a positive  number :", num);
    scanf("%d", &num);

    r=fact(num);
    printf("factorial = %d", r);
    
    return 0;
}

int fact (int x)

{    
    if (x <= 1)
        return 1;
    else
        return x*fact(x-1);
}                                                                 

#include<stdio.h>

int main(void)
{
    int n = 9;
    
    int *p = &n;

    printf("%d", n);

    printf("%d", *p);

    printf("%d", **p);

}
#include<stdio.h>
int main()
{
    int a, b;
        printf("wnsa godniuk number: ");
        scanf("%d", &a);
        printf("wnsa dayum number: ");
        scanf("%d", &b);
    if(a>b)
    {
        printf("%d is greater than %d", a, b);
    }
    else if(b>a)
    {
        printf("%d is greater than %d", b, a);
    }
    else if(a==b)
    {
        printf(" %d = %d", a, b);
    }

}

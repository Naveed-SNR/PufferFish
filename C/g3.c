#include<stdio.h>
int main(void)
{
    int a,b,c;
        printf("A = ");
        scanf("%d",&a);
        printf("B = ");
        scanf("%d",&b);
        printf("C = ");
        scanf("%d",&c);

    if(a==b && a==c)
    {
        printf("All Three Numbers Are Equal");
    }
    else if(a==b)
    {
        printf("A & B are Equal");
    }
    else if(b==c)
    {
        printf("B & C are Equal");
    }
    else if(a==c)
    {
        printf("A & C are Equal");
    }
    else if(a>b && a>c)
    {
            printf("A is greater than B and C");
    }
    else if(b>c)
    {
            printf("B is greater than A and C");
    }
    else
    {
            printf("C is greater than A and B");
    }

}

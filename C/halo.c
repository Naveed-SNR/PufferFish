#include<stdio.h>
int fun()
{
    const int count = 0;
    count++;
    return count;
}

int main()
{
    printf("%d\n", fun());
    printf("%d\n ", fun());
    printf("%d\n ", fun());
    
    
    return 0;
}

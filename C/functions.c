#include<stdio.h>

void stat();

int global = 1;

int main(void)
{   
    printf("Global Variable = %d\n", global);
    stat();
    stat();

    return 0;
}

void stat()
{
    int local = 2;
    static int stat = 3;
     
    printf("Static Variable = %d\n", stat);
    printf("Local Variable = %d\n\n", local);

    local++;
    stat++;
}

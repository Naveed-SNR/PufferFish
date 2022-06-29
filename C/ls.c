#include <stdio.h>

int main(void)
{
    int n;
    int numbers[] = {1, 21, 35, 4, 5, 63, 7, 74, 3};

    printf("Enter a number: ");
    scanf("%d", &n);

    //Logic for searching through numbers//
    for (int i = 0; i < 9; i++)
    {
        if (numbers[i] == n)
        {
            printf("Number found at %d\n", i + 1);
            return 0;
        }
    }
    printf("Number not found!\n");
    return 1;
}




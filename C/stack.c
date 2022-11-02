#include <stdio.h>

int top = 0;
int capacity = 3;

int main(void)
{
    int stack[capacity];

    while(1)
    {
        if(top == capacity)
            {
                printf("\nStack is full!\n\n");
                break;
            }
        else
        {
            printf("Enter element to push: ");
            scanf("%d", &stack[top]);
            printf("Element pushed!\n\n");
            top++;
        }
    }

    while (1)
    {
        if(top == 0)
        {
            printf("\nStack is empty!\n\n");
            break;
        }
        else
        {
            top--;
            printf("%d\n", stack[top]);
        }
    }
    return 0;
}
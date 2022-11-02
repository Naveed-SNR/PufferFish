#include <stdio.h>
#include <stdlib.h>
typedef struct stackll
{
    int n;
    struct stackll* next;

}stack;

int top = 0;
int capacity = 3;

int main(void)
{
    
    stack* ptr = (stack*)malloc(sizeof(stack));
    stack* head = NULL;
    while(1)
    {
        if(head == NULL)
        {
            printf("Enter element to push: ");
            scanf("%d", &ptr->n);
            ptr->next = NULL;
            head = ptr;
            break;
        }
        else
        {
            printf("Enter element to push: ");
            scanf("%d", &ptr->n);
            printf("Element pushed!\n\n");
            ptr->next = head;
            head = ptr;
        }
    }

   /* while (1)
    {
        if(top <= 0)
        {
            printf("\nStack is empty!\n\n");
            break;
        }
        else
        {
            printf("%d\n", stack[top]);
            top--;
        }
    }*/
    return 0;
}
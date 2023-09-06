#include<stdio.h>
#include<stdlib.h>

typedef struct circularll
{
    int n;
    struct circularll *next;
}c_ll;
c_ll* add_at_last(c_ll* base)
 {
    c_ll * trav=base;
    c_ll * node=(c_ll*)malloc(sizeof( c_ll));
    node->next=0;
    printf("Enter element : ");
    scanf("%d",&node->n);
    if (base==0)
        {
            base=node;
            node->next=base;
        }
    else
        {
            while (trav->next!=base)
                {
                    trav=trav->next;
                }
            trav->next=node;
            node->next=base;
        }
    return base;
 }
c_ll * delete_at_last( c_ll *base)
{
    c_ll * trav=base;
    if (base==0)
        {
            printf("\nCircular linkedlist is empty.\n");
        }
    else
        {
            if (trav->next==base)
                {
                    printf("\nDeleted Element is: %d",trav->n);
                    base=0;
                    trav->next=0;
                    free (trav);
                    trav=0;
                }
    else
        {
            c_ll *temp=base;
        while (trav->next!=base)
            {
                temp=trav;
                trav=trav->next;
            }
            trav->next=0;
            printf("\nDeleted Element is: %d",trav->n);
            temp->next=base;
            free(trav);
            trav=0;

        }
        }
            return base;
 }
void display(c_ll * base)
{
    c_ll * trav=base;
    printf("\nElements in the list are: \n");
    while (trav->next!=base)
        {
            printf("%d ",trav->n);
            trav=trav->next;
        }
    printf("%d  ",trav->n);
    printf("\n\n");
}
int main()
{
    int C;
    c_ll * base=0;
    do
        {
            printf ("\nPress 1: To insert at last.\nPress 2: To delete at last.\n");
            printf("Press 3: To display the elements.\nPress 4: To exit.\n");
            printf("Enter choice: ");
            scanf("%d",&C);
        switch (C)
        {
            case 1:
                base=add_at_last(base);
            break;
            case 2:
                base=delete_at_last(base);
            break;
            case 3:
                display(base);
            break;
            case 4:
                printf("\nProgram ended.");
            return 0;
        }
        }
        while (1);
}

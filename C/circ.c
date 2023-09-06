#include <stdio.h>
struct node
{
    int data;
    struct node *next;
};

int main(void)
{
   struct node *head = NULL;
   struct node *googoogoo = NULL;

struct node googs()
{
    googoogoo = (struct node*)malloc(sizeof(struct node));
        ptr->next = googoogoo;
        scanf("%d",googoogoo->data);
        googoogoo->next = head;
}
   if(head == NULL)
   {
        head = (struct node *)malloc(sizeof(struct node));
        scanf("%d", head->data);
        head->next = NULL;
    
   }
   else
   {
        struct node *ptr = head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        
        googs
   }
    
}
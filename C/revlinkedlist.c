#include<stdio.h>
#include<stdlib.h>

struct node{
   int data;
   struct node*next;
  };

void pallindrome(struct node *);

 int main(void)
 {
     struct node*head=NULL;
     struct node*second=NULL;
     struct node*third=NULL;

     head=(struct node*)malloc(sizeof(struct node));
     second=(struct node*)malloc(sizeof(struct node));
     third=(struct node*)malloc(sizeof(struct node));

     head->data=1;
     head->next=second;

     second->data=2;
     second->next=third;

     third->data=3;
     third->next=NULL;

    pallindrome(head);
    return 0;
 }

void pallindrome(struct node* head)
{
    int i = -1, c = 0;

    struct node * p = head;
    struct node * ptr = (struct node*)malloc(sizeof(struct node));
    struct node* head2 = NULL;

    do
    {
        if(head2 == NULL)
        {
            ptr = p;
            ptr->next = NULL;
            head2 = ptr;
        }
        else
        {
            ptr = p;
            ptr->next = head2;
            head2 = ptr;
        }
        if(p->next != NULL)
            p = p->next;
        i++;
    }while(p->next != NULL);

    p = head;
    ptr = head2;

    while(ptr->next !=NULL)
    {
        if(p->data == ptr->data)
            c++;
        
        p = p->next;
        ptr = ptr->next;
    }

    if (c==i)
        printf("Linked list is Pallindrome\n\n");
    else
        printf("Linked list is not Pallindrome\n\n");
}

  
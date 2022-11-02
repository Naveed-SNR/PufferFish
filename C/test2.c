#include<stdio.h>
#include<stdlib.h>


struct node{
   int data ;
   struct node*next;
  };
  struct node*insertend(struct node*);
 int main()
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

     insertend(head,30);


 }
  struct node*insertend(struct node*head,int n){
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    struct node*p=head;
    ptr->data=n;
    while(p->next!=NULL)
     {
       p=p->next;
     }
     p->next=ptr;
     ptr->next=NULL;
     return head;



  }
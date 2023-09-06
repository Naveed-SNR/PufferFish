    #include<stdio.h>
    #include<stdlib.h>

    struct Node{
        int data;
        struct Node * next;
    };

    void linkedListTraversal(struct Node *ptr)
    {
        while (ptr != NULL)
        {
            printf("Element: %d\n", ptr->data);
            ptr = ptr->next;    
        }
    }

    struct Node * insertAtFirst(struct Node *head, int data)
    {
        struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
        
        ptr->data = data;
        ptr->next = head;
        
        return ptr; 
    }

    struct Node * insertAtIndex(struct Node *head, int data, int index)
    {
        struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
        struct Node * p = head;
        int i = 1;

        while (i != index-1)
        {
            p = p->next;
            i++;
        }
        ptr->data = data;
        ptr->next = p->next;
        p->next = ptr;
        return head;
    }

    struct Node * insertAtEnd(struct Node *head, int data)
    {
        struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
        ptr->data = data;
        struct Node * p = head;

        while(p->next!=NULL)
        {
            p = p->next;
        }
        p->next = ptr;
        ptr->next = NULL;
        return head;
    }

    struct Node * insertAfterNode(struct Node *head, struct Node *prevNode, int data){
        struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
        ptr->data = data;

        ptr->next = prevNode->next;
        prevNode->next = ptr;

        return head;
    }

    int main(void)
    {
        struct Node * temp;
        struct Node *head;
        struct Node *second;
        struct Node *third;
        struct Node *fourth;

        head = (struct Node *)malloc(sizeof(struct Node));
        second = (struct Node *)malloc(sizeof(struct Node));
        third = (struct Node *)malloc(sizeof(struct Node));
        fourth = (struct Node *)malloc(sizeof(struct Node));
        temp =(struct Node *)malloc(sizeof(struct Node));
        temp = head;
        
        printf("Enter element: \n");
        scanf("%d", &head->data);
        head->next = second;

        printf("Enter element: \n");
        scanf("%d",&second->data);
        second->next = third;

        printf("Enter element: \n");
        scanf("%d", &third->data);
        third->next = fourth;

        printf("Enter element: \n");
        scanf("%d", &fourth->data);
        fourth->next = NULL;

        printf("Linked list before insertion\n");
        linkedListTraversal(head);

        insertAtIndex(head, 30, 3);
        printf("\nLinked list after insertion\n");
        linkedListTraversal(head);

        return 0;
    }
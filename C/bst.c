#include<stdio.h>
#include<stdlib.h>

typedef struct tree
{
    int data, i;
    struct tree* left;
    struct tree* right;
}bst;

bst* addnode(bst*);
void print(bst*);

int main(void)
{
    int n;      
    bst* root = NULL;

    while(1)
    {
        printf("Enter 1 to add node or 2 to print tree: ");
        scanf("%d", &n);

        if(n != 1)
        {
            print(root);
            break;
        }
        
        addnode(root);
        printf("Node Added!\n");
    }
    
}

bst* addnode(bst* root)
{
    bst* ptr = (bst*)malloc(sizeof(bst));

    printf("Enter data: ");
    scanf("%d", &ptr->data);

    if(root == NULL)
    {
        root = (bst*)malloc(sizeof(bst));
        root->data = ptr->data;
    }
    else
    {
        bst*trv = root;

        while(trv->data != NULL)
        {
            if(trv->data <= ptr->data)
            {
                trv = trv->left;
            }
            else
            {
                trv = trv->right;
            }
        }
        trv->data = ptr->data;
    }
    return root;
}

void print(bst* root)
{
    bst* trv = root;
    bst* prv = root;

    if(trv->i != 0)
    {
        prv = trv;
        printf("%d\n", trv->data);
        if(trv->right != NULL)
        {
            trv = prv;
        }
        trv = trv->right;
    }

    while (1)
    {
        prv = trv;
        printf("%d\n", trv->data);
        trv->i++;

        if(trv->left != NULL)
        {
            trv = prv;
            break;
        }
        trv = trv->left;
    }
}



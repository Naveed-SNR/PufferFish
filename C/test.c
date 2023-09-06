#include<stdio.h>
#include<stdlib.h>

typedef struct tree
{
    int data, i = 0;
    bt* left;
    bt* right;
}bst;

void print(bt*);

int main(void)
{
    bt* root = (bt*)malloc(sizeof(bt));
}

void print(bt* root)
{
    bt* trv = root;
    bt* prv = root;

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

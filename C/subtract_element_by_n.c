#include<stdio.h>
int main()
{
    int New,i,A[10],n;
    printf("Enter the Number you want to subtract in array\n");
    scanf("%d",&n);
    printf("Initial Elements\n",A[10]);
    for(i=0;i<10;i++)
    {
        printf("Element number %d :  ",i);
        scanf("%d",&A[i]);
    }

    printf("\n\nFinal Elements\n");
    for(i=0;i<10;i++)
    {
        New=A[i]-n;
        printf("Element %d :  ",i);
        printf("%d \n",New);
    }




return 0;
}

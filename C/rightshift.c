#include<stdio.h>

void  main()
{
  int i,n,a[100],temp;

    printf("Enter the number of elements:\n") ;
    scanf("%d",&n);
 
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
 
    printf("Original array\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
 
    /* shifting array elements */
    temp=a[n-1];
    for(i=n-1;i>0;i--)
    {
        a[i]=a[i-1];
    }
    a[0]=temp;
 
    printf("\nNew array after rotating by one postion in the right direction\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
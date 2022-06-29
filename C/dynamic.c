#include <stdio.h>

int main (void)
{
   int n;
   
   printf("Enter no. of elements: ");
   scanf("%d", &n);

   int b[n];

   for (int i=0;i<n;i++)
   {
      printf("Enter element %d:", i+1);
      scanf("%d",&b[i]);
   }
   return 0;
}
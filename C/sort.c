#include <stdio.h>

int main (void)
{
   //n = no. of elements in the array, i & j are used to compare two elements in the array//
   int n, i, j, temp;

   printf("Enter the no. of elements to be stored: \n");
   scanf("%d", &n);

   int a[n];
   
   //Loop for storing elements//
   for (i = 0; i < n; i++)
   {
      printf("Enter element %d: ", i + 1);
      scanf("%d", &a[i]);
   }
   //Logic for sorting the elements//
   for (i = 0; i < n; i++)
   {
      for (j = i + 1; j < n; j++)
      {  
         if(a[i] > a[j])
         {
           temp = a[i];
           a[i] =a[j];
           a[j] = temp;
         }
      }   
   }
   //Loop for printing sorted elements//
   for (i = 0; i < n; i++)
   {
      printf("%d\t", a[i]);
   }
   return 0;
}
#include <stdio.h>
#include <conio.h>

int main(void)
{
   int n, i, k, r, j ; // n for size of pyramids(rows), i = rows, r = columns for first half, j = columns for second half, c for printing no.s//

   printf("Enter the size of the pyramid to be printed: ");
   scanf("%d", &n);
   
   //for moving to the next row//
   for (int i = 0; i < n; i++)
   {  
      //loop for printing second half of the pyramid//
      for (int j = 0; j < i; j++)
      {
         if ( (i + j) % 2) 
            printf("1");
         else
            printf("0");
      }
      printf("\n");
   }
   
   return 0;
}
#include <stdio.h>
#include <conio.h>

int main(void)
{
   int n, i, k, r, j, c; // n for size of pyramids(rows), i = rows, r = columns for first half, j = columns for second half, c for printing no.s//

   printf("Enter the size of the pyramid to be printed: ");
   scanf("%d", &n);
   
   //for moving to the next row//
   for (int i = 0; i < n; i++)
   {
      //loop for printing spaces//
      for (int k = n; k > i; k--)
      {
         printf(" ");
      }
      //loop for printing first half of the pyramid//
      for (int r = 0; r < i; r++)
      {
         if (r % 2 != 0)
            printf("0");
         else
            printf("1");
      }
      //loop for printing second half of the pyramid//
      for (int j = 0; j <= i; j++)
      {
         if ((i + j) % 2 == 0)
            printf("1");
         else
            printf("0");
      }
      printf("\n");
   }
   
   return 0;
}
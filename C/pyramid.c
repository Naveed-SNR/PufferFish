#include <stdio.h>
#include <conio.h>

int main(void)
{
   int n, i, j, s; // n for size of pyramids(rows), i = rows, r = columns for first half, j = columns for second half, c for printing no.s//

   printf("Enter the size of the pyramid to be printed: ");
   scanf("%d", &n);
   
   //for moving to the next row//
   for (int i = 1; i <= n; i++)
   {  
      for (int j = 1; j <= i; j++)
      {
         if ((i+j)%2 == 0)
            printf("1");
         else
            printf("0");
      }

      printf("\n");
   }
   
   return 0;
}
#include <stdio.h>
#include <conio.h>

int fact(int n)
{
   int f = 1, res;

   printf ("Enter a number: ");
   scanf ("%d", n);

   for (int i = 1;i <= n; i++)
   {
      f = f * i;
   }
   res = f;
   printf ("Factorial of %d is: %d", n, res);
}

int main(void)
{
   int a, r;
   
   r = fact(a);
   printf ("%d", r);
}
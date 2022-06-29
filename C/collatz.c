#include <stdio.h>

int collatz(int );
int main(void)
{
   int n;

   printf("Enter a number to check Collatz Conjecture Count: ");
   scanf("%d", &n);

   printf("%d", collatz(n));
}

int collatz(int n)
{
   // base case
   if (n == 1)
      return 0;
   // recursive case for even numbers
   else if ((n % 2) == 0)
      return 1 + collatz(n / 2);
   // recursive case for odd numbers
   else
      return 1 + collatz(3*n +1);
}
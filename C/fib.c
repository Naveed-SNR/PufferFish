#include<stdio.h>
 
int fib(int);
 
int main(void)
{
   int n, i = 0, c;
   
   printf("Enter no. of elemetns: ");

   scanf("%d",&n);
 
   printf("Fibonacci series\n");
   
   for ( c = 1 ; c <= n ; c++ )
   {
      printf("%d\n", fib(i));
      i++; 
   }
   return 0;
}
 
int fib(int n)
{
   if ( n == 0 || n == 1)
      return 1;
   else
      return ( fib(n-1) + fib(n-2) );
}
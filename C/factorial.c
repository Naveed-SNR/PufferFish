#include <stdio.h>
#include <conio.h>

int main(void)
{
  int i, f = 1, n;
 
  printf ("Enter a number: ");
  scanf ("%d", &n);
 
  for(i = 1; i <= n; i++)
   {
      f = f * i;
   }

  printf ("Factorial of %d is: %d", n, f);

  _getch();
  return 0;
}
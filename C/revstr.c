#include <stdio.h>
#include <conio.h>

int main(void)
{
   char s[1000], r[1000];
   int begin, end, count = 0;

   for (int i = 0; ;i++)
   {
      printf("Input a string: ");
      gets(s);

      // Calculating string length
      while (s[count] != '\0')
         count++;

      end = count - 1;

      for (begin = 0; begin < count; begin++)
      {
         r[begin] = s[end];
         end--;
      }

      r[begin] = '\0';

      printf("%s\n", r);
   }

   _getch();
   return 0;
}
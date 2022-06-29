#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   char str[100];
   FILE *fp=NULL;

   fp = fopen("rog.txt","r");

   if(fp == NULL)
   {
      printf("File not found!");   
      exit(1);             
   }

   printf("Enter string to write to file: ");
   gets(str);
   fprintf(fp, "%s", str);

   
   fclose(fp);

   return 0;
}
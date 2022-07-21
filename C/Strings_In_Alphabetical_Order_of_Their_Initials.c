
#include<stdio.h>
#include<string.h>

int main()
{
   char str[5][20], t[20],temp[20];
   int i, j=0,count=0,k=0,m=0;
   printf("Enter any string (5 names):\n");
   for(i=0; i<5; i++)
   {
      scanf("%s", str[i]);
       }
   for(i=0; i<5; i++)
   {
      for(j=i+1; j<5; j++)
      { m=0;
          while(str[i][m]!='\0')
          {
              if(str[i][m]==str[j][m])
              {
                  m++;
                  continue;

              }
              else if(str[i][m]>str[j][m])
         { k=0;temp[k]='\0';
        while(str[i][k]!='\0')
          {
          temp[k]=str[i][k];
              k++;
          }
          temp[k]='\0';
        k=0;
          while(str[j][k]!='\0')
          {
          str[i][k]=str[j][k];
          k++;

          }
          str[i][k]='\0';
          k=0;
          while(temp[k]!='\0')
          {

              str[j][k]=temp[k];
              k++;

           }
           str[j][k]='\0';
           break;
          }
          else
          break;

          }
         }

         }
   printf("\nsorted array\n");
   for(i=0;i<5;i++)
   {
      printf("\n%s", str[i]);
   }
}

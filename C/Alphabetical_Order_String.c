#include <stdio.h>
#include <string.h>
void main()
{
  char s[100],ch;
  int i,j,end;

       printf("Input the string : ");
       fgets(s, sizeof s, stdin);


    i=0;
    while(s[i]!='\0')
    {
        i++;
    }
    end=i;


  for(i=1;i<end;i++)
    for(j=0;j<end-i;j++)
	if(s[j]>s[j+1])
	{
	  ch=s[j];
	  s[j] = s[j+1];
	  s[j+1]=ch;
	}
   printf("%s",s);
  }
  

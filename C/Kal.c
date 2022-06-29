#include<stdio.h>
int main (void)
{
   int x,y,r;
   char dd;
   
   printf("wansa kya chui karun");
   scanf("%c",&dd);
   
   printf("enter the two numbers ");
   scanf("%d %d ",&x,&y);
   
   switch (dd)
   {
    
    case '+':
    printf("%d+%d=%d",x,y,r=x+y);
    break;
   
    case '-':
    printf("%d-%d=%d",x,y,r=x-y);
    break;
    
    case '*':
    printf("%d*%d=%d",x,y,r=x*y);
    break; 
    
    case '/':
    printf("%d/%d=%d",x,y,r=x/y);
    break;
   
   }
}
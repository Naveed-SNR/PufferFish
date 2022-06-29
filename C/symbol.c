#include<stdio.h>
int main(void)
{
    int i,j,n;
    char a="%d";
    char b="%f";
    char x = "%x";
    printf("SIZE:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {

            if((i+j)%2==0)
            {
                printf("%c",b);
            }
            else
            {
                printf("%c");
            }
        }
        printf("\n");
   }
}
#include <stdio.h>
#include <conio.h>

int main(void)
{
    int num, n, r,rev=0;
        printf("Enter Number : \n");
        scanf("%d", &num);
        n = num;
        printf("Reverse of digits (%d) \n ",num);
    //reverse of digits logic
    while(num>0)
    {
        r=num%10;
        num=num/10;
        rev=rev*10+r;
        
    }
        printf("is %d", rev);

        if (rev == n)
        {
        printf("\nThe number is pallindrome\n");
        }
       _getch();
       return 0; 
}

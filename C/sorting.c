#include <stdio.h>
#include <conio.h>

int main(void)
{
    char A[10], i, j, temp;
    printf("enter the elements of an array \n");
    for(i = 0;i < 10; i++)
    {
        scanf("%c",&A[i]);
    }
    
    for (i = 0;i < 6; i++)    //sorting logic for characters
    {
        for (j = i + 1;j < 6; j++)
        {
            if (A[i] > A[j])
            {
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
    
    for(i=0;i<6;i++)
    {
        printf("%c",A[i]);
    }



}
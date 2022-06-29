//Function to find factorial of a number using recursion//
#include <stdio.h>

int fact(int x);

int main(void)
{
    int num;

    printf("Enter a positive number :", num);
    scanf("%d", &num);
    printf("Factorial %d", fact(num));
}
int num()
{
    int x;
    if (x < 1)
    printf("Error\n");
}
int fact (int x)    //Recursive function definition//
{

    if(x == 1)     //Base Case executing statements from non-recursive part//
    return 1;
    else
    return x*fact(x-1);  //Recursive case calling function again to initiate recursion//
}
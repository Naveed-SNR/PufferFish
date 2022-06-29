
#include <stdio.h>
int factorial();
// function to find factorial of given number
int factorial(int x)
{
	if (x == 0)
		return 1;
	return x * factorial(x - 1);
}

int main()
{
	int num;
    printf("Enter the number: ");
    scanf("%d", &num);
	printf("Factorial of %d is %d", num, factorial(num));
	return 0;
}

#include<stdio.h>

float square();		 			//Function Prototype Declaration//
int main(void)
{ 
	printf("Going to calculate the area of the square");
	float area = square(); 		//Function Call//
	printf("The area of the square: %f\n",area);
}
float square()						//Function Definition//
{
	float s;
	printf("Enter the length of the side in meters: ");
	scanf("%f", &s);
	return s*s;
}

#include<stdio.h>
#include<conio.h>

void sum();
void mul();
void sub();
void div();  

int main(void)
//calling function
{
    sum();
    mul();
    sub();
    div();

    _getch();
    return 0;
}

//Addition
void sum()
{
    int a, b, sum;

    printf ("Addition :\n\n");
    
    printf ("Enter two numbers\n");
    scanf ("%d%d",&a,&b);
    
    sum = a + b;
    
    printf ("%d is the sum of two numbers\n\n",sum);
}

//Multiplication
void mul()
{
    int a, b , mul;

    printf("Multiplication :\n\n");
    
    printf ("Enter two numbers\n");
    scanf ("%d%d",&a,&b);
    
    mul = a * b;
    
    printf ("%d is the multiplication of two numbers\n\n",mul);
}

//Subtraction
void sub()
{
    int a, b, sub;

    printf ("Subtraction :\n\n");
    
    printf ("Enter two numbers\n");
    scanf ("%d%d",&a,&b);
    
    sub = a - b;
    
    printf ("%d is the Subtraction of two numbers\n\n",sub);
}

//Division
void div()
{
    int a, b, div;

    printf ("Division :\n\n");      
    
    printf ("Enter two numbers\n");
    scanf ("%d%d",&a,&b);
    
    div = a / b;
    
    printf ("%d is the Division of two numbers",div);
}
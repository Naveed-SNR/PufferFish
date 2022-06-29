#include <stdio.h>
#include <conio.h>

int main (void)
{   
     long  x, r, b=0, i=1;     // r = remainder and b = binary form of the entered number //
    
    printf("Enter the number to be converted into binary: ");  
    scanf("%li", &x); 

    while (x)
    {
        r = x % 2;
        b = b + (r*i);
        x = x / 2;
        i = i*10;
    }
    
    printf(" Binary form of the entered number is: %li \n", b);
    
    _getch();
    return 0;
}
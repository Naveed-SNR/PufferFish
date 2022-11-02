#include <stdio.h>
#include<iostream>
using namespace std;
int main()
{
int num1 = 5;
int num2 = 3;
int num3 = 2;
num1 = num2++;
num2 = --num3;
cout << num1 << num2<<num3;
return 0;
}
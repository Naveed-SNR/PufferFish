#include<iostream>

#include<conio.h>

using namespace std;




struct fraction{int numerator; int denominator;};

fraction fadd(fraction a, fraction b);

fraction fsub(fraction a, fraction b);

fraction fmul(fraction a, fraction b);

fraction fdiv(fraction a, fraction b);




int main()

{



fraction f[3]; char c, op;



do{

cout<<"Enter your task : ";

cin >>f[0].numerator>>c>>f[0].denominator>>op>>f[1].numerator>>c>>f[1].denominator;

if(!f[0].denominator || !f[1].denominator) {cout<<"Illeagle fraction !"<<endl; op=false;}

switch(op) {

case '+':f[2]=fadd(f[0], f[1]); break;

case '-':f[2]=fsub(f[0], f[1]); break;

case '*':f[2]=fmul(f[0], f[1]); break;

case '/':f[2]=fdiv(f[0], f[1]); break;

default:cout<<"Unknow operator please try again !"<<endl;}

cout<<"Answer = "<<f[2].numerator<<c<<f[2].denominator;

cout<<"!Press c to continue or any key to exit."<<endl<<endl;

}while(getch()=='c');

}




fraction fadd(fraction a, fraction b){

fraction f;

f.numerator =a.numerator*b.denominator+a.denominator*b.numerator;

f.denominator=a.denominator*b.denominator; return f;}




fraction fsub(fraction a, fraction b){

fraction f;

f.numerator =a.numerator*b.denominator-a.denominator*b.numerator;

f.denominator=a.denominator*b.denominator; return f;}




fraction fmul(fraction a, fraction b){

fraction f;

f.numerator =a.numerator*b.numerator;

f.denominator=a.denominator*b.denominator; return f;}




fraction fdiv(fraction a, fraction b){

fraction f;

if(b.numerator != 0){

f.numerator =a.numerator*b.denominator;

f.denominator=b.numerator*a.denominator;}

else cout<<"Math error !"<<endl; return f;}

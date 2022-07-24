#include<iostream>
using namespace std;

int callnum()
{
	static int i = 0 ;
	i++;
	return i;
}


int main()
{
	int x = 0;
	for(int i=0; i<10; i++)
	{
		 x = callnum();
	}
	cout<<"I have been called "<<x<<"  times.";
}

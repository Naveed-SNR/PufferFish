#include<iostream>
using namespace std;

class Largest
{
	private:
		int a, b, m;
	public:
		void set_data();
		friend void find_max(Largest);	
};

void Largest::set_data()
{
	cout<<"Enter the First No:";
	cin>>a;
	cout<<"Enter the Second No:";
	cin>>b;
}

void find_max(Largest t)
{
	if(t.a>t.b)
		t.m=t.a;
	else
		t.m=t.b;
		
		cout<<"Maximum Number is\t"<<t.m;
}

int main(void)
{
	Largest l;
	l.set_data();
	find_max(l);
	return 0;
}

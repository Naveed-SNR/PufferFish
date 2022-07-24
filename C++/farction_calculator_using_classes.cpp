#include<iostream>
#include<stdlib.h>
using namespace std;

class calfract
{
    int neum, denm;
    public:
        calfract():neum(0), denm(0)
			{	}
		void getfrac();
		void arth_op(calfract, calfract, char);
		void dispfrac() const;
		void lowTerms();
};

void calfract::getfrac()
{
	char temp;
	cout << "\nEnter a fraction in a/b form: ";
	cin >> neum >> temp >> denm;
}


void calfract::arth_op(calfract frac1, calfract frac2, char op)
 {

	switch(op)
  {
		case '+':
			cout << "\nAddition of two fraction is: ";
			neum = (frac1.neum * frac2.denm) + (frac1.denm * frac2.neum);
			denm = frac1.denm * frac2.denm;
		break;

		case '-':
			cout <<"\nSubtraction of two fraction is: ";
			neum = (frac1.neum * frac2.denm) - (frac1.denm * frac2.neum);
			denm = frac1.denm * frac2.denm;
		break;

		case '*':
			cout <<"\nMultiplication of two fraction is: ";
			neum = frac1.neum * frac2.neum;
			denm = frac1.denm * frac2.denm;
		break;

		case '/':
			cout <<"\nDivision of two fraction is: ";
			neum = frac1.neum * frac2.denm;
			denm = frac1.denm * frac2.neum;
		break;

	}
}

void calfract::dispfrac() const
{
	cout << neum << "/" << denm;
}

void calfract::lowTerms()
{
	long tneum, tdenm, temp, gcd;

	tneum = labs(neum);
	tdenm = labs(denm);

	if(tdenm == 0)
  {
		cout <<"Illegal fraction: division by 0";
		exit(1);
	} else if (tneum == 0)
  {
		neum = 0;
		denm = 1;
		return;
	}

	while(tneum != 0)
  {
		if(tneum <tdenm)
    {
			temp = tneum;
			tneum = tdenm;
			tdenm = temp;
		}
		tneum = tneum - tdenm;
	}
	gcd = tdenm;
	neum = neum/gcd;
	denm = denm/gcd;
	cout <<neum <<"/" <<denm;
	cout <<endl;
}
int main()
{
	calfract frac1, frac2, frac3;
	char oprt;
	cout <<"\nEnter first fraction: ";
	frac1.getfrac();
	cout <<"\nEnter second fraction: ";
	frac2.getfrac();
	cout <<"\nEnter an operator for arithmatic operation: ";
	cin >>oprt;
	frac3.arth_op(frac1, frac2, oprt);
	frac3.dispfrac();
	cout <<"\nLoswest terms of fraction is: ";
	frac3.lowTerms();

	return 0;
}
